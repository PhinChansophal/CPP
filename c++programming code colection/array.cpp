#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int ID[50], limit;
    string Name[50];
    double GPA[50];
    
    cout << "Input the limit:";
    cin >> limit;
    
    for(int i = 1; i <= limit; i++)
    {
        cout << "Input Student_ID: ";
        cin >> ID[i];
        
        cout << "Input Name: ";
        cin >> Name[i];
        
        cout << "Input GPA: ";
        cin >> GPA[i];
    }
    
    int choice;
    
    while (true) {
        cout << "\nMenu:\n";
        cout << "1. Input student record\n";
        cout << "2. Output all student records\n";
        cout << "3. Sort by GPA\n";
        cout << "4. Delete student record\n";
        cout << "5. Exit\n";
        cout << "\nEnter your choice: ";
        
        cin >> choice;
        
        switch (choice) {
            case 1:
                cout << "Input Student_ID:";
                cin >> ID[limit];
                
                cout << "Input Name:";
                cin >> Name[limit];
                
                cout << "Input GPA:";
                cin >> GPA[limit];
                
                limit++;
                
                break;
                
            case 2:
                cout << "ID\tName\tGPA\n";
                
                for(int i = 1; i < limit; i++) {
                    cout << ID[i] << "\t" << Name[i] << "\t" << GPA[i] << endl;
                }
                
                break;
                
            case 3:
                for (int i = 0; i < limit - 1; i++) {
                    for (int j = i + 1; j < limit; j++) {
                        if (GPA[i] > GPA[j]) {
                            swap(ID[i], ID[j]);
                            swap(Name[i], Name[j]);
                            swap(GPA[i], GPA[j]);
                        }
                    }
                }
                
                cout << "Records sorted by GPA.\n";
                
                break;
                
            case 4:
                int deleteID , index = -1;
                
                cout << "Enter the Student_ID of the record to be deleted: ";
                cin >> "%d",deleteID;
                
                for (int i = 0; i < limit; i++) {
                    if (ID[i] == deleteID) {
                        index = i;
                        break;
                    }
                }
                
                if (index == -1) {
                    cout << "Record not found.\n";
                } else {
                    for (int i = index; i < limit - 1; i++) {
                        ID[i] = ID[i + 1];
                        Name[i] = Name[i + 1];
                        GPA[i] = GPA[i + 1];
                    }
                    
                    limit--;
                    
                    cout << "Record with Student_ID " << deleteID << " deleted.\n";
                }
                
                break;

            case 5:
                cout << "Exiting program...";
                
                return 0;
                
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    }
}
