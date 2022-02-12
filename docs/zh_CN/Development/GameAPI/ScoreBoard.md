## 📝 计分板 API

在LLSE中，使用「计分项对象」来操作和获取某一个特定的计分项变量，并且提供了很多其他操作计分板的通用接口

MC使用 **计分项** 作为计分板系统的核心，每一个计分项拥有一个名字，并可以用来跟踪特定的玩家、实体甚至字符串目标。计分项中，记录着每一个跟踪目标各自对应的分数。

### 获取一个计分项对象

通过下面的接口，来获取一个计分项对象，并进行相关操作

#### 创建一个新的计分项

`mc.newScoreObjective(name,displayName)`

- 参数：
  -  name : `String`  
     计分项名称  
  -  displayName : `String`  
     计分项显示名称  
- 返回值：新增创建的计分项对象
- 返回值类型：`Objective`
  - 如果返回`Null`，则代表创建失败

此接口的作用类似命令 `/scoreboard objectives add <name> <displayName> dummy`

<br>

#### 获取某个已存在的计分项

`mc.getScoreObjective(name)`

- 参数：
  - name : `String`  
    要获取的计分项名称
- 返回值：对应的计分项对象
- 返回值类型：`Objective`
  - 如果返回`Null`，则代表计分项不存在

<br>

#### 获取所有计分项

`mc.getAllScoreObjectives()`

- 返回值：计分板系统记录的所有计分项对象
- 返回值类型：`Array<Objective,Objective,...>`

此接口的作用类似命令 `/scoreboard objectives list`

<br>

#### 获取某个处于显示状态的计分项

`mc.getDisplayObjective(slot)`

- 参数：
  - slot : `String`   
    待查询的显示槽位名称，可以为`"sidebar"`/`"belowname"`/`"list"`
- 返回值：正在`slot`槽位显示的计分项
- 返回值类型：`Objective`
  - 如果返回`Null`，则代表对应槽位未显示计分项

<br>


### 计分项对象 - 属性

每一个计分项对象都包含一些固定的对象属性。对于某个特定的计分项对象`ob`，有以下这些属性

| 属性           | 含义             | 类型     |
| -------------- | ---------------- | -------- |
| ob.name        | 计分项名称       | `String` |
| ob.displayName | 计分项的显示名称 | `String` |

这些对象属性都是只读的，无法被修改

<br>

### 计分项对象 - 函数

每一个计分项对象都包含一些可以执行的成员函数（成员方法）。对于某个特定的计分项对象`ob`，可以通过以下这些函数对这个计分项进行一些操作

#### 获取跟踪的某个目标的分数

`ob.getScore(target)`

- 参数：
  - target  : `Player` / `String`  
    待查询的跟踪目标，可传入玩家对象或者任意字符串
- 返回值：该目标/玩家在此计分项中的分数
- 返回值类型：`Integer`

<br>

#### 修改某个目标的分数

设置分数 `ob.setScore(target,score)`  
增加分数 `ob.addScore(target,score)`  
减少分数 `ob.reduceScore(target,score)`

- 参数：
  - target : `Player` / `String`  
    计分项跟踪的目标，可传入玩家对象或者任意字符串
  - score : `Integer`  
    要设置/增加/减少的分数
- 返回值：该目标在经过设置/增加/减少操作后的分数
- 返回值类型：`Integer`
  - 如果返回`Null`，则代表操作失败

<br>

#### 停止跟踪某个目标

`ob.deleteScore(target)`

- 参数：
  - target : `Player` / `String`  
    计分项跟踪的目标，可传入玩家对象或者任意字符串
- 返回值：是否停止成功
- 返回值类型：`Boolean`

停止跟踪将直接删除这个目标对应的计分项数值，下次如需要访问需要再次创建

<br>

#### 设置计分项的显示状态

`ob.setDisplay(slot[,sortOrder=0])`

- 参数：
  - slot : `String`   
    显示槽位名称字符串，可以为`"sidebar"`/`"belowname"`/`"list"`
  - sortOrder : `Integer`  
    （可选参数）排序方式，可以为`0`(升序)或`1`(降序)，默认值为`0`
- 返回值：是否设置成功
- 返回值类型：`Boolean`

<br>

### 其他计分板 API

下面这些API提供了更多操作计分板系统的API

#### 获取玩家计分项的分数（方便函数）

`pl.getScore(name)`

- 参数：
  - name : `String`  
    计分项名称  
- 返回值：计分板上的数值
- 返回值类型：`Integer`

使用前，必须保证对应的计分项已经存在

```clike
[Js]
//对于一个玩家对象pl
log("You have money:",pl.getScore("money"));
[Lua]

```

#### 修改玩家计分项的分数（方便函数）

设置分数 `pl.setScore(name,value)`  
增加分数 `pl.addScore(name,value)`  
减少分数 `pl.reduceScore(name,value)`

- 参数：
  - name : `String`  
    计分项名称  

  - value : `Integer`  
    要设置 / 增加 / 减少的数值  
- 返回值：是否设置成功
- 返回值类型：`Boolean`

使用前，必须保证对应的计分项已经存在

```clike
[Js]
//对于一个玩家对象pl
pl.setScore("money",10000);
pl.addScore("money",100);
pl.reduceScore("money",50);
[Lua]

```

#### 玩家停止跟踪计分项（方便函数）

`pl.deleteScore(name)`

- 参数：
  - name : `String`  
    计分项名称  
- 返回值：是否移除成功
- 返回值类型：`Boolean`

使用前，必须保证对应的计分项已经存在

```clike
[Js]
//对于一个玩家对象pl
pl.deleteScore("what");
[Lua]

```

#### 移除一个已存在的计分项

`mc.removeScoreObjective(name)`

- 参数：
  -  name : `String`  
     计分项名称  

- 返回值：是否移除成功
- 返回值类型：`Boolean`

此接口的作用类似命令 `/scoreboard objectives remove <name>`

<br>

#### 使计分项停止显示

`mc.clearDisplayObjective(slot)`

- 参数：
  - slot : `String`   
    显示槽位名称字符串，可以为`"sidebar"`/`"belowname"`/`"list"`

- 返回值：是否清除成功
- 返回值类型：`Boolean`

<br>