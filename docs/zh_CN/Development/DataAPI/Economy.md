## 💰 经济系统 API

在很多服务器中，经济系统是非常关键的一环。  
为了解决传统使用计分板经济系统的种种问题，LXL提供了对接LLMoney经济系统的接口，可以与其他各系列插件数据互通。 

LLMoney除了拥有传统经济系统的能力之外，还有查询金额变动历史、操作离线玩家经济等额外能力。  
LXL在安装时附带了LLMoney插件，因此无需额外安装，就可以直接使用此接口。 

注意：为了可以操作离线玩家的钱包，经济系统接口统一使用Xuid来作为玩家的统一标识符，而非其他地方通用的`Player`玩家指针。对于某个玩家指针`pl`，你可以使用`pl.xuid`来获取他的xuid字符串，并将其作为参数传入。

### 设置玩家的存款金额

`money.set(xuid,money)`

- 参数：
  - xuid : `String`  
    要操作的玩家的Xuid标识符
  - money : `Integer`  
    要设置的金额  
- 返回值：是否设置成功
- 返回值类型：`Boolean`

<br>

### 获取玩家的存款金额

`money.get(xuid)`

- 参数：
  - xuid : `String`  
    要读取的玩家的Xuid标识符
- 返回值：玩家的资金数值
- 返回值类型：`Integer`

<br>

### 增加玩家的存款

`money.add(xuid,money)`

- 参数：
  - xuid : `String`  
    要操作的玩家的Xuid标识符
  - money : `Integer`  
    要增加的金额  
- 返回值：是否设置成功
- 返回值类型：`Boolean`

<br>

### 减少玩家的存款

`money.reduce(xuid,money)`

- 参数：
  - xuid : `String`  
    要操作的玩家的Xuid标识符
  - money : `Integer`  
    要减小的金额  
- 返回值：是否设置成功
- 返回值类型：`Boolean`

<br>

### 进行一笔转账

`money.trans(xuid1,xuid2,money[,note])`

- 参数：
  - xuid1 : `String`  
    付款的玩家的Xuid标识符
  - money : `Integer`  
    要支付的金额  
  - xuid2 : `String`  
    收款的玩家的Xuid标识符
  - note : `String`  
    （可选参数）给这笔转账附加一些文字说明
- 返回值：是否转账成功
- 返回值类型：`Boolean`

<br>

### 查询历史账单

`money.getHistory(xuid,time)`

- 参数：
  - xuid : `String`  
    要操作的玩家的Xuid标识符
  - time : `Integer`  
    查询从现在开始往前time秒的记录
- 返回值：查询结果对象的数组
- 返回值类型：`Array<Object>`

其中，结果为一系列记录对象组成的数组。对于每个记录对象`record`，有如下的键和对应的值：

| 键             | 值的意义                   | 数据类型  |
| -------------- | -------------------------- | --------- |
| `record.from`  | 此项交易的发起者玩家Xuid   | `String`  |
| `record.to`    | 此项交易的接收者玩家Xuid   | `String`  |
| `record.money` | 此项交易的金额             | `Integer` |
| `record.time`  | 此项交易发生时的时间字符串 | `String`  |
| `record.note`  | 此交易的附加说明信息       | `String`  |

时间字符串的格式为：YYYY-mm-dd hh:mm:ss

<br>

### 删除账单历史记录

`money.clearHistory(time)`

- 参数：
  - time : `Integer`  
    删除从现在开始往前time秒的记录
- 返回值：是否删除成功
- 返回值类型：`Boolean`

<br>