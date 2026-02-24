#include <iostream>
using namespace std;
int main(){

    int n ;
    
    cout << "Enter size of array: " ;
    cin >> n;
    
    int arr[n]; 

    // Taking elements from the user 
for(int a = 0; a < n ; a++)
{
    cout << "Enter elements : " << n + 1 << " : 3
    ";
    cin >> arr[n];
}

// printing the array

 cout << " THE WHOLE ARRAY WILL BE : " ;
    for(int a = 0  ; a < n ; a++ )
    {
        cout << arr[n] << " ";
}

}