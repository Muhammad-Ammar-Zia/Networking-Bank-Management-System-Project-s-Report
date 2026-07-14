#include<iostream>//For non-parametric manipulators such as end of line manipulators
using namespace std;
#include"cstdlib" //For exit(0) function
#include"iomanip" //For parametric manipulators such as setwidth(length) 
class Networking      
{ //Start of 1st class, base class Networking 
    protected:
	int 
	    pre_defined_Client_ID[2],
	    pre_defined_Server_ID,
	    pre_defined_Administrator_ID;
	char
	    pre_defined_Client_Class[2],
	    pre_defined_Server_Class[2],
	    pre_defined_Administrator_Class[2];
	string
	    system_control_networking_path; //Multi-time initialization inside Helping_functions class
	long double 
	    system_control_distance_in_miles;
	int
	    system_control_Number_of_amplifiers;
    public:
	     Networking(); //Default/Nullary Constructor declaration only
	void Amplification(float user_input_distance_between_sender_and_receiver_device); 
}; //End of 1st class, base class Networking
Networking::Networking() //Networking class Constructor
{ 
    pre_defined_Client_ID[0] = 10012; 
    pre_defined_Client_ID[1] = 10023;
    pre_defined_Client_Class[0] = 'A';
    pre_defined_Client_Class[1] = 'B';
    //Both (Servers and Administrators) devices' can be class D and E in networking
    pre_defined_Server_ID = 1234567;
    pre_defined_Administrator_ID = 1234567654;
    //Similar values can be defined by Single Line Initialization method
    pre_defined_Administrator_Class[0] = pre_defined_Server_Class[0] = 'D'; //Reserved for multicasting (one-to-many communication)
    pre_defined_Administrator_Class[1] = pre_defined_Server_Class[1] = 'E';//Designed for experimental and research & cannot be used on public internet
}
void Networking::Amplification(float user_input_distance_between_sender_and_receiver_device) //Input is taken in Networking_Path helping function
{ //2nd, but parametric member function Amplifiction() 
    system_control_distance_in_miles = user_input_distance_between_sender_and_receiver_device * 0.621371F;
    if(system_control_distance_in_miles <= 30.0f) //Exp (40-1)/30.0F = 39/30.0f = 1.3F miles etc.
	system_control_Number_of_amplifiers = 0;
    else 
    	system_control_Number_of_amplifiers = static_cast<int>( (system_control_distance_in_miles - 1) / 30.0f);
}
class Bank : public Networking
{ //2nd class, derived class, Bank derived from Networking class
    //user-defined data members
    protected:
	int
	    user_input_Client_Number, 
	    user_input_Client_ID[2],
	    user_input_Server_ID, 
	    user_input_Administrator_ID,
	    user_input_Sender_Client_Number,
	    user_input_Receiver_Client_Number,
	    user_input_Sender_Client_ID,
	    user_input_Receiver_Client_ID;
	char
	    user_input_Client_Class[2],
	    user_input_Server_Class, 
	    user_input_Administrator_Class,
	    user_input_Sender_Class,
	    user_input_Receiver_Class;
	string
	    user_input_single_or_multi_user,
	    user_input_single_Client_Task,
	    user_input_multi_user_Client_Task,
	    user_input_Server_further_or_not,
	    user_input_Administrator_further_or_not,
	    user_input_user_type,
	    user_input_receiver_type,
	    user_input_below_or_above_water_level;
	float
	    user_input_Client_total_amount_in_account,
	    user_input_Client_amount_for_withdraw,
	    user_input_Client_money_to_deposit,
	    user_input_Sender_total_amount_in_account,
	    user_input_Receiver_total_amount_in_account,
	    user_input_Sender_money_to_transfer;
	long double
	    user_input_distance_between_sender_and_receiver_device;
}; //End of 2nd class, derived class, Bank  derived from Networking class
class Helping_Functions : public Bank
{ //3rd class, derived class, Helping_Functions, derived from class Bank
    public:
	void line_gap();
	void table_row_border();
	void table_align();
	void table_header_border();
	void Termination();
	void Invalid_Statement();
	void Show_Processing();
	void In_Case_Server_Allow_then_Show();
	void In_Case_Single_Client_Verification_Successful();
	void Withdraw();
	void Deposit();
	void Set_Precision_For_Distance();
	void In_Case_Multi_User_Verification_Successful();
	void Networking_Path();
	void Reason_for_Selectng_Double_Number_of_Amplifiers();
	void Amount_Transfer_Successful();
}; //End of 3rd class, derived class, Helping_Functions, derived from class Bank
void Helping_Functions::line_gap()
{ //Definig 1st Helping Function
    for(int i=0; i<143; i++) //84 to 94 to 124 to 140 to 143
	cout<<'-';
    cout<<static_cast<char>(10);
}
void Helping_Functions::table_row_border()
{ //Defining 2nd Helping Function
    table_align(); //right, left, center align
    for(int i=0; i<3; i++) // Each segment: 6 dashes for Number, 6 for ID, 5 for Class
    {
        if(i==0) 
            cout<<"------"<<' ';
        else if(i==1) 
            cout<<"-------"<<' ';
        else 
            cout<<"-----";
    }
    cout<<static_cast<char>(10);
}
void Helping_Functions::table_align()
{ //Defining 3rd Helping Function
    for(int i=0; i<52; i++)
        cout<<' ';
}
void Helping_Functions::table_header_border()
{ //Defining 4th Helping Function
    table_row_border();
    table_align();
    cout<<"Number   ID    Class"<<endl;
    table_row_border();
}
void Helping_Functions::Termination()
{ //Defining 5th Helping Function
    cout<<"Process terminated successfully.";
    exit(0);
}
void Helping_Functions::Invalid_Statement()
{ //Defining 6th Helping Function
    cout<<"Invalid Input..."<<"\n"<<setw(32)<<"Process Terminated.";
    exit(0);
}
void Helping_Functions::Show_Processing()
{ //Defining 7th Helping Function
    cout<<"Processing..."<<endl;
    line_gap();
}
void Helping_Functions::In_Case_Server_Allow_then_Show() //This is only show function. Input etc. is defined inside Client class member function
{ //Defining 8th Helping Function //This will show then continue next steps inside Client class i.e show to Client, then return to Client class
    Show_Processing();
    cout<<"You can select any of the following:"<<"\n"<<"\t"<<1<<'.'<<static_cast<char>(32)<<"Single User:"<<static_cast<char>(10)
	<<"\t\t"<<' '<<"a"<<'.'<<static_cast<char>(32)<<"Display info"<<endl<<"\t\t"<<' '<<"b"<<'.'<<static_cast<char>(32)<<"Withdraw"<<"\n"
	<<"\t\t"<<' '<<"c"<<'.'<<static_cast<char>(32)<<"Deposit"<<"\n"<<"\t\t"<<' '<<"d"<<'.'<<static_cast<char>(32)<<"Terminate"<<endl;
    cout<<"\t"<<2<<'.'<<static_cast<char>(32)<<"Multi-User:"<<static_cast<char>(10)<<"\t\t"<<' '<<"a"<<'.'<<static_cast<char>(32)
	<<"Transaction(or transafer)"<<"\n"<<"\t\t"<<' '<<"b"<<'.'<<static_cast<char>(32)<<"Terminate"<<endl
	<<"(First enter either Single-User or Multi-User)"<<static_cast<char>(10);
    line_gap();
    cout<<"Type of User:"<<' ';
    cin>>user_input_single_or_multi_user;
    line_gap();
}
void Helping_Functions::In_Case_Single_Client_Verification_Successful() 
{ //Defining 9th Helping Function
    cout<<"You can perform following tasks:\n"<<"\t"<<' '<<"a"<<'.'<<static_cast<char>(32)<<"Display info"<<endl
        <<"\t"<<' '<<"b"<<'.'<<static_cast<char>(32)<<"Withdraw"<<"\n"<<"\t"<<' '<<"c"<<'.'<<static_cast<char>(32)<<"Deposit"<<static_cast<char>(10)
        <<"\t"<<' '<<"d"<<'.'<<static_cast<char>(32)<<"Terminate"<<static_cast<char>(10)<<"(Write Display-info, Withdraw, Deposit or Terminate)"<<endl; 
    line_gap();
    cout<<"Note:\n\tYour amount balance will be shown within your amount's withdraw and deposit."<<endl;
    line_gap();
    cout<<"Client Task:"<<' ';
    cin>>user_input_single_Client_Task;
    line_gap();
}
void Helping_Functions::Withdraw()
{ //Defining 10th Helping Function
    cout<<"Enter your total amount in your account:"<<' ';
    cin>>user_input_Client_total_amount_in_account;
    cout<<"Enter your total amount to withdraw:"<<static_cast<char>(32);
    cin>>user_input_Client_amount_for_withdraw;
    line_gap();
    if(user_input_Client_total_amount_in_account<=0)
    {
        cout<<"Enter your total amount greater than zero."<<endl;
        line_gap();
        Invalid_Statement();
    }
    else if(user_input_Client_amount_for_withdraw<0)
    {
        cout<<"Enter withdraw amount greater than or equal to zero."<<static_cast<char>(10);
        line_gap();
        Invalid_Statement();
    }
    else if(user_input_Client_amount_for_withdraw>user_input_Client_total_amount_in_account)
    {
        cout<<"Enter withdraw amount less than or equal to total amount in your account."<<endl;
        line_gap();
        Invalid_Statement();
    }
    else
    {
        cout<<"Your amount before withdraw:"<<' '<<user_input_Client_total_amount_in_account<<static_cast<char>(10)<<"Your amount after withdraw:"
            <<' '<<user_input_Client_total_amount_in_account - user_input_Client_amount_for_withdraw<<static_cast<char>(10);
        line_gap();
        cout<<"Withdraw successful..."<<static_cast<char>(10);
        line_gap();
        cout<<"Your total amount \n\t"
            <<1<<'.'<<"In account (before withraw):"<<' '<<user_input_Client_total_amount_in_account<<static_cast<char>(10)<<"\t"
            <<2<<'.'<<"Withdraw:"<<static_cast<char>(32)<<user_input_Client_amount_for_withdraw<<"\n"<<"\t"
            <<3<<'.'<< "CheckBalance: "<<user_input_Client_total_amount_in_account - user_input_Client_amount_for_withdraw<<static_cast<char>(10);
        line_gap();
        Termination();
    }
}
void Helping_Functions::Deposit() //Adding in your own account
{ //Defining 11th Helping Function
    cout<<"Enter total amount in account:"<<static_cast<char>(32);
    cin>>user_input_Client_total_amount_in_account;
    cout<<"Enter money to deposit in your account:"<<' ';
    cin>>user_input_Client_money_to_deposit;
    line_gap();
    if(user_input_Client_total_amount_in_account<0)
    {
        cout<<"Enter your amount in account greater than equal to zero.";
        Invalid_Statement();
    }
    else if(user_input_Client_money_to_deposit<0)
    {
        cout<<"Enter your amount in account to deposit greater than equal to zero.";
        Invalid_Statement();
    }
    else
    {
        cout<<"Your amount before deposit:"<<' '<<user_input_Client_total_amount_in_account<<static_cast<char>(10)
            <<"Your amount after deposit:"<<' '<<user_input_Client_total_amount_in_account + user_input_Client_money_to_deposit<<"\n";
        line_gap();
        cout<<"Deposit successful..."<<static_cast<char>(10);
        line_gap();
        cout<<"Your total amount \n\t"
            <<1<<'.'<<"In account (before deposit):"<<' '<<user_input_Client_total_amount_in_account<<static_cast<char>(10)<<"\t"
            <<2<<'.'<<"Deposit:"<<static_cast<char>(32)<<user_input_Client_money_to_deposit<<"\n"<<"\t"
            <<3<<'.'<<"CheckBalance: "<<user_input_Client_total_amount_in_account + user_input_Client_money_to_deposit<<endl;
        line_gap();
        Termination();
    }
}
void Helping_Functions::Set_Precision_For_Distance()  //To avoid extra float ranges in output and to avoid scientific, exponential forms.
{ //Defining 12th Helping Function
    ios::fmtflags f = cout.flags(); //Store orignal format if cout
    streamsize p = cout.precision(); //Force numbers to display in fixed-point notation (not scientific/exponential) with 10 decimal places.
    cout<<"Distance between sender and receiver (in Kilometers): " ;
    cout.setf(ios::fixed, ios::floatfield); //Force numbers to show in normal decimal form
    cout.precision(10); //Setting precision to 10 to show in output
    cout<<user_input_distance_between_sender_and_receiver_device<<" km"<<static_cast<char>(10)
	<<"Distance between sender and receiver (in Miles): "<<system_control_distance_in_miles<<' '<<"miles"<<endl;
    cout.flags(f); //Restore orignal formatting of cout
    cout.precision(p); ///return back to default set precision i.e. not 10 decimal places Exp float 2.75 etc.
    line_gap();
    cout<<"Note:\n\t Precision is set to 10 to avoid the conversion of larger values to exponential form.\n";
}
void Helping_Functions::In_Case_Multi_User_Verification_Successful()
{ //Defining 13th Helping Function
    cout<<"You can perform following task:\n"<<"\t"<<' '<<"a"<<'.'<<static_cast<char>(32)<<"Transaction(transfer)"<<endl
        <<static_cast<char>(9)<<' '<<"b"<<'.'<<static_cast<char>(32)<<"Terminate"<<"\n"<<"(Wrte either Transfer or Terminate.)"<<endl;
    line_gap();
    cout<<"Note:\n\tYour amount balance will be shown within your amount's transaction."<<static_cast<char>(10);
    line_gap();
    cout<<"User's task:"<<' ';
    cin>>user_input_multi_user_Client_Task;
    line_gap();
    if(user_input_multi_user_Client_Task=="Terminate")
	Termination();
    else if(user_input_multi_user_Client_Task=="Transfer")
    {
	cout<<"Enter total amount in sender's account:"<<static_cast<char>(32);
	cin>>user_input_Sender_total_amount_in_account;
	if(user_input_Sender_total_amount_in_account<=0) 
	{
	    line_gap();
	    cout<<"Enter value greater than or equal to one!"<<endl;
	    line_gap();
	    Invalid_Statement();
	}
	else
	{
	    cout<<"Enter amount in receiver's account:"<<static_cast<char>(32);
	    cin>>user_input_Receiver_total_amount_in_account;
	    if(user_input_Receiver_total_amount_in_account<0)
	    {
                cout<<"Enter amount greater than or equal to zero!"<<endl;
                line_gap();
		Invalid_Statement();
	    }
	    else
	    {
	    	cout<<"Enter total amount to transfer:"<<static_cast<char>(32);
	    	cin>>user_input_Sender_money_to_transfer;
	    	line_gap();
	    	if(user_input_Sender_money_to_transfer<0)
	    	{
	    	   cout<<"Enter amount to transfer greater than or equal to zero!"<<endl;
	    	   line_gap();
	    	   Invalid_Statement();
	    	}
	    	else if(user_input_Sender_money_to_transfer>user_input_Sender_total_amount_in_account)
	    	{
	    	   cout<<"Enter amont to tranfer less than or equal to total amount in sender's account!"<<endl;
	    	   line_gap();
	    	   Invalid_Statement();	
	    	}
	    	else
                   Amount_Transfer_Successful(); //end of 2nd nested else
	    } //End of 1st Nested else
	} //End of outer else
    } //End of outer else if
    else
	Invalid_Statement();
}
void Helping_Functions::Networking_Path()
{ //Defining 14th Helping Function
    /*These are according to international technical standards developed by the International Telecommunication Union (ITU) to ensure worldwide 
    compatibility of telecommunication networks, technologies, and services.*/
    /*Exact ranges of Long-Reach Passive Optical Network (LRPON), SD-WAN and Luna Net etc. are not used to avoidi nconsistency in output*/
    cout<<"Enter distance type from any of the following\n\t"<<1<<'.'<<static_cast<char>(32)<<"Below water level or\n\t"<<2<<'.'<<static_cast<char>(32)
	<<"Above water level"<<static_cast<char>(10)<<"(Write either Below-Water-Level or Above-Water-Level)"<<endl;
    line_gap();
    cout<<"Distance Type:"<<' ';
    cin>>user_input_below_or_above_water_level;
    line_gap();	
    if(user_input_below_or_above_water_level=="Below-Water-Level")
    {
	cout<<"Enter below water distance between Sender and Receiver Device (in kilometers):"<<' ';
	cin>>user_input_distance_between_sender_and_receiver_device;
	if(user_input_distance_between_sender_and_receiver_device<=0)
	{
	    line_gap();
	    cout<<"Enter distance greater than 0."<<endl<<"(even if its in floating-point value)"<<static_cast<char>(10)
		<<"For Example\n\t0.001km i.e. 1m\n\t0.00001km i.e. 1cm\n\t0.0000001km i.e. 0.1mm"<<"\n"<<"Maximum value for below water level can be 25000km.\n";
	    line_gap();
	    Invalid_Statement();
	}
	else if(user_input_distance_between_sender_and_receiver_device>25000)
	{
	    line_gap();
	    cout<<"Disance between sender and receiver device in below water level can be betweemn 0km to 25000kms i.e. Submarine Fiber-Optic Cables Network."<<endl;
	    line_gap();
	    Invalid_Statement();
	}
	else
	{
	    if(user_input_distance_between_sender_and_receiver_device>0 && user_input_distance_between_sender_and_receiver_device<=0.05F)
		system_control_networking_path = "Radio Frequency Technology";
	    else if(user_input_distance_between_sender_and_receiver_device>0.05f && user_input_distance_between_sender_and_receiver_device<=0.15F)
		system_control_networking_path = "Optical UWOC (Underwater Wireless Optical Communication)";
	    else if(user_input_distance_between_sender_and_receiver_device>0.25f && user_input_distance_between_sender_and_receiver_device<=1)
		system_control_networking_path = "AUV (Autonomous Underwater Vehicle) Network";
	    else if(user_input_distance_between_sender_and_receiver_device>1 && user_input_distance_between_sender_and_receiver_device<=10)
		system_control_networking_path = "UASN / UWASN (Underwater Wireless Sensor Network)";
	    else if(user_input_distance_between_sender_and_receiver_device>10 && user_input_distance_between_sender_and_receiver_device<=30)
		system_control_networking_path = "SD-UAN (Software-Defined Underwater Acoustic Network)";
	    else if(user_input_distance_between_sender_and_receiver_device>30 && user_input_distance_between_sender_and_receiver_device<=50)
		system_control_networking_path = "IoUT (Internet of Underwater Things)";
	    else if(user_input_distance_between_sender_and_receiver_device>50 && user_input_distance_between_sender_and_receiver_device<=100)
		system_control_networking_path = "Tethered Underwater Links";
	    else if(user_input_distance_between_sender_and_receiver_device>100 && user_input_distance_between_sender_and_receiver_device<=200)
		system_control_networking_path = "Acoustic Modem Networks";
	    else if(user_input_distance_between_sender_and_receiver_device>200 && user_input_distance_between_sender_and_receiver_device<=500)
		system_control_networking_path = "Hybrid Optical-Acoustic Systems";
	    else if(user_input_distance_between_sender_and_receiver_device>500 && user_input_distance_between_sender_and_receiver_device<=2000)
		system_control_networking_path = "Global IoUT Expansion";
	    else if(user_input_distance_between_sender_and_receiver_device>2000 && user_input_distance_between_sender_and_receiver_device<=25000)
		system_control_networking_path = "Submarine Fiber-Optic Cables";
	}
    }
    else if(user_input_below_or_above_water_level=="Above-Water-Level") 
    {	
	cout<<"Enter above water distance between Sender and Receiver Device (in kilometers):"<<' ';
	cin>>user_input_distance_between_sender_and_receiver_device;
	if(user_input_distance_between_sender_and_receiver_device<=0 )
	{
	    line_gap();
	    cout<<"Enter distance greater than 0."<<endl<<"(even if its in floating-point value)"<<static_cast<char>(10)
	        <<"For Example\n\t0.001km i.e. 1m\n\t0.00001km i.e. 1cm\n\t0.0000001km i.e. 0.1mm"<<"\n"<<"Maximum value for above water level can be 25900000000km.\n";
	    line_gap();
	    Invalid_Statement();
	}
	else if(user_input_distance_between_sender_and_receiver_device>25900000000)
	{
	    line_gap();
	    cout<<"Distance between sender and receiver device in above water level can be betweemn 0km to 25900000000kms i.e 2.59 billion kms i.e of DSN Network."<<endl;
	    line_gap();
	    Invalid_Statement();
	}
	else
	{
	        if(user_input_distance_between_sender_and_receiver_device>0 && user_input_distance_between_sender_and_receiver_device<=0.01F)
		system_control_networking_path = "Bluetooth Wireless Network";
	   else if(user_input_distance_between_sender_and_receiver_device>0.01f && user_input_distance_between_sender_and_receiver_device<0.15f)
	 	system_control_networking_path = "Wireless Router";
	   else if(user_input_distance_between_sender_and_receiver_device>0.15F && user_input_distance_between_sender_and_receiver_device<2)
		system_control_networking_path = "Wireless Access Point (WAP)";
	   else if(user_input_distance_between_sender_and_receiver_device>2 && user_input_distance_between_sender_and_receiver_device<5)
		system_control_networking_path = "Wired-LAN";
	   else if(user_input_distance_between_sender_and_receiver_device>=5 && user_input_distance_between_sender_and_receiver_device <=10)
		system_control_networking_path = "Wireless-LAN";
	   else if(user_input_distance_between_sender_and_receiver_device>10 && user_input_distance_between_sender_and_receiver_device<=20)
		system_control_networking_path = "Network Bridge";
	   else if(user_input_distance_between_sender_and_receiver_device>20 && user_input_distance_between_sender_and_receiver_device<=50) 
		system_control_networking_path = "Mertopolitan Area Network";
	   else if(user_input_distance_between_sender_and_receiver_device>50 && user_input_distance_between_sender_and_receiver_device<=60)
		system_control_networking_path = "Extended Reach Optical Access Network";
	   else if(user_input_distance_between_sender_and_receiver_device>60 && user_input_distance_between_sender_and_receiver_device<=70)
		system_control_networking_path = "Tower Channeling (Line of Sight(LoS) Transmission Network)"; 
	   else if(user_input_distance_between_sender_and_receiver_device>70 && user_input_distance_between_sender_and_receiver_device<=100)
		system_control_networking_path = "Long-Reach Passive Optical Network (LRPON)"; 
	   else if(user_input_distance_between_sender_and_receiver_device>100 && user_input_distance_between_sender_and_receiver_device<=160)
		system_control_networking_path = "Wide Area Network"; 
	   else if(user_input_distance_between_sender_and_receiver_device>160 && user_input_distance_between_sender_and_receiver_device<=1200)
		system_control_networking_path = "Software-Defined Wide Area Network (SD-WAN) - 1"; 
	   else if(user_input_distance_between_sender_and_receiver_device>1200 && user_input_distance_between_sender_and_receiver_device<=2000)
		system_control_networking_path = "Low Earth Orbit Satellite"; 
	   else if(user_input_distance_between_sender_and_receiver_device>2000 && user_input_distance_between_sender_and_receiver_device<=15000)
		system_control_networking_path = "Medium Earth Orbit Satellite"; 
	   else if(user_input_distance_between_sender_and_receiver_device>15000 && user_input_distance_between_sender_and_receiver_device<=20000)
		system_control_networking_path = "Inter-Satellite Links (ISLs)"; 
	   else if(user_input_distance_between_sender_and_receiver_device>20000 && user_input_distance_between_sender_and_receiver_device<35000)
		system_control_networking_path = "Software-Defined Wide Area Network (SD-WAN) - 2"; 	
	   else if(user_input_distance_between_sender_and_receiver_device>=35000 && user_input_distance_between_sender_and_receiver_device<=35786)
		system_control_networking_path = "Geostationary Earth Orbit Satellite";
	   else if(user_input_distance_between_sender_and_receiver_device>35786 && user_input_distance_between_sender_and_receiver_device<=100000)
		system_control_networking_path = "Space Data Relay Networks (SDRN)";
	   else if(user_input_distance_between_sender_and_receiver_device>35786 && user_input_distance_between_sender_and_receiver_device<384400)
		system_control_networking_path = "High Earth Orbit Satellite";
	   else if(user_input_distance_between_sender_and_receiver_device>=384400 && user_input_distance_between_sender_and_receiver_device<400000)	
       		system_control_networking_path = "Luna (IoT Satellite) Network";
	   else if(user_input_distance_between_sender_and_receiver_device>=400000 && user_input_distance_between_sender_and_receiver_device<2000000)
    		system_control_networking_path = "Near Space Satellite Network (NSN)"; 
	   else if(user_input_distance_between_sender_and_receiver_device>=2000000 && user_input_distance_between_sender_and_receiver_device<55000000)
    		system_control_networking_path = "Deep Space Transit (DSN-Direct)";
  	   else if(user_input_distance_between_sender_and_receiver_device>=55000000 && user_input_distance_between_sender_and_receiver_device<400000000)
 	 	system_control_networking_path = "Interplanetary Backbone";
	   else if(user_input_distance_between_sender_and_receiver_device>=400000000 && user_input_distance_between_sender_and_receiver_device<=25900000000)
  	  	system_control_networking_path = "Deep Space Network (DSN-Extended)";
	} //End of 1st nested else part 
    } //End of 1st outer else if part
    else
    {
	line_gap();
	Invalid_Statement();
    }	
//Amplification() is part of all if, else if (s) as these have no body {}. Its not part only of else part.
Amplification(user_input_distance_between_sender_and_receiver_device); 
}
void Helping_Functions::Reason_for_Selectng_Double_Number_of_Amplifiers()
{ //Defining 15th Helping Function
    cout<<"Number of Amplifiers is doubled due to following reason:"<<static_cast<char>(10)
	<<"For Example:\n\tWe have distance between Sender and Receiver device:"<<' '<<395400<<' '<<"km"<<endl
	<<"Now we have following type scenario:"<<endl;
    line_gap();
    cout<<"Diagram:"<<endl;
    cout<<setw(85)<<"[Luna (Internet of Things Satellite) Networks]"<<"\n"
	<<setw(54)<<'^'<<setw(8)<<'/'<<static_cast<char>(92)<<setw(8)<<'^'<<endl
	<<setw(54)<<'|'<<setw(7)<<'/'<<setw(3)<<static_cast<char>(92)<<setw(7)<<'|'<<endl
	/*type conversion is used to display backslash as if anyother literal method, then it considers string literal closure  Exp "a\", it considers
	all upcoming cout parts at part of character literal ' ' Exp "User Number \"<<user_num[0]<<endl; all are part of character lieral before ; */
	<<setw(58)<<"[16378 Amplifiers]"<<setw(2)<<'/'<<setw(5)<<static_cast<char>(92)<<' '<<"[16378 Amplifiers]"<<endl
	<<setw(54)<<'|'<<setw(5)<<'/'<<setw(7)<<static_cast<char>(92)<<setw(5)<<'|'<<endl
	<<setw(54)<<'V'<<setw(4)<<'/'<<setw(9)<<static_cast<char>(92)<<setw(4)<<'v'<<endl
	<<setw(62)<<"[Sender Device]"<<"[Receiver Device]"<<endl
	<<setw(79)<<"<-----------395400km----------->"<<endl;
    line_gap();
    cout<<"Reason of Selecting Double Number of Amplifiers:\n\tThe reason of uplinking Amplifiers and downlinking Amplifiers is as follows:\n"
	<<"For Example:\n"
	<<"\tWe do not use use down linking, then we have only one path\ni.e."
	<<"\n\tSender Device to Luna (IoT) Satellite and number of amplifiers 16378 only."
	<<"\n"<<"Signals Amplification:"<<endl
	<<' '<<' '<<' '<<"Signals are amplified but only for Sender Device to Luna (IoT) Satellite.The signal processes successfuly by role of"
	<<"\n"<<setw(23)<<"i. Amplifiers"<<"\n"<<setw(29)<<"ii. Perception Layer"<<"\n"<<setw(30)<<"iii. OSI Model Layers:"
	<<"\n"<<setw(29)<<"7.Application"<<"\n"<<setw(30)<<"6.Presentation"<<"\n"<<setw(25)<<"5.Session"<<"\n"<<setw(27)<<"4.Transport"<<"\n"<<setw(28)
	<<"3.Networking"<<"\n"<<setw(26)<<"2.Datalink"<<"\n"<<setw(26)<<"1.Physical"<<"\n"<<setw(30)<<"iv. TCIP/IP Protocols"<<endl
	<<"Signals will be guided for downlinking by OSI Model Layers and TCP/IP Protocols."
	<<"\nProblem:"
	<<"\n\tDue to absence of Amplifiers the process of"<<' '<<"amplification not possible so, the signals wil travel maximum 30 to 31 or 32 miles only."
	<<"\n"<<"=> Transfer/Message Send not possible!"<<endl;
}
void Helping_Functions::Amount_Transfer_Successful()
{ //Defining 16th Helping Function
    Networking_Path();
    line_gap();
    cout<<"Amount transfer successful..."<<static_cast<char>(10);
    line_gap();
    cout<<"Before Transfer:"<<endl
	<<"Amount in sender account:"<<' '<<user_input_Sender_total_amount_in_account<<' '<<"ruppees"<<static_cast<char>(10)
	<<"Amount in receiver's account:"<<static_cast<char>(32)<<user_input_Receiver_total_amount_in_account<<' '<<"ruppees"<<endl;
    line_gap();
    cout<<"Money transferred:"<<' '<<user_input_Sender_money_to_transfer<<' '<<"ruppees"<<static_cast<char>(10);
    Set_Precision_For_Distance();
    line_gap();
    cout<<"Networking path selected: "<<system_control_networking_path<<endl;
    if(system_control_Number_of_amplifiers==0)
    {
	cout<<"Number of Amplifiers/Hydrophone(underwater microphone):"<<' '<<system_control_Number_of_amplifiers<<endl;
	line_gap();
	cout<<"After Transfer:"<<static_cast<char>(10)
	    <<"Amount in sender account:"<<' '<<user_input_Sender_total_amount_in_account-user_input_Sender_money_to_transfer<<' '<<"ruppees"<<"\n"
	    <<"Amount in receiver's account:"<<user_input_Receiver_total_amount_in_account+user_input_Sender_money_to_transfer<<' '<<"ruppees"<<endl;
	line_gap();
	Termination();
    }
    else
    {
	cout<<"Number of Amplifiers/Hydrophone(underwater microphone) used for:\n"
	    <<"\t1."<<static_cast<char>(32)<<"Source to Tower Channeling/Satellite:"<<' '<<system_control_Number_of_amplifiers<<endl
	    <<"\t2. Tower Channeling/Satellite to Desitnation:"<<static_cast<char>(32)<<system_control_Number_of_amplifiers<<endl
	    <<"Total Number of Amplifiers/Hydrophone(underwater microphone) used:"<<' '<< 2 * system_control_Number_of_amplifiers <<"\n";
	line_gap();
	Reason_for_Selectng_Double_Number_of_Amplifiers();
	line_gap();
	cout<<"After Transfer:"<<static_cast<char>(10)
	    <<"Amount in sender account:"<<' '<<user_input_Sender_total_amount_in_account-user_input_Sender_money_to_transfer<<' '<<"ruppees"<<"\n"
	    <<"Amount in receiver's account:"<<user_input_Receiver_total_amount_in_account+user_input_Sender_money_to_transfer<<' '<<"ruppees"<<endl;
	line_gap();
	Termination();	
    }
}
class Client : public Helping_Functions 
{ //4th class, derived class, Client, derived from class Helping_Functions
    public:
	void In_Case_Server_Allow_Client();
}; //End of 4th class, derived class, Client, derived from class Helping_Functions
void Client::In_Case_Server_Allow_Client() 
{ //Client class Member Fnction
    cout<<"Your request is accepted by Server."<<endl;
    line_gap();
    In_Case_Server_Allow_then_Show();
    if(user_input_single_or_multi_user == "Single-User")
    {
	cout<<"Enter your Client number:"<<static_cast<char>(32);
	cin>>user_input_Client_Number;
	line_gap();
	if(user_input_Client_Number !=1 && user_input_Client_Number!=2)
	    Invalid_Statement();
	else
	{
	    cout<<"Enter your following details for your verifcation:"<<static_cast<char>(10);
	    line_gap();
	    switch(user_input_Client_Number)
	    { //break statement is not necessary as Process will be terminated by Termination(), Invalid_Statenent(), other user-defined functions etc.
		case 1:
		    cout<<"Enter your Client 1 ID:"<<static_cast<char>(32);
		    cin>>user_input_Client_ID[0];
		    cout<<"Enter your Client 1 Class:"<<' ';
		    cin>>user_input_Client_Class[0];
		    line_gap();
		if(user_input_Client_ID[0] != pre_defined_Client_ID[0] || user_input_Client_Class[0] != pre_defined_Client_Class[0])
		    Invalid_Statement();
		else
		{
		    cout<<"Verification Successful..."<<static_cast<char>(10);
		    line_gap();
		    Show_Processing();
		    In_Case_Single_Client_Verification_Successful();
		    if(user_input_single_Client_Task=="Display-info")
		    {
                        table_header_border(); 
			table_align();//6 character literal whitespaces
			cout<<' '<<' '<<1<<setw(10)<<pre_defined_Client_ID[0]<<setw(5)<<pre_defined_Client_Class[0]<<endl;
			table_row_border();
			line_gap();
			cout<<"Note:\n\tOnly Server can see all clients' information!"<<static_cast<char>(10);
			line_gap();
			Termination();
		    }
		    else if(user_input_single_Client_Task=="Withdraw")
			Withdraw();
		    else if(user_input_single_Client_Task=="Deposit")
		        Deposit();
		    else if(user_input_single_Client_Task=="Terminate")
			Termination();
		    else
			Invalid_Statement();
		} //End of outer else (inside switch statement)
		case 2:
		    cout<<"Enter your Client 2 ID:"<<static_cast<char>(32);
		    cin>>user_input_Client_ID[1]; //Array starts from 0 index position.
		    cout<<"Enter your Client 2 Class:"<<' '; //index 0 = Client 1, index 1 = Client 2
		    cin>>user_input_Client_Class[1];
		    line_gap();
		    if(user_input_Client_ID[1] != pre_defined_Client_ID[1] || user_input_Client_Class[1] != pre_defined_Client_Class[1])
		        Invalid_Statement();
		    else
		    {
		        cout<<"Verification Successful..."<<static_cast<char>(10);
		        line_gap();
		        Show_Processing();
		        In_Case_Single_Client_Verification_Successful();
		        if(user_input_single_Client_Task=="Display-info")
		        {
		            table_header_border(); 
			    table_align();//6 character literal whitespaces
			    cout<<' '<<' '<<2<<setw(10)<<pre_defined_Client_ID[1]<<setw(5)<<pre_defined_Client_Class[1]<<endl;
			    table_row_border();
			    line_gap();
			    cout<<"Note:\n\tOnly Server can see all clients' information!"<<static_cast<char>(10);
			    line_gap();
			    Termination();
		        }
		        else if(user_input_single_Client_Task=="Withdraw")
			    Withdraw();
		        else if(user_input_single_Client_Task=="Deposit")
			    Deposit();
		        else
			    Invalid_Statement();
		    } //End of outer else (inside switch statement)
		    default:
			Invalid_Statement();
	    } //End of switch statement (Either 1 or 2, then further...)
	}  //end of inner else (if not other than 1 and 2 Number)
    } //End of outer if(user_input_single_or_multi_user == "Single-User")
    else if(user_input_single_or_multi_user == "Multi-User")
    {
	cout<<"Enter your sender Client Number:"<<static_cast<char>(32);
	cin>>user_input_Sender_Client_Number;
	line_gap();
	switch(user_input_Sender_Client_Number)
	{ //break statement is not necessary as Process will be terminated by Termination(), Invalid_Statenent(), other user-defined functions etc.
	    case 1:
	        cout<<"Enter following details for your Sender Client Verification:"<<static_cast<char>(10);
	        line_gap();
	    	cout<<"Enter your sender Client 1 ID:"<<' ';
	    	cin>>user_input_Sender_Client_ID;
            	cout<<"Enter your sender Client 1 Class:"<<' ';
	        cin>>user_input_Sender_Class;
	        line_gap();
	        if(user_input_Sender_Client_ID != pre_defined_Client_ID[0] || user_input_Sender_Class != pre_defined_Client_Class[0])
	    	    Invalid_Statement();
		else
		{
		    cout<<"Enter your receiver Client Number:"<<static_cast<char>(32);
		    cin>>user_input_Receiver_Client_Number;
		    line_gap();
		    if(user_input_Receiver_Client_Number!= 2)
			Invalid_Statement();
                    else
		    {
			cout<<"Enter following details for your Receiver Client Verification:"<<static_cast<char>(10);
			line_gap();
			cout<<"Enter your receiver Client 2 ID:"<<' ';
			cin>>user_input_Receiver_Client_ID;
			cout<<"Enter your receiver Client 2 Class:"<<' ';
			cin>>user_input_Receiver_Class;
			line_gap();
			if(user_input_Receiver_Client_ID != pre_defined_Client_ID[1] || user_input_Receiver_Class != pre_defined_Client_Class[1])
			    Invalid_Statement();
		        else
			    In_Case_Multi_User_Verification_Successful();	
		    }
		}
		case 2:
                    cout<<"Enter following details for your Sender Client Verification:"<<static_cast<char>(10);
                    line_gap();
                    cout<<"Enter your sender Client 2 ID:"<<' ';
                    cin>>user_input_Sender_Client_ID;
                    cout<<"Enter your sender Client 2 Class:"<<' ';
                    cin>>user_input_Sender_Class;
                    line_gap();
                    if(user_input_Sender_Client_ID != pre_defined_Client_ID[1] || user_input_Sender_Class != pre_defined_Client_Class[1])
	                Invalid_Statement();
                    else
                    {
	                cout<<"Enter your receiver Client Number:"<<static_cast<char>(32);
                        cin>>user_input_Receiver_Client_Number;
			line_gap();
			if(user_input_Receiver_Client_Number!= 1)
			    Invalid_Statement();
			else
		        {
			    cout<<"Enter following details for your Receiver Client Verification:"<<static_cast<char>(10);
			    line_gap();
			    cout<<"Enter your receiver Client 1 ID:"<<' ';
			    cin>>user_input_Receiver_Client_ID;
			    cout<<"Enter your receiver Client 1 Class:"<<' ';
			    cin>>user_input_Receiver_Class;
			    line_gap();
			    if(user_input_Receiver_Client_ID != pre_defined_Client_ID[0] || user_input_Receiver_Class != pre_defined_Client_Class[0])
			    	Invalid_Statement();
			    else
			    	In_Case_Multi_User_Verification_Successful();
		        }
		    }
		default:
		    Invalid_Statement();
	    } //End of switch statement
    } //end of else if  (Multi-User)
    else
	Invalid_Statement();		
}
class Server : public Client 
{ //5th class, derived class, Server, derived from class Client, definition 
    public:
	void In_Case_Administrator_Allow_Server(); //Administratpr allow then
	void Client_Request_Continue_Pernission();
	void Admin_Server_Transfer_Money();
}; //End of 5th class, derived class, Server, derived from class Client, definition (after declaration)
void Server::In_Case_Administrator_Allow_Server() 
{ //Server Class 1st Member Function Definition	
    cout<<"Your request is accepted by Administrator."<<endl;
    Show_Processing();
    cout<<"You will have to enter following details for your verification:\n";
    line_gap();
    cout<<"ID:"<<' ';
    cin>>user_input_Server_ID;
    cout<<"Class:"<<' ';
    cin>>user_input_Server_Class;
    line_gap();
    if( (user_input_Server_ID!=pre_defined_Server_ID) ||
    (user_input_Server_Class!= pre_defined_Server_Class[0] && user_input_Server_Class!=pre_defined_Server_Class[1]) )
	Invalid_Statement();
    else
    {
	cout<<"Verification Succcessful..."<<static_cast<char>(10);
	line_gap();
	cout<<"Dear Server!\n\tSelect any of the follwoing tasks:\n\ta. Terminate the process\n\tb. Display Clients' information\n\tc. Transfer Money"
	    <<static_cast<char>(10)<<"(Enter Terminate, Display-info or Transfer-Money)\n";
	line_gap();
	cout<<"Server request:"<<' ';
	cin>>user_input_Server_further_or_not;
	line_gap();
	if(user_input_Server_further_or_not=="Terminate")
	    Termination();
	else if(user_input_Server_further_or_not=="Display-info")
	{
	    table_header_border(); 
	    table_align();
	    cout<<' '<<' '<<1<<setw(10)<<pre_defined_Client_ID[0]<<setw(5)<<pre_defined_Client_Class[0]<<endl;
	    table_row_border();
	    table_align();
	    cout<<' '<<' '<<2<<setw(10)<<pre_defined_Client_ID[1]<<setw(5)<<pre_defined_Client_Class[1]<<endl;
	    table_row_border();
	    line_gap();
	    cout<<"Note:\n\tOnly Administrator can see all users' information!"<<static_cast<char>(10);
	    line_gap();
	    Termination();
	}
	else if(user_input_Server_further_or_not=="Transfer-Money")
	    Admin_Server_Transfer_Money();
	else
	    Invalid_Statement();
    } //End of Outer else
}
void Server::Client_Request_Continue_Pernission()
{ //Server Class 2nd Member Function Definition
    cout<<"Dear Server!\n\tMay we allow client to further contnue?\n(Write Allow, Deny or Terminate)"<<static_cast<char>(10);
    line_gap();
    cout<<"Server Order:"<<static_cast<char>(32);
    cin>>user_input_Server_further_or_not;
    line_gap();
    if(user_input_Server_further_or_not == "Allow")
    	In_Case_Server_Allow_Client( ); //Go to this function
    else if(user_input_Server_further_or_not == "Deny")
    {
    	cout<<"Your request is denied by Server."<<static_cast<char>(10);
    	line_gap();
    	Termination();
    }
    else if(user_input_Server_further_or_not == "Terminate")
    	Termination();
    else
    	Invalid_Statement();
}
void Server::Admin_Server_Transfer_Money()
{ //Server Class 3rd Member Function Definition
    cout<<"Enter Client number:"<<' ';
    cin>>user_input_Client_Number;
    switch(user_input_Client_Number)
    {
    	case 1:
    	    cout<<"Enter CLient 1 ID:"<<' ';
    	    cin>>user_input_Client_ID[0];
    	    cout<<"Enter Client 1 Class:"<<' ';
    	    cin>>user_input_Client_Class[0];
    	    line_gap();
    	    if(user_input_Client_ID[0]!=pre_defined_Client_ID[0] || user_input_Client_Class[0]!=pre_defined_Client_Class[0])
    	        Invalid_Statement();
    	    else
    	        In_Case_Multi_User_Verification_Successful();
    	case 2:
    	    cout<<"Enter CLient 2 ID:"<<' ';
    	    cin>>user_input_Client_ID[1];
    	    cout<<"Enter Client 2 Class:"<<' ';
    	    cin>>user_input_Client_Class[1];
    	    line_gap();
    	    if(user_input_Client_ID[1]!=pre_defined_Client_ID[1] || user_input_Client_Class[1]!=pre_defined_Client_Class[1])
    	        Invalid_Statement();
    	    else
    	        In_Case_Multi_User_Verification_Successful();
    	default:
    	    Invalid_Statement();	
    }
}	
class Administrator : public Server
{ //6th class, derived class, Administrator, derived from class Server, definition 
    public:
        void Administrator_Verification();
        void Administrator_Transfer_Money();
        void Server_Request_Continue_Pernission();//Admin_Server_Transfer_Money()
};
void Administrator::Administrator_Verification()
{ //Administrator Class 1st Member Function Definition
    cout<<"You will have to enter following details for your verification:\n";
    line_gap();
    cout<<"ID:"<<' ';
    cin>>user_input_Administrator_ID;
    cout<<"Class:"<<' ';
    cin>>user_input_Administrator_Class;
    line_gap();
    if( (user_input_Administrator_ID!=pre_defined_Administrator_ID) ||
    (user_input_Administrator_Class!= pre_defined_Administrator_Class[0] && user_input_Administrator_Class!=pre_defined_Administrator_Class[1]))
	    Invalid_Statement();
    else
    {
	cout<<"Verification Succcessful..."<<static_cast<char>(10);
	line_gap();
	cout<<"Dear Administrator!\n\tSelect any of the following tasks:\n\ta. Terminate the process\n\tb. Display users' information\n\tc. Transfer Money"
	    <<static_cast<char>(10)<<"(Enter Terminate, Display-info or Transfer-Money)\n";
	line_gap();
	cout<<"Administrator request:"<<' ';
	cin>>user_input_Administrator_further_or_not;
	line_gap();
	if(user_input_Administrator_further_or_not=="Terminate")
		Termination();
	else if(user_input_Administrator_further_or_not=="Display-info")
	{
	    table_header_border(); 
	    table_align();
	    cout<<' '<<' '<<1<<setw(10)<<pre_defined_Client_ID[0]<<setw(5)<<pre_defined_Client_Class[0]<<endl;
	    table_row_border();
	    table_align();
	    cout<<' '<<' '<<2<<setw(10)<<pre_defined_Client_ID[1]<<setw(5)<<pre_defined_Client_Class[1]<<endl;
	    table_row_border();
	    table_align();
	    cout<<' '<<' '<<3<<setw(11)<<pre_defined_Server_ID<<setw(4)<<pre_defined_Server_Class[0]<<endl;
	    table_row_border();
	    table_align();
	    cout<<' '<<' '<<3<<setw(11)<<pre_defined_Server_ID<<setw(4)<<pre_defined_Server_Class[1]<<endl;
	    table_row_border();
	    line_gap();
	    Termination();
	}
	else if(user_input_Administrator_further_or_not=="Transfer-Money")
	    Administrator_Transfer_Money();
	else
	    Invalid_Statement();
    } //End of Outer else
}
void Administrator::Server_Request_Continue_Pernission()
{ //Administrator Class 2nd Member Function DefinitionServer
    cout<<"Dear Administrator!\n\tMay we allow server to further contnue?\n(Write Allow, Deny or Terminate)"<<static_cast<char>(10);
    line_gap();
    cout<<"Administrator Order:"<<static_cast<char>(32);
    cin>>user_input_Administrator_further_or_not;
    line_gap();
    if(user_input_Administrator_further_or_not == "Allow")
	In_Case_Administrator_Allow_Server(); 
    else if(user_input_Administrator_further_or_not == "Deny")
    {
	cout<<"Your request is denied by Administrator."<<static_cast<char>(10);
        line_gap();
	Termination();
    }
    else if(user_input_Administrator_further_or_not == "Terminate")
	Termination();
    else
	Invalid_Statement();
}
void Administrator::Administrator_Transfer_Money()
{  //Administrator Class 3rd Member Function Definition
    cout<<"Select any of the following Receiver type:"<<endl<<1<<'.'<<' '<<"Client"<<"\n"<<2<<"."<<' '<<"Server"<<endl<<"Receiver Type:"<<' ';
    cin>>user_input_receiver_type;
    line_gap();
    if(user_input_receiver_type=="Client")
	Admin_Server_Transfer_Money();
    else if(user_input_receiver_type=="Server")
    {
	cout<<"Enter Server ID:"<<' ';
	cin>>user_input_Server_ID;
	cout<<"Class:"<<' ';
	cin>>user_input_Server_Class;
	line_gap();
	if( (user_input_Server_ID!=pre_defined_Server_ID) ||
	(user_input_Server_Class!= pre_defined_Server_Class[0] && user_input_Server_Class!=pre_defined_Server_Class[1]) )
	    Invalid_Statement();
	else
	    In_Case_Multi_User_Verification_Successful();
    }
    else
	Invalid_Statement();
}
int main()
{ //Start of main() function
    Helping_Functions obj_helping_functions; 
    Server obj_server; Administrator obj_Admin;
    string user_type;
    obj_helping_functions.line_gap();
    cout<<"This system is case and character sensitive!"<<endl<<"Any of the wrong input can lead to complete termination of process!"<<endl;
    obj_helping_functions.line_gap();
    cout<<"Enter your user type:"<<"\n"<<1<<'.'<<' '<<"Server"<<endl<<2<<'.'<<' '<<"Client"<<endl<<3<<'.'<<' '<<"Administrator"<<"\n(Enter complete user type)"<<"\n";
    obj_helping_functions.line_gap();
    cout<<"User type:"<<' ';
    cin>>user_type;
    obj_helping_functions.line_gap();
    if(user_type=="Administrator")
    {
	cout<<"You selected Administrator."<<static_cast<char>(10);
	obj_helping_functions.line_gap();
	obj_helping_functions.Show_Processing();
	obj_Admin.Administrator_Verification();
    }
    else if(user_type=="Server")
    {
	cout<<"You selected Server."<<static_cast<char>(10);
	obj_helping_functions.line_gap();
	obj_helping_functions.Show_Processing();
	obj_Admin.Server_Request_Continue_Pernission();
    }
    else if(user_type=="Client")
    {
	cout<<"You selected Client."<<static_cast<char>(10);
	obj_helping_functions.line_gap();
	obj_helping_functions.Show_Processing();
	obj_server.Client_Request_Continue_Pernission();
    }
    else
	obj_helping_functions.Invalid_Statement();
return 0;
} //End of main() function
