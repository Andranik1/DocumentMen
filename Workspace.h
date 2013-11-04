#include <iostream>
using namespace std;
class Workspace
{
private:
	int m_workspace_ID;
    string m_title;
public:
    Workspace(string title);
    Workspace(int wsID, string title);
    void Create();
    void Delete();
    void Rename(string newName);
    void Show();
private:
  map<int,Document> docsInCurrentWorkspace;

};