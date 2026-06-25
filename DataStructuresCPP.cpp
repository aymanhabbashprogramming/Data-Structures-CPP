#include <iostream>
#include "clsMyString.h"
#include "clsQueueLine.h"

using namespace std;

int main() {

    clsQueueLine PayBillsQueue("A0", 10);

    PayBillsQueue.IssueTicket();
    PayBillsQueue.IssueTicket();
    PayBillsQueue.IssueTicket();
    PayBillsQueue.IssueTicket();
    PayBillsQueue.IssueTicket();

    cout << "\n\t\t\t\tPay Bills Queue Info:\n";
    PayBillsQueue.PrintInfo();

    PayBillsQueue.PrintTicketsRTL();
    PayBillsQueue.PrintTicketsLTR();

    PayBillsQueue.PrintAllTickets();
    PayBillsQueue.ServeNextClient();
    PayBillsQueue.ServeNextClient();
    PayBillsQueue.ServeNextClient();
    PayBillsQueue.PrintInfo();

    return 0;
}