#include "../../Stmt.h"

struct sqlite3;
struct sqlite3_stmt;

namespace DB
{

class SQLiteSession;

class SQLiteStmt : public Stmt
{

    sqlite3_stmt* stmt = nullptr;
    int boundParamsCount = 0;
    int totalParamsCount = 0;
    bool onHeap = false;
    std::vector<int> boundIndexes;

    SQLiteStmt(sqlite3_stmt* stmt);
    int getNextParamIndex();
    void process();

public:
    ~SQLiteStmt();
    Stmt& bind(const Any& value, int index);
    Stmt& bind(const Any& value, const std::string& name);
    Stmt& bind(const Any& value);
    void close();
    int getUnboundParamsCount();
    int getBoundParamsCount();
    int getParamsCount();
    DBType getType();
    bool isExecuted();

    Stmt& operator,(const BindType& b);

    LIAPI static Stmt& create(sqlite3* db, const std::string& sql);
    LIAPI static Stmt& create(SQLiteSession& sess, const std::string& sql);
    LIAPI static Stmt& create(sqlite3_stmt* stmt);
};

} // namespace DB