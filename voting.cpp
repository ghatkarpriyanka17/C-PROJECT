#include <iostream>
using namespace std;

int main()
{
    int voterId;
    int voted = 0;
    int choice;

    // Candidate votes
    int vote1 = 0, vote2 = 0, vote3 = 0;

    cout << "----- Online Voting System -----" << endl;

    // Voter Authentication
    cout << "Enter Voter ID: ";
     
    cin >> voterId;

    if(voterId <= 0)
    {
        cout << "Invalid Voter ID" << endl;
        return 0;
    }

    while(true)
    {
        cout << "\nMenu" << endl;
        cout << "1. Cast Vote" << endl;
        cout << "2. View Results" << endl;
        cout << "3. Exit" << endl;

        cout << "Enter choice: ";
        cin >> choice;

        if(choice == 1)
        {
            if(voted == 1)
            {
                cout << "You have already voted!" << endl;
            }
            else
            {
                int candidate;

                cout << "\nCandidates List" << endl;
                cout << "1. kiran pawar" << endl;
                cout << "2. Akashy kaginkar" << endl;
                cout << "3. rahul patil" << endl;

                cout << "Choose candidate: ";
                cin >> candidate;

                if(candidate == 1)
                vote1++;

                else if(candidate == 2)
                vote2++;

                else if(candidate == 3)
                vote3++;

                else
                cout << "Invalid candidate" << endl;

                voted = 1;
                cout << "Vote Recorded Successfully" << endl;
            }
        }

        else if(choice == 2)
        {
            cout << "\n--- Election Results ---" << endl;
            cout << "Candidate A: " << vote1 << " votes" << endl;
            cout << "Candidate B: " << vote2 << " votes" << endl;
            cout << "Candidate C: " << vote3 << " votes" << endl;
        }

        else if(choice == 3)
        {
            cout << "Exiting Program..." << endl;
            break;
        }

        else
        {
            cout << "Invalid Choice" << endl;
        }
    }

    return 0;
}