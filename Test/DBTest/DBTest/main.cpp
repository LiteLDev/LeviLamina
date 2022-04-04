#include <third-party/sqlite3/sqlite3.h>
#include <iostream>
#include <filesystem>
using namespace std;

int main()
{
    std::filesystem::create_directories("../dbs");
    sqlite3* db = nullptr;
    cout << sqlite3_open("../dbs/a.db", &db) << endl;
    cout << sqlite3_exec(db, R"(CREATE TABLE "test" (
	"a"	INTEGER NOT NULL,
	"b"	INTEGER NOT NULL
);)",
                         0, 0, 0);
    sqlite3_stmt* stmt = nullptr;
    cout << sqlite3_prepare_v2(db, R"(insert into `test` values(?, ?))", -1, &stmt, 0);
    cout << endl
         << sqlite3_errmsg(db) << endl;
    cout << "a " << sqlite3_bind_parameter_count(stmt) << endl;
    cout << sqlite3_bind_int(stmt, 0, 233) << endl;
    cout << "b " << sqlite3_bind_parameter_count(stmt) << endl;
    cout << sqlite3_bind_int(stmt, 0, 114514) << endl;
    cout << "b " << sqlite3_bind_parameter_count(stmt) << endl;
    cout << sqlite3_close(db) << endl;
    return 0;
}