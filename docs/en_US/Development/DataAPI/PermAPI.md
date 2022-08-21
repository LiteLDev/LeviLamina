# 🔐 Discord-like Permission Interface

> The builtin permission system of BDS/MCBE sucks. In order to meet the needs of plugins for the permission system, we made Permission APIs.

If you use Discord, you must know its Role system.  
Our permission system is similar to Discord's Role system.  
The whole system can be divided into three parts: `Role`, `Permission`(`PermInstance`) and `PermInfo`.  
`Role` defines a group of players that have the specified permissions, and `PermInfo` stores the description of all the permissions.  

Like discord, we also have the default `admin` and `everyone` roles.  
`admin` is a special role. All the permissions will be enabled by default.  
`everyone` is a special role. All the players are its members.  

You can send command `/perm view role admin` to see information of the `admin` role.

## Get Role instance

### Create a role

By constructor:  
[JS]  `new Role(name[,displayName])`  
[Lua] `Role(name[,displayName])`
By static method:  
`Permission.createRole(name[,displayName])`

- Parameters:
  - name: `String`  
    The role name, which is unique and cannot contain space or @#[]{}<>()/|\$%^&*!~`"'+=?\n\t\r\f\v
  - displayName: `String`(optional)  
    The role display name(default the same as `name`)
- Return Value: `Role` The role
- Throw when:
  - Invalid arguments.
  - Invalid name.
  - The role already exists.

<br/>

### Get a role

`Permission.getRole(name)`

- Parameters:
  - name: `String`  
    The role name
- Return Value: `Role` The role
- Throw when:
  - Invalid arguments.
  - The role not found.

<br/>

### Get or create a role

`Permission.getOrCreateRole(name)`

- Parameters:
  - name: `String`  
    The role name, which is unique and cannot contain space or @#[]{}<>()/|\$%^&*!~`"'+=?\n\t\r\f\v
- Return Value: `Role` The role
- Throw when:
  - Invalid arguments.
  - The name is invalid.
  
<br/>

## Class Role

> To avoid lifetime issues, plugins(including native plugins) only have role's weak reference. It means if the role is deleted by users or other plugins, you won't be able to access the role anymore.  
  So, if you want to store a role instance for a long time, you should call `role.isValid()` before using to make sure it is still available.

### Properties

 Name            | Type            | Description
-----------------|-----------------|-----------------------
`name`           | `String`        | The role name
`displayName`    | `String`        | The role display name
`priority`       | `Number`        | The role priority
`permissions`    | `Array<Object>` | The role permissions
`members`        | `Array<String>` | The role members(xuid)

The `permissions` property is an array of objects, each object contains the following properties:

 Name            | Type            | Description
-----------------|-----------------|-----------------------
`name`           | `String`        | The permission name
`enabled`        | `Boolean`       | Whether the permission is enabled
`extra`          | `Object`        | The extra data of the permission

<br/>

### Check whether the role is valid

`role.isValid()`

- Return Value: `Boolean` Whether the role is valid

<br/>

### Check whether the role has the member

`role.hasMember(xuid)`

- Parameters:
  - xuid: `String`  
    The member(player) xuid
- Return Value: `Boolean` Whether the role has the member
- Throw when:
  - Invalid arguments.
  - The role reference is expired.

<br/>

### Add the member to the role

`role.addMember(xuid)`

- Parameters:
  - xuid: `String`  
    The member(player) xuid
- Throw when:
  - Invalid arguments.
  - The role reference is expired.
  - The member already in the role.

<br/>

### Remove the member from the role

`role.removeMember(xuid)`

- Parameters:
  - xuid: `String`  
    The member(player) xuid
- Throw when:
  - Invalid arguments.
  - The role reference is expired.
  - The member not found in the role.

<br/>

### Check whether the role has the permission

`role.hasPermission(name)`

- Parameters:
  - name: `String`  
    The permission name
- Return Value: `Boolean` Whether the role has the permission
- Throw when:
  - Invalid arguments.
  - The role reference is expired.
- Note: The permission extra data will be ignored. It will return `true` if the `enabled` field is true.

