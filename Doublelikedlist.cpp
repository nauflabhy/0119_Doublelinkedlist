#include <iostream>
#include <string>
using namespace std;

class Node {
    public:
        int noMhs;
        Node *next;
        Node *prev;
};

class DoubleLinkedList {
    private:
        Node *START;

    public:
        DoubleLinkedList(){
            START = NULL;
        }

        void addNode(){
            int nim;
            cout << "\nEnter the roll number of the student: ";
            cin >> nim;

            // Step1 : Allocate memory for new node
            Node *newNode = new Node();

            // Step2 : Assign value to the data fields
            newNode->noMhs = nim;

            // Step3 : Insert at beginning if list is empty or nim is smallest
            if (START == NULL || nim <= START->noMhs)
            {
                if (START != NULL && nim == START->noMhs)
                {
                    cout << "\nDuplivate number not allowed" << endl;
                    return;
                }

                // Step4 : newNode.next = START
                newNode->next = START;

                // Step5 : Start.prev = newNode (if START exists)
                if (START != NULL)
                    START->prev = newNode;
                
                // Step6 : newNode.prev = NULL
                newNode->prev = NULL;

                // Step7 : START = newNode
                START = newNode;
                return;
            }
        }
};