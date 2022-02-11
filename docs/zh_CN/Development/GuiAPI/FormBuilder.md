## 📃 普通表单构建器 API

> 这些API可以协助开发者方便地构造一个普通表单

LXL提供了**普通表单对象**来方便地创建一个自定义表单并发送至指定玩家。

### 创建表单对象

在使用这些API之前，你需要先用这个函数创建一个空白的普通表单对象

`mc.newSimpleForm()`

- 返回值：新创建的空白表单对象
- 返回值类型：`SimpleForm`

<br>

### 添加表单元素

创建完之后，你就可以用下面这些成员函数（成员方法）向对象中增加新的表单元素。  
对于某个特定的表单对象`fm`，有以下这些函数可以使用：

#### 设置表单的标题

`fm.setTitle(title)`

- 参数：
  - title : `String`  
    表单的标题
- 返回值：处理完毕的表单对象（便于连锁进行其他操作）
- 返回值类型：`SimpleForm`

<br>

#### 设置表单的内容

`fm.setContent(content)`

- 参数：
  - content: `String`  
    表单的文本内容
- 返回值：处理完毕的表单对象（便于连锁进行其他操作）
- 返回值类型：`SimpleForm`

<br>

#### 向表单内增加一行按钮

`fm.addButton(text[,image])`

- 参数：
  - text : `String`  
    按钮文本的字符串
  - image: `String`  
    （可选参数）按钮图片所在路径
- 返回值：处理完毕的表单对象（便于连锁进行其他操作）
- 返回值类型：`SimpleForm`

<br>

图片路径参数 `image` 使用材质包路径或者URL来标识按钮对应的图标。  
对于表单上的每个按钮，如下设置对应的图标

1. 如果使用材质包路径，图片路径应该形如 `textures/items/apple`
2. 如果使用URL路径，那么在这里放入完整的URL即可，形如 `https://www.baidu.com/img/flexible/logo/pc/result.png`
3. 如果这个按钮你不需要显示图片，那不传入此参数即可

<br>

### 发送表单

最后，在一切就绪之后，你可以将配置好的表单对象发送给玩家，并监听玩家的互动消息  
表单对象可以被反复发送，每次发送都会返回一个不同的表单ID，并在有玩家互动时调用各自设置的回调函数，不会打架。  

对于某个玩家对象`pl`，使用函数：

`pl.sendForm(fm,callback)`

- 参数：
  - fm : `SimpleForm`  
    配置好的表单对象  
  - callback : `Function`  
    玩家与表单元素互动之后被调用的回调函数。  
- 返回值：发送的表单ID  
- 返回值类型：`Integer`  
  - 如果返回值为`Null`，则代表发送失败

参数`callback`的回调函数原型：`function(player,id)`  

- player : `Player`  
  与表单互动的玩家对象
- id : `Integer`    
  玩家点击的表单按钮的序号，从0开始编号  
  如果id为`Null`，则代表玩家取消了表单

<br>

## 📰 自定义表单构建器 API

> 这些API可以协助开发者方便地构造一个自定义表单，不再需要为编写Json麻烦而头疼

LXL提供了**自定义表单对象**来方便地创建一个自定义表单并发送至指定玩家。

### 创建表单对象

在使用这些API之前，你需要先用这个函数创建一个空白的自定义表单对象

`mc.newCustomForm()`

- 返回值：新创建的空白表单对象
- 返回值类型：`CustomForm`

<br>

### 添加表单元素

创建完之后，你就可以用下面这些成员函数（成员方法）向对象中增加新的表单元素。  
对于某个特定的表单对象`fm`，有以下这些函数可以使用：

#### 设置表单的标题

`fm.setTitle(title)`

- 参数：
  - title : `String`  
    表单的标题
- 返回值：处理完毕的表单对象（便于连锁进行其他操作）
- 返回值类型：`CustomForm`

<br>

#### 向表单内增加一行文本  

`fm.addLabel(text)`

- 参数：
  - text : `String`  
    一行文本
- 返回值：处理完毕的表单对象（便于连锁进行其他操作）
- 返回值类型：`CustomForm`

<br>

#### 向表单内增加一行输入框  

`fm.addInput(title[,placeholder,default])`

- 参数：

  - title : `String`  
    输入框描述文本
  - placeholder : `String`  
    （可选参数）输入框内的提示字符
  - default : `String`  
    （可选参数）输入框中默认存在的内容
- 返回值：处理完毕的表单对象（便于连锁进行其他操作）
- 返回值类型：`CustomForm`

<br>

#### 向表单内增加一行开关选项  

`fm.addSwitch(title[,default])`

- 参数：
  - title : `String`  
    开关选项描述文本
  - default : `Boolean`  
    （可选参数）开关的默认状态 开 / 关
- 返回值：处理完毕的表单对象（便于连锁进行其他操作）
- 返回值类型：`CustomForm`

<br>

#### 向表单内增加一行下拉菜单  

`fm.addDropdown(title,items[,default])`

- 参数：

  - title : `String`  
    下拉菜单描述文本

  - items : `Array<String,String,...>`  
    下拉菜单中的选项文本列表

  - default : `Integer`  
    （可选参数）下拉菜单默认选中的列表项序号。  
    序号从0开始编号。默认为0，即默认选中列表的第一项
- 返回值：处理完毕的表单对象（便于连锁进行其他操作）
- 返回值类型：`CustomForm`

<br>

#### 向表单内增加一行游标滑块  

`fm.addSlider(title,min,max[,step,default])`

- 参数：
  - title : `String`  
    游标滑块描述文本
  - min : `Integer`  
    游标滑块最小值
  - max : `Integer`  
    游标滑块最大值
  - step : `Integer`  
    （可选参数）游标滑块调整的最小分度值，默认为1
  - default : `Integer`  
    （可选参数）游标滑块默认初始格数，数值必须在最小和最大格数之间。  
    默认为0，即滑块位于滑块行的开头
- 返回值：处理完毕的表单对象（便于连锁进行其他操作）
- 返回值类型：`CustomForm`

<br>

#### 向表单内增加一行步进滑块  

`fm.addStepSlider(title,items[,default])`

- 参数：
  - title : `String`  
    步进滑块描述文本

  - items : `Array<String,String,...>`  
    步进滑块的选项文本列表

  - default : `Integer`  
    （可选参数）步进滑块默认初始选项。序号从0开始编号  
    默认为0，即滑块位于滑块行的开头
- 返回值：处理完毕的表单对象（便于连锁进行其他操作）
- 返回值类型：`CustomForm`

<br>

### 发送表单

最后，在一切就绪之后，你可以将配置好的表单对象发送给玩家，并监听玩家的互动消息  
表单对象可以被反复发送，每次发送都会返回一个不同的表单ID，并在有玩家互动时调用各自设置的回调函数，不会打架。 

对于某个玩家对象`pl`，使用函数：

`pl.sendForm(fm,callback)`

- 参数：
  - fm : `CustomForm`  
    配置好的自定义表单对象  
  - callback : `Function`  
    玩家提交表单之后被调用的回调函数。  
- 返回值：发送的表单ID  
- 返回值类型：`Integer`  
  - 如果返回值为`Null`，则代表发送失败

参数`callback`的回调函数原型：`function(player,data)`  

- player : `Player`  
  与表单互动的玩家对象
- data : `Array<...>`    
  返回的表单内容数组  
  数组中中按表单上的控件顺序储存了每一个控件的内容  
  如果data为`Null`，则代表玩家取消了表单

<br>