#include<iostream>
using namespace std;
int main() {
    int sizeLimit;
    cout<< "size of array";
    cin >>sizeLimit;

    int arr[100]; 
    int n = 0; 

    int choice;
    while(true) {
              cout << "1.CREATE\n";
        cout<< "2. DISPLAY\n";
        cout <<"3. INSERT\n";
        cout << "4. DELETE\n";
        cout<< "5. LINEAR SEARCH\n";
        cout <<"6. EXIT\n";
        cout<< "Enter choice: ";
        cin >>choice;

        if(choice== 1) cin >>n;
                 
            for(int i= 0; i < n; i++)
                cin >>arr[i];
        }
        else if(choice= 2) {
                               for (int i = 0; i < n; i++)
                    cout <<arr[i];
                cout <<endl;
            }
        }
        else if(choice == 3) { 
                int pos,val;
                cin >>pos;
                    cout<< "Enter value: ";
                    cin >>val;
                    for(int i= n; i >pos;i--)
            arr[i] = arr[i- 1];
                    arr[pos] = val;
                    n++;
                }
            }
        }
        else if(choice== 4) {
                int pos;
                cin >>pos;
                if (pos< 0 || pos>=n) {
                    cout <<"Invalid position!\n";
                } else{
                    for(int i =pos;i < n -1; i++)
                        arr[i] = arr[i + 1];
                    n--;
        }
             }
       }
        else if(choice ==5) {
            int val,found = 0;
            cin>> val;
            for(int i = 0; i < n; i++){
                if (arr[i] == val){
                    cout << "Found at index" << i;
                    found = 1;
                }
            }
            if(!found)
                cout<< "Not found\n";
        }
        else if(choice== 6){
            break;
        }
        else{
            cout << "Invalid choice!\n";
        }
    }

    return 0;
}
