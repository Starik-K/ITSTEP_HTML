#include <iostream>
#include <string>
using namespace std;

class Notification
{
protected:
    string message;
    string timestamp;

public:
    Notification(string m, string t)
    {
        message = m;
        timestamp = t;
    }
};

class EmailNotification : public Notification
{
private:
    string emailAddress;

public:
    EmailNotification(string m, string t, string email) : Notification(m, t)
    {
        emailAddress = email;
    }

    void send()
    {
        cout << "Відправка email на " << emailAddress << ": " << message << endl;
    }
};

class PushNotification : public Notification
{
private:
    string deviceId;

public:
    PushNotification(string m, string t, string id) : Notification(m, t)
    {
        deviceId = id;
    }

    void send()
    {
        cout << "Відправка пуша на пристрій " << deviceId << ": " << message << endl;
    }
};

int main()
{
    EmailNotification email("Привіт!", "10:30", "test@gmail.com");
    PushNotification push("Нове повідомлення", "10:35", "12345");

    email.send();
    push.send();

    return 0;
}