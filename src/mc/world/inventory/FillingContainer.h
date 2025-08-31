#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/Container.h"

// auto generated forward declare list
// clang-format off
class ItemStack;
class ListTag;
class Player;
class SaveContext;
// clang-format on

/**
 * @brief 可填充容器类
 *
 * 这是一个非常基础但重要的容器实现，继承自 `Container` 接口。
 * 它内部使用一个 `std::vector<ItemStack>` 来实际存储物品，并提供了
 * 添加、移除、查找物品等核心功能。
 * 许多游戏内的容器，比如箱子、发射器、漏斗等，都直接或间接地使用了这个类的实现。
 */
class FillingContainer : public ::Container {
public:
    // FillingContainer 内部类型定义
    // 定义一个类型别名 `ItemList`，方便表示物品栈的列表。
    using ItemList = ::std::vector<::ItemStack>;

public:
    // 成员变量
    // NOLINTBEGIN
    // 核心数据结构，一个向量（vector），用于存储容器内所有的物品栈。
    ::ll::TypedStorage<8, 24, ::std::vector<::ItemStack>> mItems;
    // 指向正在与此容器交互的玩家。可以为 nullptr。
    ::ll::TypedStorage<8, 8, ::Player*> mPlayer;
    // NOLINTEND

public:
    // 虚函数
    // NOLINTBEGIN
    // vIndex: 0
    /**
     * @brief 析构函数。
     */
    virtual ~FillingContainer() /*override*/;

    // vIndex: 44
    /**
     * @brief 从容器中移除指定类型的资源。
     * @param item 要移除的物品（只关心类型、辅助值和数据）。
     * @param requireExactAux 是否要求物品的辅助值（Aux Value）完全匹配。
     * @param requireExactData 是否要求物品的用户数据（User Data）完全匹配。
     * @param maxCount 最多移除的数量。
     * @return 实际移除的数量。
     */
    virtual int removeResource(::ItemStack const& item, bool requireExactAux, bool requireExactData, int maxCount);

    // vIndex: 45
    /**
     * @brief 交换两个槽位中的物品。
     * @param from 第一个槽位的索引。
     * @param to 第二个槽位的索引。
     */
    virtual void swapSlots(int from, int to);

    // vIndex: 46
    /**
     * @brief 向容器中添加一个物品栈。
     * @details 会尝试先与容器中已存在的同类物品栈合并，如果不行再寻找空位放置。
     * @param item 要添加的物品栈（会被修改，例如数量减少）。
     * @return 如果成功添加了至少一个物品，则返回 true。
     */
    virtual bool add(::ItemStack& item);

    // vIndex: 47
    /**
     * @brief 检查一个物品栈是否可以被添加到容器中。
     * @details 只检查是否有空间，不实际添加。
     * @param item 要检查的物品栈。
     * @return 如果可以添加，返回 true。
     */
    virtual bool canAdd(::ItemStack const& item) const;

    // vIndex: 14
    /**
     * @brief 从指定槽位移除指定数量的物品。
     * @param slot 槽位索引。
     * @param count 要移除的数量。
     */
    virtual void removeItem(int slot, int count) /*override*/;

    // vIndex: 48
    /**
     * @brief 清空指定槽位。
     * @param slot 槽位索引。
     */
    virtual void clearSlot(int slot);

    // vIndex: 49
    /**
     * @brief 清空整个容器（物品栏）。
     * @param resizeTo 清空后将容器大小调整为此值。
     * @return 返回被清空的物品数量。
     */
    virtual int clearInventory(int resizeTo);

    // vIndex: 50
    /**
     * @brief 将容器内容保存到 NBT 标签中。
     * @param saveContext 保存操作的上下文。
     * @return 返回一个包含容器所有物品数据的 ListTag 独占指针。
     */
    virtual ::std::unique_ptr<::ListTag> saveToTag(::SaveContext const& saveContext) const;

    // vIndex: 51
    /**
     * @brief 从 NBT 标签中加载容器内容。
     * @param inventoryList 包含物品数据的 ListTag。
     */
    virtual void loadFromTag(::ListTag const& inventoryList);

    // vIndex: 12
    /**
     * @brief 设置指定槽位的物品，会直接覆盖原有物品。
     * @param modelSlot 槽位索引。
     * @param item 要设置的物品。
     */
    virtual void setItem(int modelSlot, ::ItemStack const& item) /*override*/;

    // vIndex: 13
    /**
     * @brief 设置槽位物品，并带有强制平衡选项。
     * @param forceBalanced 可能与服务器端的物品ID网络同步有关。
     */
    virtual void setItemWithForceBalance(int slot, ::ItemStack const& item, bool forceBalanced) /*override*/;

