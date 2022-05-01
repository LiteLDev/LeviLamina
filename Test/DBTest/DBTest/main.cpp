#include <Windows.h>
#include <iostream>
#include <filesystem>
#define LLDB_DEBUG_MODE
#include <DB/Session.h>

using namespace std;
using namespace DB;
namespace fs = std::filesystem;

#undef ERROR
#define INFO cout << "[INFO] "
#define ERROR cout << "[ERROR] "
#define CATCH_EXCEPTION

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
#if defined(CATCH_EXCEPTION)
    try
#endif
    {
        sess->setDebugOutput(true);
        sess->open({{"path", "plugins/DBTest/dbs/a.db"}});
        INFO << sess.get() << endl;
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
            auto row = stmt->fetch();
            if (row.empty())
            {
                INFO << "Empty row!" << endl;
            }
            else
            {
                row.forEach([&](const std::string& h, const Any& v) {
                    INFO << h << ": " << v.get<std::string>() << endl;
                    return true;
                });
            }
        } while (stmt->next());
        stmt->clear();
        stmt->bind("qwq", "A");
        do {
            auto row = stmt->fetch();
            if (row.empty())
            {
                INFO << "Empty row!" << endl;
            }
            else
            {
                row.forEach([&](const std::string& h, const Any v) {
                    INFO << h << ": " << v.get<std::string>() << endl;
                    return true;
                });
            }
        } while (stmt->next());
        sess->close();
    }
#if defined(CATCH_EXCEPTION)
    catch (std::exception e)
    {
        ERROR << e.what() << endl;
    }
#endif
}

void test_main()
{
    INFO << "DBTest loaded!" << endl;
    test_sqlite();
}

BOOL WINAPI DllMain(HMODULE, DWORD ul_reason_for_call, LPVOID)
{
    switch (ul_reason_for_call)
    {
        case DLL_PROCESS_ATTACH:
            test_main();
            break;
        case DLL_THREAD_ATTACH:
        case DLL_THREAD_DETACH:
        case DLL_PROCESS_DETACH:
            break;
    }
    return TRUE;
}