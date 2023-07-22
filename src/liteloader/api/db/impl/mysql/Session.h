#pragma once
#include "liteloader/api/db/Session.h"

#include "mariadb/mysql.h"

namespace DB
{

class MySQLStmt;

class MySQLSession : public Session
{

    MYSQL* conn = nullptr;

    void setSSL(const ConnParams& params);

public:
    MySQLSession();
    MySQLSession(const ConnParams& params);
    ~MySQLSession();
    void open(const ConnParams& params);
    bool execute(const std::string& query);
    bool relogin(const std::string& user, const std::string& password, const std::string& db = "");
    Session& query(const std::string& query, std::function<bool(const Row&)> callback);
    SharedPointer<Stmt> prepare(const std::string& query, bool autoExecute = false);
    std::string getLastError() const;
    uint64_t getAffectedRows() const;
    uint64_t getLastInsertId() const;
    void close();
    bool isOpen();
    DBType getType();

    SharedPointer<Stmt> operator<<(const std::string& query);

    friend class MySQLStmt;

};

} // namespace DB