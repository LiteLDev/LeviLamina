#include <ScriptX/ScriptX.h>
#include <fstream>
#include <filesystem>
#include "Configs.h"
using namespace std;

ofstream record;

void InitSafeGuardRecord()
{
    filesystem::create_directories("logs/LiteLoader");
    record.open(string("logs/LiteLoader/Sensitive_Operation_Records-") + LLSE_BACKEND_TYPE + ".log", ios::app);
}

void RecordOperation(const string& pluginName, const std::string &operation, const string& content)
{
    if (record.is_open())
        record << "[" << operation << "]<" << pluginName << "> " << content << endl;
}