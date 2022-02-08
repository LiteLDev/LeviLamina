## 🔊 其他事件

#### `"onScoreChanged"` - 玩家计分板数值改变

- 监听函数原型
  `function(player,num,name,disName)`
- 参数：
  - player : `Player`  
    计分板数值改变的玩家
  - num: `Integer`  
    改变后的计分板数值
  - name : `String`  
    计分板计分项名称
  - disName : `String`  
    计分板计分项的显示名称
- 拦截事件：不可以拦截

<br>

#### `"onTick"` - 每个游戏刻触发

- 监听函数原型
  `function()`
- 参数：
  - 无
- 拦截事件：函数返回`false`

<br>

#### `"onServerStarted"` - 服务器启动完毕

- 监听函数原型
  `function()`
- 参数：
  - 无
- 拦截事件：不可以拦截

<br>

#### `"onConsoleCmd"` - 服务端执行后台命令

- 监听函数原型
  `function(cmd)`
- 参数：
  - cmd : `String`  
    执行的后台命令

- 拦截事件：函数返回`false`

<br>

#### `"onConsoleOutput"` - 控制台产生命令输出

- 监听函数原型
  `function(cmd)`
- 参数：
  - cmd : `String`  
    输出的命令结果信息

- 拦截事件：函数返回`false`