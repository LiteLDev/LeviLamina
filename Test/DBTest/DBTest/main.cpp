#include <Windows.h>
#include <iostream>
#include <filesystem>
#define LLDB_DEBUG_MODE
#include <DB/Session.h>
#include <LLAPI.h>
#include <LoggerAPI.h>

using namespace std;
using namespace DB;
namespace fs = std::filesystem;

#undef ERROR
#define CATCH_EXCEPTION

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

void run_tests(SharedPointer<Session> sess)
{
#if defined(CATCH_EXCEPTION)
    try
#endif
    {
        sess->setDebugOutput(true);
        sess->open({{"path", "plugins/DBTest/dbs/a.db"}});
        // sess->execute("CREATE TABLE IF NOT EXISTS test (a CHAR(100) NOT NULL, b INTEGER NOT NULL);");
        sess << "CREATE TABLE IF NOT EXISTS test (a CHAR(100) NOT NULL, b INTEGER NOT NULL);";
        sess->execute("INSERT INTO test VALUES('awa', 114514)");
        sess << "INSERT INTO test VALUES(?, ?)", use("qwq"), use(1919810);
        sess << "INSERT INTO test VALUES(?, ?)", use(Row{"liteloader", 233333});
        sess << "INSERT INTO test VALUES(?, ?)", use("liteloader"), use(100);
        auto stmt = sess->prepare("INSERT INTO test VALUES(?, ?)");
        stmt->bind("liteloader")
            .bind(2147483647)
            .reexec()
            .reexec();
        sess->query("SELECT * FROM test;");
        stmt = sess->prepare("SELECT * FROM test WHERE a = $A");
        // The first parameter is value, the second is key!
        stmt->bind("liteloader", "A");
        do {
            log_row(stmt->fetch());
        } while (stmt->next());
        stmt->clear();
        stmt->bind("qwq", "A");
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
    run_tests(sess);
}

void test_main()
{
    logger.info("DBTest loaded!");
    test_sqlite();
}

BOOL WINAPI DllMain(HMODULE, DWORD ul_reason_for_call, LPVOID)
{
    switch (ul_reason_for_call)
    {
        case DLL_PROCESS_ATTACH:
            LL::registerPlugin("DBTest", "LLDB module tests", LL::Version(0, 0, 1));
            test_main();
            break;
        case DLL_THREAD_ATTACH:
        case DLL_THREAD_DETACH:
        case DLL_PROCESS_DETACH:
            break;
    }
    return TRUE;
}