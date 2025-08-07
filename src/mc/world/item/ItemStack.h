#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/network/ItemStackNetIdVariant.h"
#include "mc/world/item/ItemStackBase.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockLegacy;
class BlockPalette;
class CompoundTag;
class ILevel;
class InteractionResult;
class Item;
class ItemInstance;
class Mob;
class NetworkItemStackDescriptor;
class Vec3;
struct ItemUsedOnEventContext;
// clang-format on

class ItemStack : public ::ItemStackBase {
public:
    // 成员变量
    // NOLINTBEGIN
    // TypedStorage 是一种类型安全的存储方式。这里存储了一个 ItemStackNetIdVariant。
    /**
     * @brief 物品的网络ID变体。
     * 这是一个非常重要的成员，用于在服务器和客户端之间高效地同步物品。
     * 服务器会为物品栈分配一个唯一的网络ID，当需要更新这个物品栈时（比如在物品栏里移动），
     * 服务器只需要发送这个ID，而不用每次都发送完整的物品数据（NBT等），从而大大减少了网络流量。
     * 客户端根据这个ID来识别并更新对应的物品。
     * 这个成员是 mutable 的（在ll::TypedStorage的模板参数里），意味着即使在 const 方法中也可以被修改。
     */
    ::ll::TypedStorage<4, 24, ::ItemStackNetIdVariant> mNetIdVariant;
    // NOLINTEND

public:
    // 虚函数 (重写基类的方法)
    // NOLINTBEGIN
    // vIndex: 2
    // `override` 关键字明确表示这个函数是在重写基类的虚函数。
    virtual void reinit(::BlockLegacy const& block, int count) /*override*/;

    // vIndex: 3
    virtual void reinit(::Item const& item, int count, int auxValue) /*override*/;

    // vIndex: 1
    virtual void reinit(::std::string_view const name, int count, int auxValue) /*override*/;

    // vIndex: 4
    /**
     * @brief 将物品栈设置为空状态。
     * 重写版本除了执行基类的逻辑外，通常还会清除网络ID（mNetIdVariant）。
     */
    virtual void setNull(::std::optional<::std::string> reason) /*override*/;

    // vIndex: 5
    virtual ::std::string toString() const /*override*/;

    // vIndex: 6
    virtual ::std::string toDebugString() const /*override*/;

    // vIndex: 0
    virtual ~ItemStack() /*override*/;
    // NOLINTEND

public:
    // 成员函数
    // NOLINTBEGIN
    MCAPI ItemStack(); // 默认构造函数

    MCAPI ItemStack(::ItemStack const& rhs); // 拷贝构造函数

    MCAPI explicit ItemStack(::ItemInstance const& rhs); // 从 ItemInstance 构造

    MCAPI ItemStack(::BlockLegacy const& block, int count = 1); // 从方块类型和数量构造

    MCAPI ItemStack(::Item const& item, int count = 1, int auxValue = 0, ::CompoundTag const* _userData = nullptr); // 从物品类型、数量、附加值和NBT构造

    MCAPI ItemStack(::std::string_view name, int count = 1, int auxValue = 0, ::CompoundTag const* _userData = nullptr); // 从物品名称、数量、附加值和NBT构造

    MCAPI void _assignNetIdVariant(::ItemStack const& fromItem) const; // 内部函数，从另一个 ItemStack 分配（拷贝）网络ID。

    MCAPI int getMaxUseDuration() const; // 获取物品的最大使用时长（例如，吃食物、拉弓需要的时间）。

    MCAPI ::ItemStack getStrippedNetworkItem() const; // 获取一个“剥离后”的物品版本，用于网络传输。通常会移除服务器端的临时数据。

    MCAPI bool matchesNetIdVariant(::ItemStack const& other) const; // 检查两个物品的网络ID是否匹配。

    MCAPI ::ItemStack& operator=(::ItemStack const& rhs); // 赋值运算符重载。

