if (file.exists("./plugins/DBTest/LLSE")) file.delete("./plugins/DBTest/LLSE");
file.mkdir("./plugins/DBTest/LLSE/");

function test_db(session)
{
    session.execute("DROP TABLE IF EXISTS test_llse")
           .execute("CREATE TABLE test_llse (a TEXT, b INTEGER)")
           .execute("INSERT INTO test_llse VALUES ('hello', 1), ('world', 2);");
    session.query("SELECT * FROM test_llse");
    session.query("SELECT * FROM test_llse WHERE a = 'abcdefg____________'"); // No result
    session.prepare("INSERT INTO test_llse VALUES ('liteloader', 123)"); // Without execute
    try { // Test C++ error conversion
        session.query("JUST FOR TESTING");
    } catch (e) {
        log(e.message);
    }
    // Test C++ error without catching
    //session.query("JUST FOR TESTING");
    let stmt = session.prepare("INSERT INTO test_llse VALUES (?, ?), (?, ?)");
    stmt.bind(["foo", 3, "bar", 4])
        .execute()
        .reset()
        .execute()
        .reexec()
        .clear()
        .bind(["听我说谢谢你", 233333, "因为有你，温暖了四季", 114514])
        .execute();
    log("Affected Rows: " + stmt.affectedRows);
    stmt = session.prepare("SELECT * FROM test_llse WHERE a = ? OR a = ?");
    stmt.bind("hello")
        .bind("bar")
        .clear()
        .bind("听我说谢谢你")
        .bind("foo")
        .execute();
    do {
        log(stmt.fetch());
    } while (stmt.step());
    session.close();
}

// SQLite
test_db(new DBSession("sqlite3", {path:"./plugins/DBTest/LLSE/test.db"}));

// MySQL
(new DBSession("mysql://root:root@localhost:3306")).exec("CREATE DATABASE IF NOT EXISTS lldbtest").close();
test_db(new DBSession("mysql://root:root@localhost:3306/lldbtest"));