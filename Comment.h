#include <iostream>
#include <map>
using namespace std;
class Comment
{
private:
    int m_comment_ID;
    string m_text;
    int m_user_ID;
    int m_document_ID;
public:
    Comment(string text, int docID);
    Comment(int commentID, string text, int docID, string OwnerID);
    void comment_todoc();
    void Delete();
    void Show();

};