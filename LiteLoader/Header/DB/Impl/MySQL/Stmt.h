#pragma once
#include "../../Stmt.h"

struct MYSQL_STMT;

namespace DB
{

class MySQLSession;

/**
 * @brief Fetched data receiver(buffer)
 * 
 */
struct Receiver
{
    MYSQL_FIELD field;
    std::shared_ptr<char[]> buffer;
    uint32_t length = 0;
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

    MySQLStmt(MYSQL_STMT* stmt);
    int getNextParamIndex();
    void bindResult();
    void execute();

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
    uint64_t getAffectedRows() const;
    uint64_t getInsertId() const;
    int getUnboundParams() const;
    int getBoundParams() const;
    int getParamsCount() const;
    std::weak_ptr<Session> getSession() const;
    DBType getType() const;

    Stmt& operator,(const BindType& b);

    LIAPI static SharedPointer<Stmt> create(const std::weak_ptr<Session>& sess, const std::string& sql);
};

} // namespace DB