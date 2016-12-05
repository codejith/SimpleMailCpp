#ifndef MAIL
#define MAIL
#include <string>
class MailHandler {
    void                          _setReceiver(std::string& receiverAddress_);
    void                          _setSubject(std::string& contectSubject_);
    void                          _setMessageBody(std::string& contect_);
    
 private:
    std::string                    _to;
    std::string                    _subject;
    std::string                    _message;
};
#endif
