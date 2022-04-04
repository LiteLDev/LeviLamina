#include "../../Stmt.h"

struct sqlite3;
struct sqlite3_stmt;

namespace DB {

class SQLiteStmt : public Stmt
{

    sqlite3_stmt* stmt = nullptr;
    int boundParamsCount = 0;
    int totalParamsCount = 0;

public:

    LIAPI SQLiteStmt(sqlite3_stmt* stmt);
    ~SQLiteStmt();
    Stmt& bind(const Any& value, int index);
    Stmt& bind(const Any& value, const std::string& name);
    void close();
    int getUnboundParamsCount();
    int getBoundParamsCount();
    int getParamsCount();

    LIAPI static Stmt&& create(sqlite3* db, const std::string& sql);

};

} // namespace DB