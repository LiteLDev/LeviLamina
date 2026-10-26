# Item Guide

## Basic Introduction

Items are an essential component in Minecraft, with common internal classes including:

ItemStack -> ItemStackBase: An ItemStack, which stores the item and its related data.

Item: Represents the concept of an item, storing its basic information.

## ItemStack

Roughly speaking, an ItemStack is the information of the item in a slot, including the number of items, enchantments, durability, etc.

### Creating an ItemStack

There are several ways to create an ItemStack:

```cpp
// Create an ItemStack from an item name, count and aux value:
ItemStack stack;
stack.reinit("minecraft:diamond", 1, 0);

// Create an ItemStack from an NBT CompoundTag:
ItemStack::fromTag(tag);
```
For more, please refer to the header file provided by LeviLamina [ItemStack.h](https://github.com/LiteLDev/LeviLamina/blob/main/src/mc/world/item/ItemStack.h)

## Item

An item is the basic information of an ItemStack, including the item's name, maximum stack size, etc.

LeviLamina currently does not provide an interface for registering custom items. This content will be provided in future versions.

## Some Notes

After modifying an ItemStack, since it is a server-side ItemStack, it needs to be synchronized to the client. Otherwise, inconsistency between the client and server can lead to some issues.

If the ItemStack is stored in an entity, you can use `Mob::refreshInventory()` to refresh the entity's inventory.