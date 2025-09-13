#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/ContainerContentChangeListener.h"
#include "mc/world/ContainerID.h"
#include "mc/world/ContainerSizeChangeListener.h"
#include "mc/world/item/ItemStack.h"

// auto generated forward declare list
// clang-format off
class Container;
class HudContainerManagerModel;
class Inventory;
// clang-format on

/**
 * @class PlayerInventory
 * @brief 玩家物品栏的高级封装和管理器。
 *
 * 这个类不直接存储物品，而是管理一个底层的 Inventory 对象。
 * 它作为 Inventory 和游戏其他部分（特别是UI）之间的桥梁。
 * 它监听底层 Inventory 的变化（内容、大小），并负责处理选择的快捷栏槽位、
 * 同步UI、以及管理特殊物品（如创造模式的无限物品或需要特殊处理的复杂物品）。
 */
class PlayerInventory : public ::ContainerSizeChangeListener, public ::ContainerContentChangeListener {
public:
    // 成员变量
    // NOLINTBEGIN

    // 当前选择的快捷栏槽位索引 (0-8)。
    ::ll::TypedStorage<4, 4, int> mSelected;

    // 用于创造模式的“无限”物品堆叠。当玩家在创造模式下从物品栏中拿出物品时，
    // 实际上是复制这个 ItemStack，从而实现无限供应。
    ::ll::TypedStorage<8, 152, ::ItemStack> mInfiniteItem;

    // 当前选定槽位所在的容器ID。
    ::ll::TypedStorage<1, 1, ::ContainerID> mSelectedContainerId;

    // 指向实际存储物品的底层 Inventory 对象的唯一指针。PlayerInventory 拥有这个 Inventory。
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Inventory>> mInventory;

    // 存储需要特殊处理的“复杂物品”的列表，例如地图。这些物品可能需要每tick更新。
    ::ll::TypedStorage<8, 24, ::std::vector<::ItemStack>> mComplexItems;

    // 指向 HUD 容器管理器的弱指针，用于在物品栏发生变化时通知UI进行更新。
    // 使用 weak_ptr 是为了避免 PlayerInventory 和 UI 管理器之间的循环引用。
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::HudContainerManagerModel>> mHudContainerManager;
    // NOLINTEND

public:
    // 默认禁止构造函数
    PlayerInventory();

public:
    // 虚函数
    // NOLINTBEGIN

    // vIndex: 1
    // 虚析构函数。
    virtual ~PlayerInventory() /*override*/;

    // vIndex: 0
    // 当底层 Inventory 的大小改变时被调用的回调函数 (继承自 ContainerSizeChangeListener)。
    virtual void containerSizeChanged(int size) /*override*/;

    // vIndex: 0
    // 当底层 Inventory 的内容在指定槽位发生改变时被调用的回调函数 (继承自 ContainerContentChangeListener)。
    // 这是核心的更新逻辑触发点。
    virtual void containerContentChanged(int slot) /*override*/;

    // vIndex: 2
    // 创建一个“事务上下文”，用于将多个物品栏操作捆绑在一起。
    // 它允许注册一个在每次物品变更时调用的回调，以及一个在所有操作完成后执行的函数。
    virtual void createTransactionContext(
        ::std::function<void(::Container&, int, ::ItemStack const&, ::ItemStack const&)> callback,
        ::std::function<void()>                                                          execute
    );
    // NOLINTEND

public:
    // 成员函数
    // NOLINTBEGIN

    // 构造函数，接收一个 Inventory 对象的唯一指针并获得其所有权。
    MCNAPI explicit PlayerInventory(::std::unique_ptr<::Inventory> inv);

    /**
     * @brief 计算物品栏中符合特定条件的物品总数。
     * @param comparator 一个返回bool的函数对象，用于判断物品是否符合条件。
     * @return 符合条件的物品总数。
     */
    MCNAPI int getItemCount(::std::function<bool(::ItemStack const&)> comparator);

    // 获取当前快捷栏选中的物品。
    MCNAPI ::ItemStack const& getSelectedItem() const;

    // 初始化 PlayerInventory，主要是关联到 HUD 管理器模型。
    MCNAPI void init(::std::weak_ptr<::HudContainerManagerModel> hud);

    /**
     * @brief 从物品栏中移除一个资源（可能是旧版或特定用途的函数）。
     * @param type 资源的类型标识符。
     * @return 如果成功移除返回 true，否则返回 false。
     */
    MCNAPI bool removeResource(int type);

    /**
     * @brief 切换当前选中的快捷栏槽位。
     * @param slot 要选择的槽位索引。
     * @param containerId 槽位所在的容器ID。
     * @return 如果切换成功返回 true。
     */
    MCNAPI bool selectSlot(int slot, ::ContainerID containerId);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::unique_ptr<::Inventory> inv);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $containerSizeChanged(int size);

    MCNAPI void $containerContentChanged(int slot);

    MCNAPI void $createTransactionContext(
        ::std::function<void(::Container&, int, ::ItemStack const&, ::ItemStack const&)> callback,
        ::std::function<void()>                                                          execute
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForContainerSizeChangeListener();

    MCNAPI static void** $vftableForContainerContentChangeListener();
    // NOLINTEND
};
