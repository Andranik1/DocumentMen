#include <iostream>
#include <map>
#include "Document.h"
#include "Workspace.h"
#include "Comment.h"
using namespace std;
class User
{
private:
	int m_user_ID;
    string m_fullName;
    string m_e_mail;
    string m_username;
	string m_password ;
	string m_picture;
public:
	
	User(string fullName, string e_mail, string username, string password, string picture);
    User(int user_ID, string fullName, string e_mail, string picture);
private:
    map<int,Document> documentsOfCurrentUser;
    map<int,Workspace> workspacesOfCurrentUser;
    map<int,Comment> commentsOfCurrentUser;

};
