#include<iostream>
using namespace std;
 int main (){
    double totalbill = 0;
    int packageType;
    int minutesUsed;
    //int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    //for(int i = 0; i < 10; i++){
       // sum += arr[i];
      // sum = sum + arr[i];cou
      cout<<"Enter package type (1-for basic: 2- Talkmore: 3- unlimitted) ";
      cin>>packageType;
      cout<<"Enter minutes used: ";
      cin>>minutesUsed;
      if(minutesUsed < 0){
        cout<<"Invalid minutes used!"<<endl;
        return 1;
      }
      
      switch (packageType)

      {
      case 1:
      totalbill= 5000 + 100*minutesUsed;
        /* code */
        break;
        case 2:
        totalbill= 15000 + 80*minutesUsed;
        break;
      
      case 3:
        totalbill= 50000 + 50*minutesUsed;
        break;
        default:
        cout<<"Invalid package type!"<<endl;
        return 1;
      }
      cout<<"Total bill is: ugx "<<totalbill<<endl; 
      return 0;



    }
