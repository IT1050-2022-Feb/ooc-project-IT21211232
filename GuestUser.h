/*
Student ID: IT21211232
Group: MET_WE_03_01
*/
class GuestUser
{
protected:
	char UserID[10];
	char UserName[20];
	char UserContact[10];
	char UserEmail[20];
public:
	GuestUser();
	GuestUser(char inUserId[], char inUserName[], char inUserContact[], char inUserEmail[]);
	void setUserID(char inUserId[]);//setter for user ID
	char getUserId(); //getter for user ID
	void setUserName(char inUserName[]);//setter for username
	char getUserName();//getter for username
	void setUserConatct(char inUserContact);//setter for user contact
	char getUserContact();//getter for user contact
	void setUserEmail(char inUserEmail);//setter for user email
	char getUserEmail();//getter for user email
	void UserRegister();

	~GuestUser();
};