<br/>

### Set the permission of the role

`role.setPermission(name, enabled[,extraData])`

- Parameters:
  - name: `String`  
    The permission name, which is registered in the `PermInfoList`(see [Register a permission](#register-a-permission))
  - enabled: `Boolean`  
    Whether the permission is enabled
  - extraData: `Object`(optional)  
    The extra data of the permission
- Throw when:
  - Invalid arguments.
  - Invalid extra data.
  - Invalid permission name.
  - The role reference is expired.
- Note: If the specified permission is not found in the role, it will be added and set to the specified value

<br/>

### Remove the permission of the role

`role.removePermission(name)`

- Parameters:
  - name: `String`  
    The permission name
- Throw when:
  - Invalid arguments.
  - The role reference is expired.
  - The permission not found.

<br/>

### Check whether the permission exists in the role

`role.permissionExists(name)`

- Parameters:
  - name: `String`  
    The permission name
- Return Value: `Boolean` Whether the permission is defined
- Throw when:
  - Invalid arguments.
  - The role reference is expired.
- Note: Different from `hasPermission`, this method will return `true` if the permission is in the role, but may not be enabled.

<br/>

## Static methods

### Check whether the role exists

`Permission.roleExists(name)`

- Parameters:
  - name: `String`  
    The role name
- Return Value: `Boolean` Whether the role exists
- Throw when:
  - Invalid arguments.

<br/>

### Delete a role

`Permission.deleteRole(name)`

- Parameters:
  - name: `String`  
    The role name
- Throw when:
  - Invalid arguments.
  - The role not found.

<br/>

### Register a permission

`Permission.registerPermission(name, desc)`

- Parameters:
  - name: `String`  
    The permission name, which is unique and cannot contain space or \t\n\r\f\v, and should be like `namespace:name`(at least one `:`)
  - desc: `String`
    The permission description
- Throw when:
  - Invalid arguments.
  - The permission name is invalid.
  - The permission already registered.

<br/>

### Check whether the permission exists

`Permission.permissionExists(name)`

- Parameters:
  - name: `String`  
    The permission name
- Return Value: `Boolean` Whether the permission exists
- Throw when:
  - Invalid arguments.

<br/>

### Check whether the player has the permission

`Permission.checkPermission(xuid, permName)`

- Parameters:
  - xuid: `String`  
    The player xuid
  - permName: `String`  
    The permission name
- Return Value: `Boolean` Whether the player has the permission
- Throw when:
  - Invalid arguments.
  - The player not found.
  - The permission not found.
- Note: The permission extra data will be ignored. It will return `true` if the `enabled` field is true.

- 💡 You can use prototype mechanism of JavaScript or [ScriptX APIs in lua](https://github.com/Tencent/ScriptX/blob/main/docs/en/Lua.md)
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

### Check whether the player is in the role

`Permission.isMemberOf(xuid, roleName)`

- Parameters:
  - xuid: `String`  
    The player xuid
  - roleName: `String`  
    The role name
- Return Value: `Boolean` Whether the player is in the role
- Throw when:
  - Invalid arguments.
  - The player not found.
- Note: If the role not found, it will return `false`.

<br/>

### Get the player's roles

`Permission.getPlayerRoles(xuid)`

- Parameters:
  - xuid: `String`  
    The player xuid
- Return Value: `Array<Role>` The player's roles

<br/>

### Get the player's permissions

`Permission.getPlayerPermissions(xuid)`

- Parameters:
  - xuid: `String`  
    The player xuid
- Return Value: `Array<Object>` The player's permissions

<br/>

### Save the permission data

`Permission.saveData()`

- Note: The data will be auto-saved every 100 game ticks.

<br/>

## Example

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
    // To let @everyone be able to chat, send the following command:
    // /perm update role everyone add perm "Global:chat" true
    let role = Permission.getRole("everyone");
    if (role.permissionExists("Global:join")) {
        role.setPermission("Global:join", true);
    }
    Permission.saveData(); // It is a good habit to save the data at once after modifying it.
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