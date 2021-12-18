#include <string>
using namespace std;

class URL 
{
private:
    std::string scheme;
    std::string authority;
    std::string path;
  
public:
    URL(std::string url);
    std::string getScheme() const;
    std::string getAuthority() const;
    std::string getPath()const;
    std::string getUrlComplete() const;

    friend ostream& operator<<(ostream& stream, const URL& obj);

};