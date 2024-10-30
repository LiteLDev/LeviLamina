# 物品相关指南

## 基本介绍

物品是Minecraft中的重要组成，常见的内部类有：

ItemStack -> ItemStackBase : 物品栈，存储该物品的 Item 和与之相关的数据。

Item : 概念意义上的物品，存储该物品的基本信息。


## 物品栈

物品栈粗略的来讲就是该物品在槽位中的信息，包括物品的数量，物品的附魔，物品的耐久等等。

### 物品栈的创建

物品栈的创建有很多种：

```cpp
// 通过物品名称和数量创建物品栈：
ItemStack{"diamond", 1};

// 通过物品名称和NBT创建物品栈：
ItemStack::fromTag(tag);
```
更多的请自行查看 LeviLamina 提供的 头文件 [ItemStack.h](https://github.com/LiteLDev/LeviLamina/blob/develop/src/mc/world/item/registry/ItemStack.h#L12)

## 物品

物品是物品栈的基本信息，包括物品的名称，物品的最大堆叠数量等等。

LeviLmaina 目前还未提供自定义物品的注册接口，此部分内容将在后续版本中提供。

## 一些注意事项

物品栈修改后，由于是服务端的物品栈，所以需要同步到客户端，否则客户端和服务端不一致，会导致一些问题。

如果该物品栈存储在实体中，可以使用 `Mob::refreshInventory()` 来刷新实体的背包。