    // vIndex: 7
    /**
     * @brief 获取指定槽位的物品。
     * @param slot 槽位索引。
     * @return 返回物品栈的常量引用。如果槽位为空，返回空物品。
     */
    virtual ::ItemStack const& getItem(int slot) const /*override*/;

    // vIndex: 21
    /**
     * @brief 获取容器内物品的最大堆叠数量。
     * @return 默认通常是 64。
     */
    virtual int getMaxStackSize() const /*override*/;

    // vIndex: 20
    /**
     * @brief 获取容器的大小（槽位总数）。
     * @return 返回 `mItems` 向量的大小。
     */
    virtual int getContainerSize() const /*override*/;

    // vIndex: 22
    /**
     * @brief 当玩家开始打开此容器时被调用。
     * @param player 打开容器的玩家。
     */
    virtual void startOpen(::Player&) /*override*/;

    // vIndex: 2
    /**
     * @brief 在服务器端初始化物品栈的网络ID。
     * @param containerSlot 容器槽位。
     * @param count 数量。
     * @param onNetIdChanged 当网络ID改变时调用的回调函数。
     */
    virtual void serverInitItemStackIds(
        int                                            containerSlot,
        int                                            count,
        ::std::function<void(int, ::ItemStack const&)> onNetIdChanged
    ) /*override*/;

    // vIndex: 52
    /**
     * @brief 尝试在槽位中设置物品（内部辅助函数）。
     */
    virtual void _trySetInSlot(::ItemStack& item, int const& slot, int const& inventorySize, int& backCompatOffset);
    // NOLINTEND

public:
    // 成员函数
    // NOLINTBEGIN
    /**
     * @brief 添加资源到容器（内部实现）。
     * @return 返回成功添加的数量。
     */
    MCAPI int _addResource(::ItemStack const& item);

    /**
     * @brief 获取一个空闲的槽位。
     * @return 返回空闲槽位的索引，如果没找到则返回 -1。
     */
    MCAPI int _getFreeSlot() const;

    /**
     * @brief 查找一个可以继续堆叠指定物品的槽位。
     * @param newItem 要堆叠的物品。
     * @return 返回合适的槽位索引，如果没找到则返回 -1。
     */
    MCAPI int _getSlotWithRemainingSpace(::ItemStack const& newItem) const;

    /**
     * @brief 检查关联的玩家是否处于创造模式。
     */
    MCAPI bool _isCreative() const;

    /**
     * @brief 当玩家关闭容器时，释放对玩家的引用。
     */
    MCAPI void _release(int slot);

    /**
     * @brief 查找包含指定物品的槽位。
     * @param item 要查找的物品。
     * @param checkAux 是否检查辅助值。
     * @param checkData 是否检查用户数据。
     * @return 返回槽位索引，如果没找到则返回 -1。
     */
    MCAPI int getSlotWithItem(::ItemStack const& item, bool checkAux, bool checkData) const;

    /**
     * @brief 移除指定类型的资源（重载版本）。
     * @param type 物品ID。
     * @return 是否成功移除。
     */
    MCAPI bool removeResource(int type);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI int $removeResource(::ItemStack const& item, bool requireExactAux, bool requireExactData, int maxCount);

    MCAPI void $swapSlots(int from, int to);

    MCAPI bool $add(::ItemStack& item);

    MCAPI bool $canAdd(::ItemStack const& item) const;

    MCAPI void $removeItem(int slot, int count);

    MCAPI void $clearSlot(int slot);

    MCAPI int $clearInventory(int resizeTo);

    MCAPI ::std::unique_ptr<::ListTag> $saveToTag(::SaveContext const& saveContext) const;

    MCAPI void $loadFromTag(::ListTag const& inventoryList);

    MCFOLD void $setItem(int modelSlot, ::ItemStack const& item);

    MCAPI void $setItemWithForceBalance(int slot, ::ItemStack const& item, bool forceBalanced);

    MCAPI ::ItemStack const& $getItem(int slot) const;

    MCFOLD int $getMaxStackSize() const;

    MCFOLD int $getContainerSize() const;

    MCFOLD void $startOpen(::Player&);

    MCFOLD void $serverInitItemStackIds(
        int                                            containerSlot,
        int                                            count,
        ::std::function<void(int, ::ItemStack const&)> onNetIdChanged
    );

    MCAPI void $_trySetInSlot(::ItemStack& item, int const& slot, int const& inventorySize, int& backCompatOffset);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
