#define LLDB_DEBUG_MODE
#define _AMD64_
#include <DB/Session.h>
#include <LoggerAPI.h>
#include <iostream>
#include <filesystem>
#include <third-party/mysql/mysql.h>

using namespace std;
using namespace DB;
namespace fs = std::filesystem;

#undef ERROR
//#define CATCH_EXCEPTION

Logger logger("DBTest");

void log_row(const Row& row)
{
    if (row.empty())
    {
        logger.warn("Empty row!");
        return;
    }
    logger.info("Row:");
    row.forEach([&](const std::string& k, const Any& v) {
        logger.info("- {}: {}", k, v.get<std::string>());
        return true;
    });
}

void log_result_set(const ResultSet& set)
{
    if (set.empty())
    {
        logger.warn("Empty result set!");
        return;
    }
    logger.info("ResultSet:");
    std::string line;
    auto iss = std::istringstream(set.toTableString());
    while (getline(iss, line))
    {
        logger.info(line);
    }
}

std::pair<std::shared_ptr<char[]>, std::size_t> alloc_buf(const MYSQL_FIELD& field)
{
    std::size_t len = 0;
    switch (field.type)
    {
        case MYSQL_TYPE_NULL:
            return {nullptr, 0};
        case MYSQL_TYPE_TINY:
            len = sizeof(char);
            break;
        case MYSQL_TYPE_SHORT:
            len = sizeof(short);
            break;
        case MYSQL_TYPE_INT24:
        case MYSQL_TYPE_LONG:
            len = sizeof(int);
            break;
        case MYSQL_TYPE_BIT:
        case MYSQL_TYPE_LONGLONG:
            len = sizeof(long long);
            break;
        case MYSQL_TYPE_FLOAT:
            len = sizeof(float);
            break;
        case MYSQL_TYPE_DOUBLE:
            len = sizeof(double);
            break;
        case MYSQL_TYPE_YEAR:
            len = sizeof(short);
            break;
        case MYSQL_TYPE_TIME:
        case MYSQL_TYPE_DATE:
        case MYSQL_TYPE_DATETIME:
        case MYSQL_TYPE_TIMESTAMP:
            len = sizeof(MYSQL_TIME);
            break;
        case MYSQL_TYPE_STRING:
        case MYSQL_TYPE_VAR_STRING:
        case MYSQL_TYPE_VARCHAR:
        case MYSQL_TYPE_BLOB:
        case MYSQL_TYPE_TINY_BLOB:
        case MYSQL_TYPE_MEDIUM_BLOB:
        case MYSQL_TYPE_LONG_BLOB:
        case MYSQL_TYPE_SET:
        case MYSQL_TYPE_ENUM:
        case MYSQL_TYPE_GEOMETRY:
        case MYSQL_TYPE_JSON:
            len = field.max_length + 1;
            break;
        case MYSQL_TYPE_DECIMAL:
        case MYSQL_TYPE_NEWDECIMAL:
            len = 64;
            break;
        default:
            len = 0;
            logger.error("alloc_buf: unknown type: {}", (int)field.type);
            break;
    }
    if (len)
    {
        auto buffer = std::shared_ptr<char[]>(new char[len]);
#if defined(LLDB_DEBUG_MODE)
        logger.debug("alloc_buf: Allocated! Buffer size: {}", len);
#endif
        return std::make_pair(buffer, len);
    }
    return std::make_pair(std::shared_ptr<char[]>(), len);
}


void run_tests(SharedPointer<Session> sess)
{
#if defined(CATCH_EXCEPTION)
    try
#endif
    {
        sess << "DROP TABLE IF EXISTS test";
        // sess->execute("CREATE TABLE IF NOT EXISTS test (a CHAR(100) NOT NULL, b INTEGER NOT NULL);");
        sess << "CREATE TABLE IF NOT EXISTS test (a CHAR(100) NOT NULL, b INTEGER NOT NULL);";
        sess->execute("INSERT INTO test VALUES('awa', 114514)");
        sess << "INSERT INTO test VALUES(?, ?)", use("qwq"), use(1919810);
        sess << "INSERT INTO test VALUES(?, ?)", use(Row{"liteloader", 233333});
        sess << "INSERT INTO test VALUES(?, ?)", use("liteloader"), use(100);
        sess << "INSERT INTO test VALUES('听我说谢谢你', 128)";
        //sess << "INSERT INTO test VALUES('$a\"', $b)", use(2147483647, "b");
        sess->prepare("INSERT INTO test VALUES(?, ?)")
            ->bind("liteloader")
            ->bind(2147483647)
            ->execute()
            ->reset()
            ->execute()
            ->reset()
            ->execute()
            ->reexec()
            ->reexec();
        sess->query("SELECT * FROM test");
        sess->query("SELECT * FROM test LIMIT 1");
        auto stmt = sess->prepare("SELECT * FROM test WHERE a = $A");
        // The first parameter is value, the second is key!
        stmt->bind("liteloader", "A")->execute();
        do {
            log_row(stmt->fetch());
        } while (stmt->next());
        stmt->clear();
        stmt->bind("qwq", "A")->execute();
        do {
            log_row(stmt->fetch());
        } while (stmt->next());
        // Single row
        Row row;
        sess << "SELECT * FROM test WHERE a = ?", use("liteloader"), into(row);
        log_row(row);
        // Result set
        ResultSet set;
        sess << "SELECT * FROM test WHERE a = ?", use("liteloader"), into(set);
        log_result_set(set);
        sess->prepare("SELECT * FROM test WHERE a = $A")
            ->bind("liteloader", "A")
            ->execute()
            ->fetchAll([](const Row& row) {
                log_row(row);
                return true;
            });
        logger.info("FINALLY:");
        sess->query("SELECT * FROM test");
        sess->close();
    }
#if defined(CATCH_EXCEPTION)
    catch (std::exception e)
    {
        logger.error(e.what());
    }
#endif
}

