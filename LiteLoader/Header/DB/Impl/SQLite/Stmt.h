#pragma once
#include "../../Stmt.h"

struct sqlite3_stmt;

namespace DB
{

class SQLiteSession;

class SQLiteStmt : public Stmt
{

    SQLiteSession* session = nullptr;
    sqlite3_stmt* stmt = nullptr;
    std::shared_ptr<RowHeader> resultHeader;
    int boundParamsCount = 0;
    int totalParamsCount = 0;
    int steps = 0;
    uint64_t affectedRowCount = -1;
    uint64_t insertRowId = -1;
    bool onHeap = false;
    bool stepped = false;
    bool executed = false;
    std::vector<int> boundIndexes;

    SQLiteStmt(sqlite3_stmt* stmt);
    int getNextParamIndex();
    void fetchResultHeader();

public:
    ~SQLiteStmt();
    Stmt& bind(const Any& value, int index);
    Stmt& bind(const Any& value, const std::string& name);
    Stmt& bind(const Any& value);
    bool step();
    bool next();
    bool done();
    Row fetch();
    Stmt& fetchAll(std::function<bool(const Row&)> cb);
    ResultSet fetchAll();
    /**
     * @see Stmt::reexec for details
     * @see https://www.sqlite.org/c3ref/reexec.html
     */
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

    LIAPI static Stmt& create(SQLiteSession& sess, const std::string& sql);
};

} // namespace DB