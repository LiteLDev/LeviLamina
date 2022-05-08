if (file.exists("./plugins/DBTest/LLSE")) file.delete("./plugins/DBTest/LLSE");
file.mkdir("./plugins/DBTest/LLSE");

//new DBSession("sqlite3:///plugins/DBTest/LLSE/testurl.db");
let session = new DBSession("sqlite3", {path:"./plugins/DBTest/LLSE/test.db"});
session.execute("CREATE TABLE test (a TEXT, b INTEGER)");
session.execute("INSERT INTO test VALUES ('hello', 1); INSERT INTO test VALUES ('world', 2);");
session.query("SELECT * FROM test");
session.query("SELECT * FROM test WHERE a = 'abcdefg____________'"); // No result
let stmt = session.prepare("INSERT INTO test VALUES (?, ?), (?, ?)");
stmt.bind(["foo", 3, "bar", 4]);
stmt.step();
log(stmt.affectedRows);
stmt = session.prepare("SELECT * FROM test WHERE a = ? OR a = ?");
stmt.bind("hello");
stmt.bind("bar");
while (stmt.step()) {
    log(stmt.fetch());
}
session.close();