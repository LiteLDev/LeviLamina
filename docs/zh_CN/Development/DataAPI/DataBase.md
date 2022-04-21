## 📦 数据库 API

数据库，一般用于插件可持久化地储存某些插件所生成和处理的数据。  
不同于配置文件，数据库一般没有可读性方面的要求，而对性能和稳定性有相当的考虑。  
LLSE提供统一数据库接口来完成这个任务。    
具体实现上，引擎提供了两种不同的数据库格式：键 - 值对格式的NoSQL数据库，和表格形式的SQL数据库。你可以按需使用。

### 📄 目录

🔑 [KVDB 键值对数据库](#-键---值对-nosql数据库)  
📋 [SQL数据库](#-sql数据库)
- 🔍 [预准备语句](#-sql预准备语句)

附： 各SQL的官方文档  
[SQLite](https://www.sqlite.org/docs.html) [MySQL](https://dev.mysql.com/doc/)

<br>

## 🔑 键 - 值对 NoSQL数据库

键 - 值对数据库适用于储存键 - 值形式的数据, 形如`name:apple`, `value:5`等等。  
底层使用 [`LevelDB`](https://github.com/google/leveldb) 实现

### 创建 / 打开一个键值对数据库

在使用数据库之前，你先需要给出一个数据库路径，接口将打开/创建指定的数据库并返回一个数据库对象。  
一个LevelDB数据库是由多个文件组成的，所以你需要传入一个文件夹的路径，数据库文件会被储存于这个文件夹当中。  
如果这个目录已含有一个数据库，将打开它，否则会新建一个。

[Js] `new KVDatabase(dir)`  
[Lua] `KVDatabase(dir)`

- 参数：
  - dir : `String`  
    数据库的储存目录路径，以BDS根目录为基准
- 返回值：打开 / 创建的数据库对象
- 返回值类型：`KVDatabase`
  - 如果返回值为`Null`，则代表创建 / 打开失败

当给出的目录不存在时，将尝试自动逐层创建对应的目录路径

成功打开数据库后，你可以使用下面的接口来进行相关的操作。  
对于一个数据库对象`db`，有以下这些函数：

<br>

### 写入数据项

`db.set(name,data)`

- 参数：
  - name : `String`  
    数据项名字
  - data : `指定类型`  
    要写入的数据。允许使用的数据类型有：   
    `Integer` `Float` `String` `Boolean` `Array` `Object `  
    其中，`Array` 和 `Object` 内部仅能嵌套上面出现的这些元素
- 返回值：是否写入成功
- 返回值类型：`Boolean`

<br>

### 读取数据项

`db.get(name)`

- 参数：
  - name : `String`  
    数据项名字
- 返回值：数据库中储存的这个项的数据
- 返回值类型：`任意类型`，以具体储存的数据类型为准
  - 如返回值为 `Null` 则表示数据不存在

<br>

### 删除数据项

`db.delete(name)`

- 参数：
  - name : `String`  
    数据项名字
- 返回值：是否成功删除
- 返回值类型：`Boolean`

<br>

### 获取所有数据项名字

`db.listKey()`

- 返回值：所有的数据项名字数组
- 返回值类型：`Array`

<br>

### 关闭数据库

`db.close()`

- 返回值：是否成功关闭

数据库关闭之后，请勿继续使用！

<br>

------

<br>

## 📋 SQL数据库

SQL数据库适用于使用SQL语句处理大量的关系型数据。接口底层使用跨数据库操作框架实现，可对接绝大多数市面常用SQL数据库。

<br>

### 打开一个SQL数据库会话

由于需要做到多数据库兼容, 连接数据库需要传入一个包含连接参数的对象或字符串。

[Js] `new DBSession(type, params)`  
[Lua] `DBSession(type, params)`

- 参数：
  - type : `String`  
    数据库的类型，目前仅支持`"sqlite3"`
  - params: `Object`  
    [连接参数](#连接参数)
- 返回值：打开的数据库会话对象
- 返回值类型：`DBSession`
  - 如果返回值为`Null`，则代表打开失败

[Js] `new DBSession(str)`  
[Lua] `DBSession(str)`

- 参数：
  - str : `String`  
    形如`file:///mydb.db?k=v`, `mysql://root:password@localhost:3306/db`的连接字符串
- 返回值：打开的数据库会话对象
- 返回值类型：`DBSession`
  - 如果返回值为`Null`，则代表打开失败

<br>

#### 连接参数

键|用途|可用数据库|示例|默认值
---|---|---|---|---
path|指定数据库所在路径|`SQLite`|`plugins/test.db`|-
create|数据库不存在是否自动创建|`SQLite`|`true`/`false`|`true`
readonly|以只读模式打开|`SQLite`|`true`/`false`|`false`
readwrite|以读写模式打开|`SQLite`|`true`/`false`|`true`

<br>

### 执行SQL并获取结果集

`session.query(sql)`  

- 参数：
  - sql : `String`  
    要查询的SQL语句
- 返回值：查询的结果(结果集)
- 返回值类型：`Array<Array>`  
  返回数组的第1行(`result[0]`)为结果集的表头(列名)，剩余行为结果数据

```
若查询结果为:
|  a  |  b  |
|=====|=====|
| ll  | 233 |
| h   | 114 |
|=====|=====|
则用query方法返回值表示为
[
  ["a",  "b"],
  ["ll", 233],
  ["h",  114]
]
```

<br>

### 执行SQL但不获取结果

`session.exec(sql)`  
`session.execute(sql)`

- 参数：
  - sql : `String`  
    要执行的SQL语句
- 返回值：执行成功与否
- 返回值类型：`Boolean`

<br>

### 获取当前会话是否为打开状态

`session.isOpen()`

- 返回值：是否为打开状态
- 返回值类型：`Boolean`

<br>

### 关闭数据库会话

`session.close()`

- 返回值：关闭成功与否
- 返回值类型：`Boolean`

<br>

### SQL预准备语句

<br>

> 预准备语句(Prepared Statement)是SQL的一个重要部分。它的实现原理是：先将含有未知参数的SQL语句(发往服务端)处理、编译，再绑定参数，最终执行并返回结果。各个SQL的预准备语句实现可能不同，其预准备语句的表示方法也可能存在差异，所以请务必仔细阅读文档(直接去阅读对应SQL的官方文档则更好)。  
预准备语句的主要作用是防止SQL注入攻击——一种很常见的、危险的攻击。如果在未经检验的情况下直接使用用户输入的数据(就像BDS一样 xD)，就可能会造成免密码登录甚至数据丢失(注入执行`DROP TABLE`或`DROP DATABASE`)等严重后果。所以在处理用户输入的数据时，更推荐使用预准备语句。其次，它可以在(服务器)只编译一次语句的情况下，实现多次输入。

<br>

#### 准备一个预准备语句

`session.prepare(sql)`  

- 参数：
  - sql : `String`  
    要准备的SQL语句
- 返回值：预准备语句，失败则为空
- 返回值类型：`DBStmt`

##### 各个SQL的预准备语句

SQLite:
```sql
-- 单个?表示参数
SELECT * FROM table WHERE id = ?;
-- ?X和?Y，其中X、Y均为参数名，后面可以更方便地绑定
INSERT INTO table VALUES (?X, ?Y);
-- $X、?Y、:Z、@V都是带参数名的参数，您也可以使用$/:/@ + name的形式定义参数
INSERT INTO table VALUES ($X, ?Y, :Z, @V);
/* 注: https://www.sqlite.org/c3ref/bind_blob.html */
```
<br>

#### 预准备语句对象 - 属性

| 属性  | 含义       | 类型    | 另见      |
| ---- | ---------- | -------- | -------  |
| `stmt.affectedRows` | 获取该预准备语句执行后影响的行数(仅对`INSERT` `UPDATE` `DELETE` `REPLACE` 等语句生效) | `Integer` | [SQLite](https://www.sqlite.org/c3ref/changes.html) [MySQL](https://dev.mysql.com/doc/c-api/8.0/en/mysql-affected-rows.html) |
| `stmt.insertId` | 获取该`INSERT`/`UPDATE`/`REPLACE`语句执行后最后一个更改行的行号(关于行号的解释详见官方文档) | `Integer` | [SQLite](https://www.sqlite.org/c3ref/last_insert_rowid.html) [MySQL](https://dev.mysql.com/doc/c-api/8.0/en/mysql-stmt-insert-id.html)

这些对象属性都是只读的，无法被修改，并且只能在语句执行之后获取到

#### 绑定参数到一个SQL语句

`stmt.bind(val)`

- 参数：
  - val : `Any`  
    要绑定的值  
- 注：本重载将会将值绑定到第一个未绑定的参数上

`stmt.bind(obj)`

- 参数：
  - val : `Object`  
    要绑定的对象，等同于遍历此对象并执行`bind(val, key)`

`stmt.bind(arr)`

- 参数：
  - arr : `Array`  
    要绑定的数组，等同于遍历此数组并执行`bind(val)`

`stmt.bind(val, index)`

- 参数：
  - val : `Any`  
    要绑定的值
  - index: `Integer`  
    要绑定到的参数索引(从`0`开始)

`stmt.bind(val, name)`

- 参数：
  - val : `Any`  
    要绑定的值
  - *name: `String`  
    要绑定到的参数的参数名

<br>
  
- 返回值：绑定成功与否
- 返回值类型：`Boolean`

##### 一个样例搞懂几个重载函数
```js
let stmt = session.prepare("INSERT INTO table VALUSE ($a, $b, $c, $d, $e, $f, $g, $h)");
let values = {
  c: "have you",
  d: "finished",
  e: "your",
  f: "homework?"
};
stmt.bind(values); // c,d,e,f将会被绑定
stmt.bind("LLSE"); // 将会绑定到a
stmt.bind(["****", "mojang"]); // 将会绑定到b和g
stmt.bind(114514, 7);  // 将会绑定到h
```

<br>

#### 步进到下一行结果

`stmt.step()`  
`stmt.next()`

- 返回值：执行成功与否
- 返回值类型：`Boolean`
- **注意：所有参数绑定完成后会自动执行语句，执行完后此时的step就在第一行上，所以应使用do...while语句遍历，而不是while语句，否则将导致第一行被跳过**

<br>

#### 获取当前结果行

`stmt.fetch()`

- 返回值：当前结果行，形如`{col1: "value", col2: 2333}`
- 返回值类型：`Object`

<br>

#### 获取所有结果行

`stmt.fetchAll()`

- 返回值：查询的结果(结果集)，详见[执行SQL并获取结果集](#执行sql并获取结果集)
- 返回值类型：`Array<Array>`

`stmt.fetchAll(callback)`

- 参数：
  - callback : `Function<bool(Object)>`  
    回调函数，用于遍历结果行；在回调函数中返回`false`可终止遍历
- 返回值：无

<br>

#### 重置预准备语句

`stmt.reset()`

- 返回值：重置成功与否
- 返回值类型：`Boolean`
- **注意：本函数不会清除已绑定的参数**

<br>

#### 清除所有已绑定的参数

`stmt.clear()`

- 返回值：清除成功与否
- 返回值类型：`Boolean`

<br>

### 样例

```js
let dat = {};
let modified = {};
let session = null;
function initdb() {
  session = new DBSession("sqlite", {path: "./plugins/MyPlugin/dat.db"});
  session.exec(`
    CREATE TABLE IF NOT EXISTS "test" (
      player  CHAR(100) NOT NULL,
      coins   INTEGER   NOT NULL
    );`); // 这里创建数据表后SQLite会自动添加一个隐藏的ROWID行，insertId就是这个隐藏的ROWID行的值
    // 另：如果数据库自带INTEGER类型主键，则ROWID即为该主键
}
// 使用do...while语句
function loadData() {
  let stmt = session.prepare("SELECT * FROM test");
  do { // 准备并执行后，默认在第一行
    let row = stmt.fetch();
    dat[row.player] = row.coins;
  } while (stmt.step()); // 第一次执行时步进到第二行，并成功获取到结果，返回true；最后一行时再步进则返回false
}
// 使用回调函数
function loadData2() {
  let stmt = session.prepare("SELECT * FROM test");
  stmt.fetchAll((player, coins) => {
    dat[player] = coins;
  });
}
function writeData() {
  let keys = Object.keys(modified);
  let stmt = session.prepare("UPDATE FROM test WHERE player = ? SET coins = ?");
  for (let i = 0; i < keys.length; i++) {
    let v = modified[keys[i]];
    stmt.bind([keys[i], v]); // 绑定数组参数
    // 绑定完成后自动执行语句
    stmt.clear(); // 清除已经绑定的值
  }
}
mc.regPlayerCmd("getcoin", "Get a coin!", (pl, args) {
  dat[pl.realName]++;
  modified[pl.realName]++;
});
```
