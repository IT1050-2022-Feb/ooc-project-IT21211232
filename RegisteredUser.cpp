/*
Student ID: IT21211232
Group: MET_WE_03_01
*/
#include "RegisteredUser.h"
#include<cstring>
RegisteredUser::RegisteredUser()
{
	strcpy(username, "");
	strcpy(password, "");
}
RegisteredUser::RegisteredUser(char username[20], char password[20],
	int inUserId, char inUserName[],
	char inUserContact[], char inUserEmail[])
{

}

void RegisteredUser::setUserID(char inUserId[])
{

}//setter for user ID
char RegisteredUser::getUserId()
{

}//getter for user ID
void RegisteredUser::setUserName(char inUserName[])
{

}//setter for username
char RegisteredUser::getUserName()
{

}//getter for username
void RegisteredUser::setUserConatct(char inUserContact)
{

}//setter for user contact
char RegisteredUser::getUserContact()
{

}//getter for user contact
void RegisteredUser::setUserEmail(char inUserEmail)
{

}//setter for user email
char RegisteredUser::getUserEmail()
{

}//getter for user email

void RegisteredUser::viewAdvertisements(int aid[])
{

}
void RegisteredUser::viewFav(int aid[])
{

}
void RegisteredUser::Systemlogin()
{

}
void RegisteredUser::Systemlogout()
{

}

RegisteredUser::~RegisteredUser() 
{

}