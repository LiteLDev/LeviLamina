# 🔐 类似Discord的权限系统接口

> BDS/MCBE自带的权限系统非常的拉跨，为了满足插件对权限系统的需要，我们完成了权限接口.

如果你使用Discord，你一定知道它的身份组系统。  
我们的权限系统与Discord的身份组系统非常相似。  
整个系统可以被分成三部分：`Role`(身份组), `Permission`(`PermInstance`, 权限实例) 和 `PermInfo`(权限信息)。  
`Role`定义了一组拥有指定权限的玩家，`PermInfo`则储存了所有权限的描述。  

和Discord一样，我们也有默认的`admin`(管理员)和`everyone`(所有人)身份组。    
`admin`是一个特殊的身份组，所有的权限都会默认开启。  
`everyone`也是一个特殊的身份组，所有的玩家都是它的成员。  

你可以发送命令 `/perm view role admin` 来看`admin`身份组的信息。

## 获取身份组实例

### 创建身份组

通过构造函数：  
[JS]  `new Role(name[,displayName])`  
[Lua] `Role(name[,displayName])`
通过静态方法：  
`Permission.createRole(name[,displayName])`

- 参数:
  - name: `String`  
    身份组名称，必须是唯一的并且不能含有@#[]{}<>()/|\$%^&*!~`"'+=?\n\t\r\f\v
  - displayName: `String`(可选)  
    身份组显示名称(默认和`name`一样)
- 返回值: `Role` 身份组实例
- 抛出:
  - 无效的参数。
  - 无效的名称。
  - 该身份组已存在。

<br/>

### Get a role

`Permission.getRole(name)`

- 参数:
  - name: `String`  
    身份组名称
- 返回值: `Role` 身份组实例
- 抛出:
  - 无效的参数。
  - 找不到该身份组。

<br/>

### Get or create a role

`Permission.getOrCreateRole(name)`

- 参数:
  - name: `String`  
    身份组名称，必须是唯一的并且不能含有@#[]{}<>()/|\$%^&*!~`"'+=?\n\t\r\f\v
- 返回值: `Role` 身份组实例
- 抛出:
  - 无效的参数。
  - 无效的名称。
  
<br/>

## 身份组类

> 为了避免生命周期问题，插件(包括原生插件)只有身份组的弱引用。这意味着如果身份组被用户或其他插件删除，您将无法再访问此身份组。  
  所以，如果您想要长时间储存一个身份组实例，您应该在使用之前调用`role.isValid()`以保证权限组实例依然有效。

### 属性

 名称             | 类型             | 描述
-----------------|-----------------|-----------------------
`name`           | `String`        | 身份组名称
`displayName`    | `String`        | 身份组显示名称
`priority`       | `Number`        | 身份组优先级，越大越优先
`permissions`    | `Array<Object>` | 身份组拥有的权限
`members`        | `Array<String>` | 身份组成员的Xuid

`permissions` 属性是一个对象的数组，每个对象都含有以下属性：

 名称             | 类型             | 描述
-----------------|-----------------|-----------------------
`name`           | `String`        | 权限名称
`enabled`        | `Boolean`       | 权限是否开启
`extra`          | `Object`        | 权限的额外数据

<br/>

### 检查身份组实例是否有效

`role.isValid()`

- 返回值: `Boolean` 身份组实例是否有效

<br/>

### 检查身份组是否有指定成员

`role.hasMember(xuid)`

- 参数:
  - xuid: `String`  
    成员(玩家)的Xuid
- 返回值: `Boolean` 是否有该成员
- 抛出:
  - 无效的参数。
  - 身份组实例已被销毁。

<br/>

### 添加成员到身份组

`role.addMember(xuid)`

- 参数:
  - xuid: `String`  
    成员(玩家)的Xuid
- 抛出:
  - 无效的参数。
  - 身份组实例已被销毁。
  - 成员已存在。

<br/>

### 从身份组中移除成员

`role.removeMember(xuid)`

- 参数:
  - xuid: `String`  
    成员(玩家)的Xuid
- 抛出:
  - 无效的参数。
  - 身份组实例已被销毁。
  - 成员不存在。

<br/>

### 检查身份组是否有指定权限

`role.hasPermission(name)`

- 参数:
  - name: `String`  
    权限名称
- 返回值: `Boolean` 是否有该权限
- 抛出:
  - 无效的参数。
  - 身份组实例已被销毁。
- 注意: 权限的额外数据将被忽略，如果`enabled`字段的值为`true`，它就会返回`true`。

<br/>

### 设置身份组权限

`role.setPermission(name, enabled[,extraData])`

