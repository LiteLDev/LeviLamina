#pragma once
#include "APIHelp.h"
#include <KVDBAPI.h>
#include <DB/Session.h>

//////////////////// Classes ////////////////////

//// KVDB
class KVDBClass : public ScriptClass {
private:
    std::unique_ptr<KVDB> kvdb;
    int unloadCallbackIndex = -1;

public:
    explicit KVDBClass(const Local<Object>& scriptObj, const string& dir);
    explicit KVDBClass(const string& dir);
    ~KVDBClass();
    static KVDBClass* constructor(const Arguments& args);

    bool isValid() {
        return kvdb->isValid();
    }

    Local<Value> get(const Arguments& args);
    Local<Value> set(const Arguments& args);
    Local<Value> del(const Arguments& args);
    Local<Value> close(const Arguments& args);
    Local<Value> listKey(const Arguments& args);

    // For Compatibility
    static Local<Value> newDb(const string& dir);
};
extern ClassDefine<KVDBClass> KVDBClassBuilder;


//// SQLDB
class DBSessionClass : public ScriptClass {
private:
    DB::SharedPointer<DB::Session> session;

public:
    explicit DBSessionClass(const Local<Object>& scriptObj, const DB::ConnParams& params);
    explicit DBSessionClass(const DB::ConnParams& params);
    ~DBSessionClass();
    static DBSessionClass* constructor(const Arguments& args);

    Local<Value> query(const Arguments& args);
    Local<Value> exec(const Arguments& args);
    Local<Value> prepare(const Arguments& args);
    Local<Value> close(const Arguments& args);
    Local<Value> isOpen(const Arguments& args);
};
extern ClassDefine<DBSessionClass> DBSessionClassBuilder;

class DBStmtClass : public ScriptClass {
private:
    DB::SharedPointer<DB::Stmt> stmt;

public:
    explicit DBStmtClass(const Local<Object>& scriptObj, const DB::SharedPointer<DB::Stmt>& stmt);
    explicit DBStmtClass(const DB::SharedPointer<DB::Stmt>& stmt);
    ~DBStmtClass();

    Local<Value> getAffectedRows();
    Local<Value> getInsertId();

    Local<Value> bind(const Arguments& args);
    Local<Value> execute(const Arguments& args);
    Local<Value> step(const Arguments& args);
    Local<Value> fetch(const Arguments& args);
    Local<Value> fetchAll(const Arguments& args);
    Local<Value> reset(const Arguments& args);
    Local<Value> reexec(const Arguments& args);
    Local<Value> clear(const Arguments& args);
};
extern ClassDefine<DBStmtClass> DBStmtClassBuilder;
