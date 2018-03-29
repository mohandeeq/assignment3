/* FCI – Programming 1 – 2018 - Assignment 3
     Program Name:      Mean and Standard Deviation ass 3, 2018.cpp
     Last Modification Date:  27/3/2018
    Author1 and ID and Group:  Abdullahi Yusuf Ali.  ID: 20170385. G15.
    Author2 and ID and Group:  Nawal Elamari.  ID: 20170404. G15.
    Author and ID and Group:  Mohamed Abdullahi Mo'alim.  ID: 20170407. G15.
    Teaching Assistant:    Samar Taha
     Purpose: Statistical Tool.
*/
#include <iostream>
#include <fstream>
 // Discrete Math Tool
 using namespace std ;
 int main()
 {
     int num , len1,len2 ,counter  ;
     char ch =' ',c ;
     string name , data1,data2 ;
     ofstream filename1  ;ifstream file1;
     cout << "Ahlan ya user ya habibi " << endl ;
     cout << "What do you like to do today? " << endl ;
     cout << "What do you like to do today? " << endl ;
     cout << "1- Enter a new data set " << endl ;
     cout << "2- Load two data sets" << endl ;
     cout << "3- Display data sets" << endl ;
     cout << "Enter number :" << endl ;
     cin >> num ;
     if (num == 1)
     {

         cout << "Enter the name of the file end with .txt " << endl;
         cin.ignore() ;
		 getline(cin,name);
		 filename1.open(name) ;
		 cout << "Enter the elements of the set"<< endl ;
		  getline( cin , data1 );
		  len1 = data1.length() ;
		 // cout << len << endl ;
		 for( counter = 0 ; counter < len1 ; counter ++ )
         {
             ch = data1[counter] ;
             num = int(ch);
             num = num - 48 ;
             cout << num << endl ;
         }
		 filename1.close();
     }
     if (num == 2)
     {


         cout << "eEnter the name of the file end with .txt " << endl;
         cin.ignore() ;
		 getline(cin,name);
		 filename1.open(name) ;
		 cout << "Enter the elements of the first set"<< endl ;
		  getline( cin , data1 );
		  cout<<"Enter the elements of the set"<<endl;
          getline( cin , data2 );
		  len1 = data1.length() ;
          len2 = data2.length() ;
		 // cout << len << endl ;
		 for( counter = 0 ; counter < len1 ; counter ++ )
         {
             ch = data1[counter] ;
             num = int(ch);
             num = num - 48 ;
             filename1 << num ;
         }
         cout<<endl;
         for( counter = 0 ; counter < len2 ; counter ++ )
         {
             ch = data2[counter] ;
             num = int(ch);
             num = num - 48 ;
             filename1 << num ;
         }
		 filename1.close();
         cout<<endl;
     }
     if (num == 3)
     {
         cout << "eEnter the name of the file end with .txt " << endl;
         cin.ignore() ;
		 getline(cin,name);
		 file1.open(name) ;
         while(!file1.eof())
         {
            file1.get(c);
            cout<< c ;
            if(c==len1)
            {
                cout<<endl;
            }
         }
		 file1.close();
    }
     return 0 ;
 }
