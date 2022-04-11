#include <Windows.h>
#include <iostream>
#include <filesystem>
#include <DB/Session.h>

using namespace std;
using namespace DB;
namespace fs = std::filesystem;

#undef ERROR
#define INFO cout << "[INFO] "
#define ERROR cout << "[ERROR] "

void test_sqlite()
{
    if (fs::exists("plugins/DBTest/dbs"))
    {
        fs::remove_all("plugins/DBTest/dbs");
    }
    fs::create_directories("plugins/DBTest/dbs");
    auto& sess = Session::create(DBType::SQLite);
    try
    {
        sess.setDebugOutput(true);
        sess.open(ConnParams("plugins/DBTest/dbs/a.db"));
        sess.execute("CREATE TABLE IF NOT EXISTS test (a CHAR(100) NOT NULL, b INTEGER NOT NULL);");
        //sess << "CREATE TABLE IF NOT EXISTS test (a CHAR(100) NOT NULL, b INTEGER NOT NULL);";
        sess.execute("INSERT INTO test VALUES('awa', 114514)");
        sess << "INSERT INTO test VALUES(?, ?)", use("qwq"), use(1919810);
        //sess << "INSERT INTO test VALUES(?, ?)", use({{"liteloader", 233333}});
        sess.query("SELECT * FROM test;");
        sess.close();
        sess.destroy();
    }
    catch (std::exception e)
    {
        ERROR << e.what() << endl;
        sess.close();
        sess.destroy();
    }
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