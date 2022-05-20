/*
Student ID: IT21211232
Group: MET_WE_03_01
*/
#include "GuestUser.h"
#include <cstring>

GuestUser::GuestUser()
{
	strcpy(UserID, "");
	strcpy(UserName, "");
	strcpy(UserContact, "");
	strcpy(UserEmail, "");
}
GuestUser::GuestUser(char inUserId[], char inUserName[], char inUserContact[], char inUserEmail[])
{
	strcpy(UserID, inUserId);
	strcpy(UserName, inUserName);
	strcpy(UserContact, inUserContact);
	strcpy(UserEmail, inUserEmail);
}
void GuestUser::setUserID( char inUserId[])
{

}
char GuestUser::getUserId() 
{

}//getter for user ID
void GuestUser::setUserName( char inUserName[])
{

}//setter for username
char GuestUser::getUserName()
{

}//getter for username
void GuestUser::setUserConatct( char inUserContact)
{

}//setter for user contact
char GuestUser::getUserContact()
{

}//getter for user contact
void GuestUser::setUserEmail( char inUserEmail)
{

}//setter for user email
char GuestUser::getUserEmail()
{

}//getter for user email
void GuestUser::UserRegister()
{

}

GuestUser::~GuestUser() 
{

}