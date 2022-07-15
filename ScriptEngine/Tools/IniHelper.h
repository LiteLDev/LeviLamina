#pragma once
#include <string>
#include <SimpleIni/SimpleIni.h>
using std::string;

class SimpleIni : public CSimpleIniA
{
public:
    std::string filePath;

    static inline SimpleIni* create(const std::string& path) { return create(path, ""); }
    static SimpleIni* create(const std::string& path, const std::string& defContent);

    bool setInt(const string& sec, const string& key, int value);
    bool setFloat(const string& sec, const string& key, float value);
    bool setString(const string& sec, const string& key, const string& value);
    bool setBool(const string& sec, const string& key, bool value);
    int getInt(const string& sec, const string& key, int def);
    float getFloat(const string& sec, const string& key, float def);
    string getString(const string& sec, const string& key, const string& def);
    bool getBool(const string& sec, const string& key, bool def);
    bool deleteKey(const std::string& sec, const std::string& key);
};