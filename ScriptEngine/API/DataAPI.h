#pragma once
#include "APIHelp.h"
#include <string>
#include <memory>
#include <KVDBAPI.h>
#include <Tools/JsonHelper.h>
#include <Tools/IniHelper.h>

//////////////////// Data Static ////////////////////

class DataClass
{
public:
    static Local<Value> xuid2name(const Arguments& args);
    static Local<Value> name2xuid(const Arguments& args);

    static Local<Value> parseJson(const Arguments& args);
    static Local<Value> toJson(const Arguments& args);
    static Local<Value> toMD5(const Arguments& args);
    static Local<Value> toSHA1(const Arguments& args);
    static Local<Value> toBase64(const Arguments& args);
    static Local<Value> fromBase64(const Arguments& args);

    //For Compatibility
    static Local<Value> openConfig(const Arguments& args);
    static Local<Value> openDB(const Arguments& args);
};
extern ClassDefine<void> DataClassBuilder;


//////////////////// Money Static ////////////////////

class MoneyClass
{
public:
    static Local<Value> set(const Arguments& args);
    static Local<Value> get(const Arguments& args);
    static Local<Value> add(const Arguments& args);
    static Local<Value> reduce(const Arguments& args);
    static Local<Value> trans(const Arguments& args);
    static Local<Value> getHistory(const Arguments& args);
    static Local<Value> clearHistory(const Arguments& args);
};
extern ClassDefine<void> MoneyClassBuilder;


//////////////////// Classes ////////////////////

class DbClass : public ScriptClass
{
private:
    std::unique_ptr<KVDB> kvdb;

public:
	explicit DbClass(const Local<Object>& scriptObj, const string& dir);
    explicit DbClass(const string& dir);
    ~DbClass();
    static DbClass* constructor(const Arguments& args);

    bool isValid()
    {
        return kvdb->isValid();
    }

    Local<Value> get(const Arguments& args);
    Local<Value> set(const Arguments& args);
    Local<Value> del(const Arguments& args);
    Local<Value> close(const Arguments& args);
    Local<Value> listKey(const Arguments& args);

    //For Compatibility
    static Local<Value> newDb(const string& dir);
};
extern ClassDefine<DbClass> DbClassBuilder;


class ConfBaseClass
{
protected:
    std::string confPath;
    virtual bool flush() = 0;
    virtual bool close() = 0;
    virtual bool reload() = 0;

public:
    explicit ConfBaseClass(const string& dir);

    virtual Local<Value> reload(const Arguments& args) = 0;
    virtual Local<Value> close(const Arguments& args) = 0;
    Local<Value> getPath(const Arguments& args);
    Local<Value> read(const Arguments& args);
    virtual Local<Value> write(const Arguments& args) = 0;
};


class ConfJsonClass : public ScriptClass, public ConfBaseClass
{
private:
    fifo_json jsonConf;
    bool flush() override;
    bool close() override;
    bool reload() override;

public:
    explicit ConfJsonClass(const Local<Object>& scriptObj, const string& path, const string& defContent);
    explicit ConfJsonClass(const string& path, const string& defContent);
    ~ConfJsonClass();
    static ConfJsonClass* constructor(const Arguments& args);

    Local<Value> init(const Arguments& args);
    Local<Value> get(const Arguments& args);
    Local<Value> set(const Arguments& args);
    Local<Value> del(const Arguments& args);
    virtual Local<Value> reload(const Arguments& args) override;
    virtual Local<Value> close(const Arguments& args) override;
    virtual Local<Value> write(const Arguments& args) override;

    //For Compatibility
    static Local<Value> newConf(const string& path, const string& defContent = "");
};
extern ClassDefine<ConfJsonClass> ConfJsonClassBuilder;


class ConfIniClass : public ScriptClass, public ConfBaseClass
{
private:
    SimpleIni* iniConf;
    bool flush() override;
    bool close() override;
    bool reload() override;

public:
    explicit ConfIniClass(const Local<Object>& scriptObj, const string& path, const string& defContent);
    explicit ConfIniClass(const string& path, const string& defContent);
    ~ConfIniClass();
    static ConfIniClass* constructor(const Arguments& args);

    bool isValid()
    {
        return iniConf != nullptr;
    }

    Local<Value> init(const Arguments& args);
    Local<Value> set(const Arguments& args);
    Local<Value> getStr(const Arguments& args);
    Local<Value> getInt(const Arguments& args);
    Local<Value> getFloat(const Arguments& args);
    Local<Value> getBool(const Arguments& args);
    Local<Value> del(const Arguments& args);
    virtual Local<Value> reload(const Arguments& args) override;
    virtual Local<Value> close(const Arguments& args) override;
    virtual Local<Value> write(const Arguments& args) override;

    //For Compatibility
    static Local<Value> newConf(const string& path, const string& defContent = "");
};
extern ClassDefine<ConfIniClass> ConfIniClassBuilder;