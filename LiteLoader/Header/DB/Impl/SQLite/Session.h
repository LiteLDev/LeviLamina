#pragma once
#include "../../Session.h"

struct sqlite3;
namespace DB
{

class SQLiteSession : public Session
{

    sqlite3* conn = nullptr;
    Stmt* lastStmt = nullptr;

public:
    SQLiteSession();
    SQLiteSession(const ConnParams& params);
    ~SQLiteSession();
    void open(const ConnParams& params);
    bool execute(const std::string& query);
    void query(const std::string& query, std::function<bool(const Row&)> callback);
    Stmt& prepare(const std::string& query);
    std::string getLastError() const;
    int getAffectedRows() const;
    void close();
    bool isOpen();
    DBType getType();

    Stmt& operator<<(const std::string& query);

    friend class SQLiteStmt;
};

} // namespace DB