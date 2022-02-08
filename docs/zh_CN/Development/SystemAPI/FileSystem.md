## 📂 目录与文件 API

下面这些API提供了操作文件、目录等与文件系统互动的接口

> 注：所有传入函数的相对路径都以BDS根目录为基准。  

### 创建文件夹  

`File.createDir(dir)`  
`File.mkdir(dir)`

- 参数：
  - dir : `String`  
    目标文件夹的路径  
    可以直接创建多层，不需要逐层创建
- 返回值：是否成功创建
- 返回值类型：`Boolean`

<br>

### 删除文件 / 文件夹  

`File.delete(path)`

- 参数：
  - path : `String`  
    目标文件 / 文件夹的路径
- 返回值：是否成功删除
- 返回值类型：`Boolean`

<br>

### 判断文件 / 文件夹是否存在  

`File.exists(path)`

- 参数：
  - path : `String`  
    目标文件 / 文件夹的路径
- 返回值：目标是否存在
- 返回值类型：`Boolean`

<br>

### 复制文件 / 文件夹到指定位置  

`File.copy(from,to)`

- 参数：
  - from : `String`  
    源文件 / 文件夹的路径

  - to : `String`  
    目标文件 / 文件夹的位置
- 返回值：是否复制成功
- 返回值类型：`Boolean`

<br>

### 移动文件 / 文件夹到指定位置  

`File.move(from,to)`

- 参数：
  - from : `String`  
    源文件 / 文件夹的路径

  - to : `String`  
    目标文件 / 文件夹的位置
- 返回值：是否复制成功
- 返回值类型：`Boolean`

<br>

### 重命名指定文件 / 文件夹  

`File.rename(from,to)`

- 参数：
  - from : `String`  
    文件 / 文件夹的旧名字

  - to : `String`  
    新名字
- 返回值：是否复制成功
- 返回值类型：`Boolean`

<br>

### 获取指定文件的大小

`File.getFileSize(path)`

- 参数：
  - path : `String`  
    所操作的文件路径

- 返回值：文件的大小（字节）
- 返回值类型：`Integer`

如果传入的路径位置是一个文件夹，则返回`-1`

<br>

### 判断指定路径是否是文件夹

`File.checkIsDir(path)`

- 参数：
  - path : `String`  
    所判断的路径
- 返回值：目标路径是否是文件夹
- 返回值类型：`Boolean`

如果目标路径不存在，同样将返回`false`

<br>

### 列出指定文件夹下的所有文件 / 文件夹

`File.getFilesList(dir)`

- 参数：
  - dir: `String`  
    文件夹路径

- 返回值：文件名、文件夹名数组
- 返回值类型：`Array<String,String,...>`

<br>