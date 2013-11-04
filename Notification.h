#include <iostream>
#include <map>
using namespace std;
class Notification
{
private:
	int m_notification_ID;
    int m_owner_ID;
    bool m_type; 
    int m_doc_ID;
    int m_user_ID;
public:
    Notification(int ownerID, int docID);
    Notification(int ownerID, int docID,  int user_ID);
    Notification(int notID, bool type, int ownerID, int docID, int user_ID );
    void Create();
    void Show(bool type);
    void Delete();

};