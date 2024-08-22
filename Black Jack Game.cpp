#include <iostream>

using namespace std;

int main()
{
    //bool playerbust = false;
    //bool dealerbust = false;
    int ptotal; 
    int dtotal;
    srand (time(0)); 
    while(true) 
    {
        int PcardNum1 = 1 + rand() % 10;
        int PcardNum2 = 1 + rand() % 10;
        int DcardNum1 = 1 + rand() % 10;
        int DcardNum2 = 1 + rand() % 10;
        
        cout << "Player's card is: " << PcardNum1 << endl;
        cout << "Player's card is: " << PcardNum2 << endl; 
        cout << "Dealer's card is: " << DcardNum1 << endl; 
        ptotal = PcardNum1 + PcardNum2; 
        dtotal = DcardNum1 + DcardNum2; 
          
        while(true) 
        {
            cout << "Enter 1 to hit or enter 2 to stand: " << endl; 
            int choice; 
            cin >> choice;
                
            if (choice == 1) 
            {
                int PcardNum3 = 1 + rand() % 10;
                ptotal += PcardNum3;
                cout << "Player's card is: " << PcardNum3 << endl;
                cout << "The total of the player's cards is: " << ptotal << endl; 

            }
                
            if (choice == 2)
            {
                cout << "Player's total: " << ptotal << endl; 
                break;
            }
            if (ptotal > 21)
                {
                    cout << "Player busted!" << endl;
                    break;
                }
            
        }
        
        while (dtotal < 17 && ptotal <= 21)
        {
            int DcardNum3 = 1 + rand() % 10;
            dtotal += DcardNum3; 
            cout << "Dealer's card (in the loop): " << DcardNum3 << endl;
            cout << "Dealer's total: " << dtotal << endl; 
        }
        
         if (dtotal > 21)
        {
            cout << "Dealer busted!" << endl;
        }
    
        if (dtotal <= 21 && (ptotal > 21 || dtotal > ptotal))
        {
            cout << "Dealer wins" << endl;
        }
        
        if (ptotal <= 21 && (dtotal > 21 || ptotal > dtotal))
        {
           
            cout << "Player wins" << endl;
            
        }
        if (ptotal == dtotal)
        {
            cout << "There was a tie" << endl;
        }
      
        

    }


    return 0;
}












