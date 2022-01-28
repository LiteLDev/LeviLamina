## 📜 获取系统信息 API

下面这些API提供了获取必要的系统信息的接口

### 获取当前时间字符串  

`system.getTimeStr()`

- 返回值：当前的时间字符串，使用当地时区和24小时制。  
  形如`2021-04-03 19:15:01`
- 返回值类型：`String`

<br>

### 获取当前的时间对象

`system.getTimeObj()`

- 返回值：当前的时间对象（`Object`）

- 返回值类型： `Object<Integer,Integer,Integer,Integer,Integer,Integer,Integer>`

  - 对于返回的某个时间对象 tm，有如下这些成员：

  | 成员  | 含义                 | 类型      |
  | ----- | -------------------- | --------- |
  | tm.Y  | 年份数值（4位）      | `Integer` |
  | tm.M  | 月份数值             | `Integer` |
  | tm.D  | 天数数值             | `Integer` |
  | tm.h  | 小时数值（24小时制） | `Integer` |
  | tm.m  | 分钟数值             | `Integer` |
  | tm.s  | 秒数值               | `Integer` |
  | tm.ms | 毫秒数值             | `Integer` |

<br>

### 随机生成一个 GUID  字符串

`system.randomGuid()` 

- 返回值：一个随机生成的唯一标识符GUID
- 返回值类型： `String`

<br>