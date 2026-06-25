#pragma once
#include <stack>
#include <queue>
#include <string>
#include <ctime>

using namespace std;

class clsQueueLine
{
private:

    struct stDateTime
    {
        int Year;
        int Month;
        int Day;

        int Hour;
        int Minute;
        int Second;
    };

    stDateTime GetCurrentDateTime()
    {
        time_t t = time(0);
        tm now;

        localtime_s(&now, &t);

        stDateTime DT;

        DT.Year = now.tm_year + 1900;
        DT.Month = now.tm_mon + 1;
        DT.Day = now.tm_mday;

        DT.Hour = now.tm_hour;
        DT.Minute = now.tm_min;
        DT.Second = now.tm_sec;

        return DT;
    }

    struct stTicket
    {
        string FullTicketNumber = "";
        stDateTime Date;
        int WaitingClientsBeforeMe = 0;
        int ExpectedDelayTime = 0;
    };

    void _PrintTicket(stTicket Ticket) {
        cout << "\t\t\t__________________________________\n";
        cout << "\t\t\tTicket: " << Ticket.FullTicketNumber << endl;

        cout << "\t\t\tDate  : " << Ticket.Date.Day << "/" << Ticket.Date.Month << "/" << Ticket.Date.Year;
        cout << " - " << Ticket.Date.Hour << ":" << Ticket.Date.Minute << ":" << Ticket.Date.Second << "\n";

        cout << "\t\t\tWaiting Clients Before: " << Ticket.WaitingClientsBeforeMe << endl;
        cout << "\t\t\tExpected Delay Time   : " << Ticket.ExpectedDelayTime << " Min." << endl;
        cout << "\t\t\t__________________________________\n";
    }

    string _Prefix = "";
    int _ServeTime = 0;
    int _TotalTicketsCount = 0;
    queue <stTicket> _Queue;

public:

    clsQueueLine(string Prefix, int ServeTime) {
        _Prefix = Prefix;
        _ServeTime = ServeTime;
    }

    void IssueTicket() {

        _TotalTicketsCount++;

        stTicket Ticket;

        Ticket.FullTicketNumber = _Prefix + to_string(_TotalTicketsCount);
        Ticket.Date = GetCurrentDateTime();
        Ticket.WaitingClientsBeforeMe = _Queue.size();
        Ticket.ExpectedDelayTime = Ticket.WaitingClientsBeforeMe * _ServeTime;
        _Queue.push(Ticket);
    }

    void PrintInfo() {
        cout << "\n\t\t\t----------------------------------\n";
        cout << "\t\t\t\t   Queue Info\n";
        cout << "\t\t\t----------------------------------\n";
        cout << "\t\t\tPrefix             : " << _Prefix << endl;
        cout << "\t\t\tTotal Tickets      : " << _TotalTicketsCount << endl;
        cout << "\t\t\tServed Clients     : " << ServedClients() << endl;
        cout << "\t\t\tWaiting Clients    : " << _Queue.size() << endl;
        cout << "\t\t\t----------------------------------\n";
    }

    void PrintTicketsRTL() {

        queue <stTicket> TempQueue = _Queue;

        cout << "\n";
        cout << "\t\t\t  ";
        while (!TempQueue.empty()) {
            cout << "<--" << TempQueue.front().FullTicketNumber;
            TempQueue.pop();
        }
        cout << "\n";
    }

    void PrintTicketsLTR() {

        stack <stTicket> TempStack;
        queue <stTicket> TempQueue = _Queue;

        while (!TempQueue.empty()) {
            TempStack.push(TempQueue.front());
            TempQueue.pop();
        }
        cout << "\t\t\t  ";

        while (!TempStack.empty()) {
            cout << "-->" << TempStack.top().FullTicketNumber;
            TempStack.pop();
        }
        cout << "\n";
    }

    bool ServeNextClient() {
        if (!_Queue.empty())
        {
            _Queue.pop();
            return true;
        }
        return false;
    }

    void PrintAllTickets() {
        cout << "\n\n\t\t\t   --- All Active Tickets ---\n";

        if (_Queue.empty())
        {
            cout << "\n\n\t\t\t     --- No Tickets ---\n";
        }

        queue <stTicket> TempQueue = _Queue;

        while (!TempQueue.empty()) {
            _PrintTicket(TempQueue.front());
            TempQueue.pop();
        }
    }

    short ServedClients() {
        return _TotalTicketsCount - _Queue.size();
    }

};