## 🎮 游戏实用工具 API

下面这些API提供了某些帮助游戏内容开发的实用工具接口，让开发效率可以得到一定的提高。

### 格式化代码实用工具

MC通过 **格式化代码** 符号在游戏内提供颜色文字、样式修改等格式控制能力。格式化代码分为颜色代码与格式代码两种，分别提供颜色控制和样式控制两种能力。  

此处的接口为了帮助开发者快速上手MC格式化代码，而不需要频繁查表才能使用  
注意：此处接口仅有在传递到BDS中并显示时才会产生效果

#### 颜色代码表

| 颜色代码符号              | 表示的颜色意义          | 游戏内对应的字符串 |
| ------------------------- | ----------------------- | ------------------ |
| `Format.Black`            | 接下来的文字为 黑色     | §0                 |
| `Format.DarkBlue`         | 接下来的文字为 深蓝色   | §1                 |
| `Format.DarkGreen`        | 接下来的文字为 深绿色   | §2                 |
| `Format.DarkAqua	`     | 接下来的文字为 湖蓝色   | §3                 |
| `Format.DarkRed`          | 接下来的文字为 深红色   | §4                 |
| `Format.DarkPurple`       | 接下来的文字为 紫色     | §5                 |
| `Format.Gold`             | 接下来的文字为 金色     | §6                 |
| `Format.Gray`             | 接下来的文字为 灰色     | §7                 |
| `Format.DarkGray`         | 接下来的文字为 深灰色   | §8                 |
| `Format.Blue`             | 接下来的文字为 蓝色     | §9                 |
| `Format.Green`            | 接下来的文字为 浅绿色   | §a                 |
| `Format.Aqua`             | 接下来的文字为 天蓝色   | §b                 |
| `Format.Red`              | 接下来的文字为 浅红色   | §c                 |
| `Format.LightPurple`      | 接下来的文字为 浅紫色   | §d                 |
| `Format.Yellow`           | 接下来的文字为 浅黄色   | §e                 |
| `Format.White`            | 接下来的文字为 白色     | §f                 |
| `Format.MinecoinGold	` | 接下来的文字为 硬币金色 | §g                 |

<br>

#### 格式代码表

| 格式代码符号           | 表示的格式意义                  | 游戏内对应的字符串 |
| ---------------------- | ------------------------------- | ------------------ |
| `Format.Bold`          | 接下来的文字 **加粗**           | §l                 |
| `Format.Italics`       | 接下来的文字 *斜体*             | §o                 |
| `Format.Underline`     | 接下来的文字 <u>下划线</u>      | §n                 |
| `Format.StrikeThrough` | 接下来的文字 ~~删除线~~         | §m                 |
| `Format.Random`        | 接下来的文字 随机闪烁的乱码字符 | §k                 |
| `Format.Clear`         | 接下来的文字 清除所有格式       | §r                 |

<br>

上述代码使用的方法为连接字符串，类似于：

```clike
[Js]
mc.broadcast(Format.Red + Format.Bold + "Red & Bold " + Format.DarkGreen + Format.Underline + "DarkGreen & Underline" + Format.Clear + "Clear");
[Lua]
mc.broadcast(Format.Red .. Format.Bold .. "Red & Bold " .. Format.DarkGreen .. Format.Underline .. "DarkGreen & Underline" .. Format.Clear .. "Clear")
```