#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/ContainerType.h"
#include "mc/world/inventory/FillingContainer.h"

// auto generated forward declare list
// clang-format off
class ItemStack;
class ListTag;
class SaveContext;
namespace Bedrock::Threading { class SharedRecursiveMutex; }
// clang-format on

/**
 * @class LockingFillingContainer
 * @brief 一个带线程锁的、可填充的容器。
 *
 * 这个类继承自 FillingContainer，并在其基础上增加了线程安全机制。
 * 所有对容器内容进行修改或读取的操作都会先获取一个互斥锁，
 * 从而确保在多线程环境下（例如，主线程和IO线程同时访问）数据的完整性和一致性。
 * 常用于需要跨线程访问的方块实体库存，如箱子、熔炉等。
 */
class LockingFillingContainer : public ::FillingContainer {
public:
    // 成员变量
    // NOLINTBEGIN (关闭某些代码风格检查)

    // 指向一个共享递归互斥锁的弱引用。
    // 该互斥锁用于在访问容器内容时进行加锁，防止多线程冲突。
    // 使用 weak_ptr 是为了避免循环引用。
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::Bedrock::Threading::SharedRecursiveMutex>> mContainerContextMutex;

    // 存储在物品中的“权重”或“容量”。可能用于计算容器的占用情况。
    ::ll::TypedStorage<4, 4, int> mWeightInStorageItem;

    // 标记这个容器实例是在客户端还是服务器端。
    ::ll::TypedStorage<1, 1, bool> mIsClientSide;
    // NOLINTEND

public:
    // 默认禁止构造函数
    // 明确禁止了默认构造函数，强制要求使用带参数的构造函数来正确初始化。
    LockingFillingContainer();

public:
    // 虚函数
    // NOLINTBEGIN

    // vIndex: 49
    // 清空物品栏，并可以重新设置其大小。
    // 在清空前会获取线程锁。
    virtual int clearInventory(int resizeTo) /*override*/;

    // vIndex: 45
    // 交换两个槽位中的物品。
    // 在交换前会获取线程锁。
    virtual void swapSlots(int from, int to) /*override*/;

    // vIndex: 13
    // 在指定槽位设置物品，并可选择是否强制平衡堆叠数量。
    // 在设置前会获取线程锁。
    virtual void setItemWithForceBalance(int slot, ::ItemStack const& item, bool forceBalanced) /*override*/;

    // vIndex: 50
    // 将容器的内容保存到一个NBT ListTag中。
    // 在保存前会获取线程锁。
    virtual ::std::unique_ptr<::ListTag> saveToTag(::SaveContext const& saveContext) const /*override*/;

    // vIndex: 7
    // 获取指定槽位的物品（返回常量引用）。
    // 在获取前会获取线程锁。
    virtual ::ItemStack const& getItem(int slot) const /*override*/;

    // vIndex: 2
    // 在服务器端初始化物品堆叠的网络ID。
    // 在操作前会获取线程锁。
    virtual void serverInitItemStackIds(
        int                                            containerSlot,
        int                                            count,
        ::std::function<void(int, ::ItemStack const&)> onNetIdChanged
    ) /*override*/;

    // vIndex: 52
    // 尝试在指定槽位设置物品（内部辅助函数）。
    // 在设置前会获取线程锁。
    virtual void
    _trySetInSlot(::ItemStack& item, int const& slot, int const& inventorySize, int& backCompatOffset) /*override*/;

    // vIndex: 0
    // 虚析构函数，使用默认实现。
    virtual ~LockingFillingContainer() /*override*/ = default;
    // NOLINTEND

public:
    // 成员函数
    // NOLINTBEGIN

    /**
     * @brief 构造函数
     * @param numTotalSlots 容器的总槽位数
     * @param containerType 容器的类型
     * @param serializationMutex 用于序列化操作的共享互斥锁
     * @param isClientSide 标记是否为客户端实例
     */
    MCAPI LockingFillingContainer(
        int                                                         numTotalSlots,
        ::SharedTypes::Legacy::ContainerType                        containerType,
        ::std::weak_ptr<::Bedrock::Threading::SharedRecursiveMutex> serializationMutex,
        bool                                                        isClientSide
    );

    // 获取 mWeightInStorageItem 成员的值。
    MCAPI int getWeightInStorageItem() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        int                                                         numTotalSlots,
        ::SharedTypes::Legacy::ContainerType                        containerType,
        ::std::weak_ptr<::Bedrock::Threading::SharedRecursiveMutex> serializationMutex,
        bool                                                        isClientSide
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD int $clearInventory(int resizeTo);

    MCFOLD void $swapSlots(int from, int to);

    MCAPI void $setItemWithForceBalance(int slot, ::ItemStack const& item, bool forceBalanced);

    MCAPI ::std::unique_ptr<::ListTag> $saveToTag(::SaveContext const& saveContext) const;

    MCAPI ::ItemStack const& $getItem(int slot) const;

    MCAPI void $serverInitItemStackIds(
        int                                            containerSlot,
        int                                            count,
        ::std::function<void(int, ::ItemStack const&)> onNetIdChanged
    );

    MCAPI void $_trySetInSlot(::ItemStack& item, int const& slot, int const& inventorySize, int& backCompatOffset);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