- 参数:
  - name: `String`  
    权限名称，必须已经注册在`PermInfoList`中(参见 [注册权限](#注册权限))
  - enabled: `Boolean`  
    权限是否开启
  - extraData: `Object`(optional)  
    权限的额外数据
- 抛出:
  - 无效的参数。
  - 无效的额外数据。
  - 无效的权限名。
  - 身份组实例已被销毁。
- 注意: 如果在身份组中未找到指定权限，将会添加该权限并设置为指定值。

<br/>

### 移除身份组中的权限

`role.removePermission(name)`

- 参数:
  - name: `String`  
    权限名称
- 抛出:
  - 无效的参数。
  - 身份组实例已被销毁。
  - 找不到指定权限。

<br/>

### 检查权限是否存在于身份组中

`role.permissionExists(name)`

- 参数:
  - name: `String`  
    权限名称
- 返回值: `Boolean` 权限是否已经存在于身份组中
- 抛出:
  - 无效的参数。
  - 身份组实例已被销毁。
- 注意: 不同于`hasPermission`，这个方法会返回`true`只要权限已经存在于身份组，但权限不一定开启。

<br/>

## 静态方法

### 检查身份组是否存在

`Permission.roleExists(name)`

- 参数:
  - name: `String`  
    身份组名称
- 返回值: `Boolean` 身份组是否存在
- 抛出:
  - 无效的参数。

<br/>

### 删除身份组

`Permission.deleteRole(name)`

- 参数:
  - name: `String`  
    身份组名称
- 抛出:
  - 无效的参数。
  - 身份组不存在。

<br/>

### 注册权限

`Permission.registerPermission(name, desc)`

- 参数:
  - name: `String`  
    权限名，唯一且不包含空格或\t\n\r\f\v，形如`namespace:name`(至少有一个 `:`)
  - desc: `String`
    权限描述
- 抛出:
  - 无效的参数。
  - 无效的权限名。
  - 权限已经存在。

<br/>

### 检查权限是否存在

`Permission.permissionExists(name)`

- 参数:
  - name: `String`  
    权限名称
- 返回值: `Boolean` 权限是否存在
- 抛出:
  - 无效的参数。

<br/>

### 检查玩家是否有指定权限

`Permission.checkPermission(xuid, permName)`

- 参数:
  - xuid: `String`  
    玩家Xuid
  - permName: `String`  
    权限名称
- 返回值: `Boolean` 玩家是否有指定权限
- 抛出:
  - 无效的参数。
  - 找不到玩家。
  - 找不到权限。
- 注意：权限的额外数据将被忽略，此方法会返回`true`如果`enabled`字段为`true`。

- 💡 您可以用JavaScript的原型机制或者[Lua的ScriptX接口](https://github.com/Tencent/ScriptX/blob/main/docs/zh/Lua.md)
```js
LLSE_Player.prototype.hasPermission = function(permName) {
  return Permission.checkPermission(this.xuid, permName);
}
```
```lua
local meta = ScriptX.getInstanceMeta(LLSE_Player);
function meta.instanceFunction:hasPermission(perm)
  return Permission.checkPermission(self.xuid, perm);
end
```

<br/>

### 检查玩家是否是指定身份组的成员

`Permission.isMemberOf(xuid, roleName)`

- 参数:
  - xuid: `String`  
    玩家Xuid
  - roleName: `String`  
    身份组名称
- 返回值: `Boolean` 玩家是否是指定身份组的成员
- 抛出:
  - 无效的参数。
  - 找不到玩家。
- 注意：如果找不到指定权限组，此方法将返回`false`。

<br/>

### 获取玩家的身份组列表

`Permission.getPlayerRoles(xuid)`

- 参数:
  - xuid: `String`  
    玩家Xuid
- 返回值: `Array<Role>` 此玩家的身份组列表

<br/>

### 获取玩家的权限列表

`Permission.getPlayerPermissions(xuid)`

- 参数:
  - xuid: `String`  
    玩家Xuid
- 返回值: `Array<Object>` 此玩家的权限列表

<br/>

### 保存数据

`Permission.saveData()`

- 注意: 数据将每100游戏刻自动保存一次。

<br/>

## 例子

```js
LLSE_Player.prototype.hasPermission = function (permName) {
    return Permission.checkPermission(this.xuid, permName);
}

try {
    if (!Permission.permissionExists("Global:chat")) {
        Permission.registerPermission("Global:chat", "Allow player to chat");
    }
    if (!Permission.permissionExists("Global:join")) {
        Permission.registerPermission("Global:join", "Allow player to join");
    }
    // 为了让"所有人"能聊天，发送以下命令
    // /perm update role everyone add perm "Global:chat" true
    let role = Permission.getRole("everyone");
    if (role.permissionExists("Global:join")) {
        role.setPermission("Global:join", true);
    }
    Permission.saveData(); // 在修改完后立刻保存是一个好的习惯
} catch (e) {
    logger.error("Error: " + e);
}

mc.listen("onChat", function (pl, msg) {
    if (!pl.hasPermission("Global:chat")) {
        return false;
    }
});
mc.listen("onJoin", function (pl, msg) {
    if (!pl.hasPermission("Global:join")) {
        pl.kick("You are not allowed to join this server");
    }
});
```