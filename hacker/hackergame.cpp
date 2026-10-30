#include "HackSystem.h"

int main()
{
    Netrunner player(5);

    SmartDoor door;
    VendingMachine machine;
    CyborgGuard cyborg(100);

    cout << "=== CYBER HACKING SYSTEM ===" << endl;
    cout << "Hacker skill level: 5" << endl;

    cout << "\n1. Hacking Smart Door:" << endl;
    player.breachProtocol(door);

    cout << "\n2. Hacking Vending Machine:" << endl;
    player.breachProtocol(machine);

    cout << "\n3. Hacking Cyborg Guard:" << endl;
    player.breachProtocol(cyborg);

    cout << "\n=== RESULTS ===" << endl;

    cout << "Door hacked: " << door.isHacked() << endl;
    cout << "Vending machine hacked: " << machine.isHacked() << endl;
    cout << "Cyborg frozen: " << cyborg.isHacked() << endl;

    cout << "\nCyborg action:" << endl;
    cyborg.attack();

    return 0;
}