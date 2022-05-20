/*
Student ID: IT21211232
Group: MET_WE_03_01
*/
class RegisteredUser :public GuestUser
{
protected:
	char username[20];
	char password[20];
public:
	RegisteredUser();
	RegisteredUser(char username[20], char password[20],
	int inUserId, char inUserName[],
	char inUserContact[], char inUserEmail[]);
	void setUserID(char inUserId[]);//setter for user ID
	char getUserId(); //getter for user ID
	void setUserName(char inUserName[]);//setter for username
	char getUserName();//getter for username
	void setUserConatct(char inUserContact);//setter for user contact
	char getUserContact();//getter for user contact
	void setUserEmail(char inUserEmail);//setter for user email
	char getUserEmail();//getter for user email

	void viewAdvertisements(int aid[]);
	void viewFav(int aid[]);
	void Systemlogin();
	void Systemlogout();

	~RegisteredUser();

};