void test_sqlite()
{
    if (fs::exists("plugins/DBTest/dbs"))
    {
        fs::remove_all("plugins/DBTest/dbs");
    }
    fs::create_directories("plugins/DBTest/dbs");

    // If there is no changes, the database will be a empty file
    Session::create("file:///plugins/DBTest/dbs/test_create_by_url.db");

    Session::create(DBType::SQLite)->open("file:///plugins/DBTest/dbs/test_create_by_url2.db");
    
    auto s1 = Session::create(DBType::SQLite);
    s1->open("file:///plugins/DBTest/dbs/test_create_by_url3.db");
    s1->execute("CREATE TABLE IF NOT EXISTS test (a INTEGER)");
    s1->close();
    
    auto sess = Session::create(DBType::SQLite);
    sess->setDebugOutput(true);
    sess->open({{"path", "plugins/DBTest/dbs/a.db"}});
    run_tests(sess);
}


// Vars
constexpr const char* host = "127.0.0.1";
constexpr const uint16_t port = 3306;
constexpr const char* user = "root";
constexpr const char* passwd = "root";
constexpr const char* dbname = "lldbtest";
void test_mysql()
{
    const std::string url = fmt::format("mysql://{}:{}@{}:{}/", 
                            user, passwd, host, port);
    
    auto s1 = Session::create(url); // Test url
    s1->execute("CREATE DATABASE IF NOT EXISTS " + std::string(dbname));
    s1->close();

    auto sess = Session::create(DBType::MySQL, host, port, user, passwd, dbname);
    sess->setDebugOutput(true);
    run_tests(sess);
}

#define CHKRES_STMT(x) \
    if (res) \
    { \
        logger.error("MySQL CAPI Test: {}: {}", x, mysql_stmt_error(stmt)); \
        return; \
    }
void test_mysql_capi()
{
    struct Receiver
    {
        std::shared_ptr<char[]> buffer;
        unsigned long length = 0;
        bool is_null = false;
        bool is_unsigned = false;
        bool error = false;
    } recs[2];
    MYSQL* conn = nullptr;
    MYSQL_STMT* stmt = nullptr;
    conn = mysql_init(NULL);
    if (!mysql_real_connect(conn, host, user, passwd, dbname, port, NULL, NULL))
    {
        logger.error("MySQL CAPI Test: Error when connecting: {}", mysql_error(conn));
        return;
    }
    stmt = mysql_stmt_init(conn);
    constexpr const char* q1 = "SELECT * FROM test";
    int res = mysql_stmt_prepare(stmt, q1, strlen(q1));
    CHKRES_STMT("Error when preparing Query 1");
    res = mysql_stmt_execute(stmt);
    if (res)
    {
        logger.error("MySQL CAPI Test: Error when executing Query 1: {}", mysql_stmt_error(stmt));
        mysql_rollback(conn);
        return;
    }
    MYSQL_RES* metadata = mysql_stmt_result_metadata(stmt);
    if (mysql_stmt_errno(stmt) && !metadata)
    {
        logger.error("MySQL CAPI Test: Failed to get result metadata: {}", mysql_stmt_error(stmt));
        return;
    }
    if (!metadata)
    {
        logger.error("MySQL CAPI Test: No result metadata");
        return;
    }
    bool attr_max_length = true;
    mysql_stmt_attr_set(stmt, STMT_ATTR_UPDATE_MAX_LENGTH, (const void*)&attr_max_length);
    res = mysql_stmt_store_result(stmt);
    CHKRES_STMT("Error when storing result");
    auto num = mysql_num_fields(metadata);
    logger.info("MySQL CAPI Test: mysql_num_fields: {}", num);
    auto fields = mysql_fetch_fields(metadata);
    MYSQL_BIND bind[2];
    for (auto i = 0U; i < num; i++)
    {
        logger.info("MySQL CAPI Test: Field name at {} is {}", i, fields[i].name);
        bind[i].length = &recs[i].length;
        bind[i].is_null = &recs[i].is_null;
        bind[i].is_unsigned = fields[i].flags & UNSIGNED_FLAG;
        bind[i].error = &recs[i].error;
        bind[i].buffer_type = fields[i].type;

        auto&& [buffer, length] = alloc_buf(fields[i]);
        recs[i].buffer = buffer;
        bind[i].buffer_length = length;
        bind[i].buffer = recs[i].buffer.get();
    }
    res = mysql_stmt_bind_result(stmt, bind);
    CHKRES_STMT("Error when binding result");
    while (true)
    {
        res = mysql_stmt_fetch(stmt);
        if (res == MYSQL_NO_DATA) break;
        CHKRES_STMT("Error when fetching");
        //std::string a(recs[0].buffer.get());
        logger.debug("Fetched length: {} {}", recs[0].length, recs[1].length);
    }
}

void test_main()
{
    logger.info("DBTest loaded!");
    test_sqlite();
    test_mysql();
    test_mysql_capi();
}

BOOL WINAPI DllMain(HMODULE, DWORD ul_reason_for_call, LPVOID)
{
    switch (ul_reason_for_call)
    {
        case DLL_PROCESS_ATTACH:
#if defined(CATCH_EXCEPTION)
            try
#endif
            {
                test_main();
                break;
            }
#if defined(CATCH_EXCEPTION)
            catch (std::exception e)
            {
                logger.error(e.what());
            }
#endif
        case DLL_THREAD_ATTACH:
        case DLL_THREAD_DETACH:
        case DLL_PROCESS_DETACH:
            break;
    }
    return TRUE;
}