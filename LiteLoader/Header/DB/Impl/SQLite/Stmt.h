#include "../../Stmt.h"

struct sqlite3;
struct sqlite3_stmt;

namespace DB
{

class SQLiteSession;

class SQLiteStmt : public Stmt
{

    SQLiteSession* session = nullptr;
    sqlite3_stmt* stmt = nullptr;
    RowHeader resultHeader;
    int boundParamsCount = 0;
    int totalParamsCount = 0;
    int affectedRowsCount = -1;
    bool onHeap = false;
    bool stepped = false;
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
    ResultSet fetchAll(RowHeader& header);
	Stmt& reset();
    void close();
    int getAffectedRows();
    int getUnboundParams();
    int getBoundParams();
    int getParamsCount();
    DBType getType();

    Stmt& operator,(const BindType& b);

    LIAPI static Stmt& create(SQLiteSession& sess, const std::string& sql);
};

} // namespace DB