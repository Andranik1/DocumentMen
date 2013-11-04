#include <iostream>
#include <map>
using namespace std;
class Document
{
private:
	int m_document_ID;
    string m_path;
    string m_title;
    string m_extension;
    size_t m_size;
    int m_owner_ID;
    int m_version;
    int m_workspace_ID;
    string m_visibility_status;
public:
    Document(string path,int workspace_ID, string visibility_status,int user_IDs);
    Document(int document_ID, string title, string extension, size_t size, int owner_ID, int user_IDs, int version, int workspace_ID, string visibility_status);
    void Upload();
    void Delete();
    void Rename(string new_name);
    void Move(int new_workspace_ID);
    void Edit();
    Document Search(string doc_name, int workspace_id=0);
    void Share(int user_IDs );
    void Show();
    void Archive();
private:
   map<int,Comment> commentsOfThisDocument;
   map<int,int> IDsOfThoseUsersWhoCanSeeThisDocument;

};