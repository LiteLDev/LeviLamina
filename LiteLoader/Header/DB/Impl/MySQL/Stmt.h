#pragma once
#include "../../Stmt.h"

struct MYSQL_STMT;

namespace DB
{

class MySQLSession;

class MySQLStmt : public Stmt
{

    MYSQL_STMT* stmt = nullptr;
    std::shared_ptr<MYSQL_BIND[]> params = nullptr;
    MySQLSession* session = nullptr;
    int boundParamsCount = 0;
    int totalParamsCount = 0;
    std::vector<int> boundIndexes;
    std::vector<Any> paramValues;
    std::vector<uint32_t> paramLengths; ///< Store lengths for strings
    std::vector<MYSQL_TIME> dateParams;      ///< Store dates for binding
    std::unordered_map<std::string, int> paramIndexes;

    MySQLStmt(MYSQL_STMT* stmt);
    int getNextParamIndex();

public:
    ~MySQLStmt();
    Stmt& bind(const Any& value, int index);
    Stmt& bind(const Any& value, const std::string& name);
    Stmt& bind(const Any& value);
    bool step();
    bool next();
    bool done();
    Row fetch();
    Stmt& fetchAll(std::function<bool(const Row&)> cb);
    ResultSet fetchAll();
    Stmt& reexec();
    Stmt& clear();
    void close();
    void destroy();
    uint64_t getAffectedRows() const;
    uint64_t getInsertId() const;
    int getUnboundParams() const;
    int getBoundParams() const;
    int getParamsCount() const;
    Session* getSession() const;
    DBType getType() const;

    Stmt& operator,(const BindType& b);

    LIAPI static Stmt& create(MySQLSession& sess, const std::string& sql);
};

} // namespace DB