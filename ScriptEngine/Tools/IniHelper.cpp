#include "IniHelper.h"
#include <filesystem>
#include <Utils/FileHelper.h>
#include <LoggerAPI.h>
using namespace std;
extern Logger logger;

SimpleIni* SimpleIni::create(const string& path, const std::string& defContent)
{
    if (!filesystem::exists(str2wstr(path)))
    {
        //创建新的
        filesystem::create_directories(filesystem::path(str2wstr(path)).remove_filename().u8string());

        ofstream iniFile(path);
        if (iniFile.is_open() && defContent != "")
            iniFile << defContent;
        iniFile.close();
    }

    //已存在
    auto root = new SimpleIni;
    root->SetUnicode(true);
    auto res = root->LoadFile(path.c_str());
    if (res < 0)
    {
        logger.error("Failed in loading ini file");
        logger.error(string("Error Code:") + to_string((int)res));
        delete root;
        return nullptr;
    }
    else
    {
        root->filePath = path;
        return root;
    }
}

bool SimpleIni::setInt(const string& sec, const string& key, int value)
{
    bool isOk = SetLongValue(sec.c_str(), key.c_str(), value) >= 0;
    SaveFile(filePath.c_str());
    return isOk;
}

bool SimpleIni::setFloat(const string& sec, const string& key, float value)
{
    bool isOk = SetDoubleValue(sec.c_str(), key.c_str(), value) >= 0;
    SaveFile(filePath.c_str());
    return isOk;
}

bool SimpleIni::setString(const string& sec, const string& key, const string& value)
{
    bool isOk = SetValue(sec.c_str(), key.c_str(), value.c_str()) >= 0;
    SaveFile(filePath.c_str());
    return isOk;
}

bool SimpleIni::setBool(const string& sec, const string& key, bool value)
{
    bool isOk = SetBoolValue(sec.c_str(), key.c_str(), value) >= 0;
    SaveFile(filePath.c_str());
    return isOk;
}

int SimpleIni::getInt(const string& sec, const string& key, int def)
{
    return GetLongValue(sec.c_str(), key.c_str(), def);
}

float SimpleIni::getFloat(const string& sec, const string& key, float def)
{
    return (float)GetDoubleValue(sec.c_str(), key.c_str(), def);
}

string SimpleIni::getString(const string& sec, const string& key, const string& def)
{
    return GetValue(sec.c_str(), key.c_str(), def.c_str());
}

bool SimpleIni::getBool(const string& sec, const string& key, bool def)
{
    return GetBoolValue(sec.c_str(), key.c_str(), def);
}

bool SimpleIni::deleteKey(const std::string& sec, const std::string& key)
{
    return Delete(sec.c_str(), key.c_str(), true);
}