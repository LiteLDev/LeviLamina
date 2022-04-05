#include <Windows.h>
#include <iostream>
#include <filesystem>
#include <DB/Session.h>
using namespace std;
using namespace DB;

int main()
{
    std::filesystem::create_directories("../dbs");
    Session::create(DBType::SQLite, {
        {"path", "../dbs/a.db"}
    });
    return 0;
}