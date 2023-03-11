#pragma once
#include "llapi/db/Stmt.h"

struct sqlite3_stmt;

namespace DB
{

class SQLiteSession;

class SQLiteStmt : public Stmt
{

    std::shared_ptr<RowHeader> resultHeader;
    sqlite3_stmt* stmt = nullptr;
    int boundParamsCount = 0;
    int totalParamsCount = 0;
    int steps = 0;
    uint64_t affectedRowCount = -1;
    uint64_t insertRowId = -1;
    bool stepped = false;
    bool executed = false;
    std::vector<int> boundIndexes;

    SQLiteStmt(sqlite3_stmt* stmt, const std::weak_ptr<Session> parent, bool autoExecute);
    int getNextParamIndex();
    void fetchResultHeader();

public:
    ~SQLiteStmt();
    Stmt& bind(const Any& value, int index);
    Stmt& bind(const Any& value, const std::string& name);
    Stmt& bind(const Any& value);
    Stmt& execute();
    bool step();
    bool next();
    bool done();
    Row _Fetch();
    Stmt& reset();
    /**
     * @see Stmt::reexec for details
     * @see https://www.sqlite.org/c3ref/reexec.html
     */
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