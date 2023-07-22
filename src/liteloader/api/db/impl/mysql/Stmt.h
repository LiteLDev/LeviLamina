#pragma once
#include "liteloader/api/db/Stmt.h"

#include "mariadb/mysql.h"

namespace DB
{

class MySQLSession;


struct Receiver
{
    MYSQL_FIELD field;
    std::shared_ptr<char[]> buffer;
    unsigned long length = 0;
    bool isNull = false;
    bool isUnsigned = false;
    bool error = false;
};

class MySQLStmt : public Stmt
{

    MYSQL_STMT* stmt = nullptr;
    MYSQL_RES*  metadata = nullptr;
    std::shared_ptr<MYSQL_BIND[]> params = nullptr; ///< Parameters to bind
    std::shared_ptr<MYSQL_BIND[]> result = nullptr; ///< Result of query
    std::shared_ptr<RowHeader> resultHeader = nullptr;
    std::vector<int> boundIndexes;
    std::vector<Receiver> paramValues;
    std::vector<Receiver> resultValues;
    std::unordered_map<std::string, int> paramIndexes;
    std::string query;
    int boundParamsCount = 0;
    int totalParamsCount = 0;
    int steps = 0;
    bool fetched = false;

    MySQLStmt(MYSQL_STMT* stmt, const std::weak_ptr<Session>& parent, bool autoExecute = false);
    int getNextParamIndex();
    void bindResult();

public:
    ~MySQLStmt();
    Stmt& bind(const Any& value, int index);
    Stmt& bind(const Any& value, const std::string& name);
    Stmt& bind(const Any& value);
    Stmt& execute();
    bool step();
    bool next();
    bool done();
    Row _Fetch();
    Stmt& reset();
    Stmt& reexec();
    Stmt& clear();
    void close();
    uint64_t getAffectedRows() const;
    uint64_t getInsertId() const;
    int getUnboundParams() const;
    int getBoundParams() const;
    int getParamsCount() const;
    DBType getType() const;

    LLAPI static SharedPointer<Stmt> create(const std::weak_ptr<Session>& sess, const std::string& sql, bool autoExecute = false);
};

} // namespace DB