    MCAPI void playSoundIncrementally(::Mob& mob) const; // 在持续使用物品时（如吃东西）增量播放声音。

    MCAPI bool sameItemAndAuxAndBlockData(::ItemStack const& otherItemStack) const; // 检查两个物品是否在类型、附加值和方块数据上完全相同。比 sameItem 更严格。

    MCAPI void serverInitNetId(); // 【仅服务器端调用】为该物品栈初始化网络ID。

    MCAPI void useAsFuel(); // 将此物品作为燃料使用（例如在熔炉中燃烧）。这通常会使物品数量减1。

    /**
     * @brief 在指定的方块上使用此物品。
     * 这是处理玩家右键点击方块时物品行为的核心函数。
     * @param entity 使用物品的实体。
     * @param x, y, z 方块的坐标。
     * @param face 被点击的方块的面。
     * @param clickPos 点击在方块表面上的精确位置。
     * @param itemUsedOnEventContext 相关的事件上下文。
     * @return InteractionResult 交互的结果（成功、失败、传递等）。
     */
    MCAPI ::InteractionResult useOn(
        ::Actor&                 entity,
        int                      x,
        int                      y,
        int                      z,
        uchar                    face,
        ::Vec3 const&            clickPos,
        ::ItemUsedOnEventContext itemUsedOnEventContext
    );
    // NOLINTEND

public:
    // 静态函数 (工厂方法)
    // NOLINTBEGIN
    /**
     * @brief 从网络描述符创建 ItemStack。
     * 这是客户端接收到服务器发来的物品数据后，重建 ItemStack 对象的方法。
     * @param descriptor 网络传输的物品描述符。
     * @param blockPalette 方块调色板，用于解析方块ID。
     * @param isClientSide 是否在客户端侧调用。
     * @return 创建的 ItemStack。
     */
    MCAPI static ::ItemStack
    fromDescriptor(::NetworkItemStackDescriptor const& descriptor, ::BlockPalette& blockPalette, bool isClientSide);

    /**
     * @brief 从 NBT 复合标签创建 ItemStack。
     * 用于从存档或数据中加载物品。
     * @param tag 包含物品数据的 NBT 标签。
     * @return 创建的 ItemStack。
     */
    MCAPI static ::ItemStack fromTag(::CompoundTag const& tag);

    /**
     * @brief 从 NBT 复合标签创建 ItemStack，并提供 Level 上下文。
     * 有些物品的初始化可能需要访问世界信息。
     * @param tag 包含物品数据的 NBT 标签。
     * @param level 当前世界的引用。
     * @return 创建的 ItemStack。
     */
    MCAPI static ::ItemStack fromTag(::CompoundTag const& tag, ::ILevel& level);
    // NOLINTEND

public:
    // 静态变量
    // NOLINTBEGIN
    /**
     * @brief 返回一个代表“空”的静态常量 ItemStack 实例。
     * 在代码中需要表示一个空物品或空物品槽时，应使用此方法，
     * 这样可以避免重复创建空的 ItemStack 对象，提高性能。
     * @return 一个数量为0的、无效的 ItemStack 的常量引用。
     */
    MCAPI static ::ItemStack const& EMPTY_ITEM();
    // NOLINTEND


public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::ItemStack const& rhs);

    MCAPI void* $ctor(::ItemInstance const& rhs);

    MCAPI void* $ctor(::BlockLegacy const& block, int count);

    MCAPI void* $ctor(::Item const& item, int count, int auxValue, ::CompoundTag const* _userData);

    MCAPI void* $ctor(::std::string_view name, int count, int auxValue, ::CompoundTag const* _userData);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $reinit(::BlockLegacy const& block, int count);

    MCAPI void $reinit(::Item const& item, int count, int auxValue);

    MCAPI void $reinit(::std::string_view const name, int count, int auxValue);

    MCAPI void $setNull(::std::optional<::std::string> reason);

    MCAPI ::std::string $toString() const;

    MCAPI ::std::string $toDebugString() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
