if (file.exists("./plugins/test.db")) file.delete("./plugins/test.db");
let session = new DBSession("sqlite3", {path:"./plugins/test.db"});
session.execute("CREATE TABLE test (a TEXT, b INTEGER)");
session.execute("INSERT INTO test VALUES ('hello', 1); INSERT INTO test VALUES ('world', 2);");
session.query("SELECT * FROM test");
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