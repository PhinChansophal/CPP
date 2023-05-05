// don't not the writng  
// fale code c++ programming at home
/*#include<iostream>
using namespace std;
int main()
{
	int array[30],size;
	cout<<"Input the size";
	cin >>size;
	
	for(int i = 0 ; i < size ; i++);
	{
		cout<<"Enter element"<<":";
		cin>>array[i];
		
	}
	for (int i = 0; i < size-1 ; i++){
	for (int j = 0; i < size-i-1 ;j++){
		if ( array[j]>array[j+1]){
			int temp = array[j];
			array[j]=array[j+1];
			array[j+1]=temp;
		}
	}

}	
	
	cout<<" sorted array elements:";
	for(int i =0; i<size;i++ )
	{
		cout<<array [i]<< " ";
	}
	cout<<endl;
	return 0;
	
}*/

#include <iostream>
using namespace std;

int main() {
    int Array[10], size;
    cout << "Input size:";
    cin >> size;

    // Input the elements of the array
    for (int i = 0; i < size; i++) 
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> Array[i];
    }

    // Sort the array using Selection Sort
   for (int i = 0; i < size-1; i++) {    
    for (int j = 0; j < size-i-1; j++) {
        if (Array[j] > Array[j+1]) {
            int temp = Array[j];
            Array[j] = Array[j+1];
            Array[j+1] = temp;
        }
    }
}


    // Print the sorted array
    cout << "Sorted Array elements: ";
    for (int i = 0; i < size; i++) 
    {
        cout << Array[i] << " ";
    }
    cout << endl;

    return 0;
}
