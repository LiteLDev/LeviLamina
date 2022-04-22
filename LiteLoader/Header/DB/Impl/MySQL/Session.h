#pragma once
#include "../../Session.h"

struct MYSQL;

namespace DB
{

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
    bool change(const std::string& user, const std::string& password, const std::string& db = "");
    void query(const std::string& query, std::function<bool(const Row&)> callback);
    Stmt& prepare(const std::string& query);
    std::string getLastError() const;
    uint64_t getAffectedRows() const;
    uint64_t getLastInsertId() const;
    void close();
    bool isOpen();
    DBType getType();

    Stmt& operator<<(const std::string& query);

    friend class MySQLStmt;

};

} // namespace DB