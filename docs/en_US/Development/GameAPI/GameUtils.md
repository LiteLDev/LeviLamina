## 🎮 Game Utilities API

The following APIs provide some useful tool interfaces to help game content development, so that the development efficiency can be improved to a certain extent.

### Format Code Utility

MC provides format control capabilities such as color text, style modification, etc. in the game through the **formatting code** symbol. Formatting codes are divided into two types: color codes and format codes, which respectively provide color control and style control capabilities.

The interface here is to help developers quickly get started with MC formatting code, without frequently looking up the table to use
Note: The interface here will only have an effect when passed to the BDS and displayed.

#### Color Code Table

| Color Code Symbols        | Color Meaning          | In-Game String Equivalent |
| ------------------------- | ----------------------- | ------------------ |
| `Format.Black`            | The following text is black     | §0                 |
| `Format.DarkBlue`         | The following text is dark blue   | §1 |
| `Format.DarkGreen`        | The following text is dark green    | §2|
| `Format.DarkAqua`         | The following text is lake blue   | §3|
| `Format.DarkRed`          | The following text is dark red   | §4|
| `Format.DarkPurple`       | The following text is purple     | §5|
| `Format.Gold`             | The following text is gold     | §6|
| `Format.Gray`             | The following text is gray     | §7|
| `Format.DarkGray`         | The following text is dark grey   | §8|
| `Format.Blue`             | The following text is blue     | §9|
| `Format.Green`            | The following text is light green   | §a|
| `Format.Aqua`             | The following text is sky blue   | §b|
| `Format.Red`              | The following text is red   | §c|
| `Format.LightPurple`      | The following text is light purple   | §d|
| `Format.Yellow`           | The following text is light yellow    | §e|
| `Format.White`            | The following text is white     | §f|
| `Format.MinecoinGold`     | The following text is coin gold | §g|

<br>

#### Format Code Table

| Format Code Symbol     | Format Meaning              | In-Game String Eqivalent |
| ---------------------- | ------------------------------- | ------------------ |
| `Format.Bold`          | The following text is **Bold**| §l |
| `Format.Italics`       | The following text is *Italic*| §o|
| `Format.Underline`     | The following text is <u>Underline</u>| §n|
| `Format.StrikeThrough` | The following text is ~~Strikethrough~~         | §m  |
| `Format.Random`        | The following text is randomly flashed garbled characters | §k  |
| `Format.Clear`         | The following text clears all formatting| §r |

<br>

The method used by the above code is a connection string, similar to:

```Javascript
[JS]
mc.broadcast(Format.Red + Format.Bold + "Red & Bold " + Format.DarkGreen + Format.Underline + "DarkGreen & Underline" + Format.Clear + "Clear");
```
```Lua
[Lua]
mc.broadcast(Format.Red .. Format.Bold .. "Red & Bold " .. Format.DarkGreen .. Format.Underline .. "DarkGreen & Underline" .. Format.Clear .. "Clear")
```