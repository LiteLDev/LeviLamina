## 📡 系统调用 API

下面这些API提供了执行一些系统调用的接口

### 调用shell执行指定系统命令

`system.cmd(cmd,callback[,timeLimit])`

- 参数：
  - cmd : `String`  
    执行的系统命令
  - callback : `Function`  
    shell进程结束之后返回数据使用的回调函数
  - timeLimit : `Integer`  
    （可选参数）命令运行的最长时限，单位为毫秒  
    默认为`-1`，即不限制运行时间
- 返回值：是否成功启动命令
- 返回值类型：`Boolean`

注：参数callback的回调函数原型：`function(exitcode,output)`  

- exitcode : `Integer`    
  shell退出码
- output : `String`  
  标准输出和标准错误输出的内容

注意！这里执行的不是MC命令系统的命令  
此函数异步工作，不会等待系统执行完命令后再返回，而是由引擎自动调用给出的回调函数来返回结果

<br>

### 运行指定位置程序

`system.newProcess(process,callback[,timeLimit])`

- 参数：
  - process : `String`  
    运行的程序路径（与命令行参数）
  - callback : `Function`  
    程序进程结束之后返回数据使用的回调函数
  - timeLimit : `Integer`  
    （可选参数）程序进程运行的最长时限，单位为毫秒  
    默认为`-1`，即不限制运行时间
- 返回值：是否成功启动进程
- 返回值类型：`Boolean`

注：参数callback的回调函数原型：`function(exitcode,output)`  

- exitcode : `Integer`    
  程序进程退出码
- output : `String`  
  程序标准输出和标准错误输出的内容

此函数异步工作，不会等待系统执行完命令后再返回，而是由引擎自动调用给出的回调函数来返回结果

<br>