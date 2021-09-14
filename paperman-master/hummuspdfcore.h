#ifndef HUMMUSPDFCORE_H
#define HUMMUSPDFCORE_H
#include <string>
#include <vector>
#include <QBitArray>

class HummusPDFCore
{
public:
    HummusPDFCore();
    int merge(std::vector<std::string>&,std::string);
    int split(std::string, std::string, std::string, bool split);
    int reorder(int num, int list, std::string path);
    int remove(QBitArray pages, std::string path);
    std::string getErrorMsg();

private:
    std::string errorMsg;
    std::string intZeroPadding(int, int c);
};

#endif // PDFCORE_H
