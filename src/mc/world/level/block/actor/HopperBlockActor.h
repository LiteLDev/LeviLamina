#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/ContainerType.h"
#include "mc/world/Container.h"
#include "mc/world/actor/Hopper.h"
#include "mc/world/item/ItemStack.h"
#include "mc/world/level/Tick.h"
#include "mc/world/level/block/actor/BlockActor.h"

// auto generated forward declare list
// clang-format off
class BlockActorDataPacket;
class BlockPos;
class BlockSource;
class CompoundTag;
class DataLoadHelper;
class FurnaceBlockActor;
class ILevel;
class Player;
class SaveContext;
// clang-format on

class HopperBlockActor : public ::BlockActor, public ::Container, public ::Hopper {
public:
    // 成员变量
    // NOLINTBEGIN (忽略命名规范检查)
    ::ll::TypedStorage<8, 760, ::ItemStack[5]> mItems; // 漏斗的物品栏，大小为5。这是一个低级存储结构，但本质上就是 ItemStack mItems[5];
    ::ll::TypedStorage<8, 8, ::Tick>           mLastTick;  // 记录上一次成功移动物品的游戏刻，用于计算冷却时间（8个游戏刻）。
    // NOLINTEND

public:
    // 默认构造函数被禁用，防止创建没有位置的漏斗
    HopperBlockActor();

public:
    // 虚函数（从基类继承并重写）
    // NOLINTBEGIN

    // vIndex: 9 - 游戏刻更新函数，每tick调用一次，是漏斗逻辑的核心驱动
    virtual void tick(::BlockSource& region) /*override*/;

    // vIndex: 1 - 从NBT数据中加载漏斗的状态（如物品栏内容）
    virtual void load(::ILevel& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;

    // vIndex: 2 - 将漏斗的状态保存到NBT数据中
    virtual bool save(::CompoundTag& tag, ::SaveContext const& saveContext) const /*override*/;

    // vIndex: 7 - 获取指定槽位的物品（只读）
    virtual ::ItemStack const& getItem(int slot) const /*override*/;

    // vIndex: 12 - 设置指定槽位的物品
    virtual void setItem(int slot, ::ItemStack const& item) /*override*/;

    // vIndex: 28 - 获取容器的名称（例如 "Hopper"）
    virtual ::std::string getName() const /*override*/;

    // vIndex: 20 - 获取容器的大小（对于漏斗是5）
    virtual int getContainerSize() const /*override*/;

    // vIndex: 21 - 获取容器内物品的最大堆叠数量（通常是64）
    virtual int getMaxStackSize() const /*override*/;

    // vIndex: 22 - 当玩家开始打开此容器时调用
    virtual void startOpen(::Player&) /*override*/;

    // vIndex: 23 - 当玩家停止打开此容器时调用
    virtual void stopOpen(::Player& player) /*override*/;

    // vIndex: 35 - 获取容器接口的指针（非const）
    virtual ::Container* getContainer() /*override*/;

    // vIndex: 34 - 获取容器接口的指针（const）
    virtual ::Container const* getContainer() const /*override*/;

    // vIndex: 34 - 当容器内容改变时调用，用于标记需要保存
    virtual void setContainerChanged(int slot) /*override*/;

    // vIndex: 15 - 当漏斗方块被移除（如被破坏）时调用，通常用于掉落物品
    virtual void onRemoved(::BlockSource&) /*override*/;

    // vIndex: 20 - 当邻近方块发生变化时调用，漏斗用它来检查红石信号状态
    virtual void onNeighborChanged(::BlockSource& region, ::BlockPos const&) /*override*/;

    // vIndex: 14 - 当方块实体被移动（如被活塞推动）时调用
    virtual void onMove() /*override*/;

    // vIndex: 2 - 服务器初始化物品的网络ID，用于同步给客户端
    virtual void serverInitItemStackIds(
        int                                            containerSlot,
        int                                            count,
        ::std::function<void(int, ::ItemStack const&)> onNetIdChanged
    ) /*override*/;

    // vIndex: 45 - 创建一个用于同步方块实体数据的网络包
    virtual ::std::unique_ptr<::BlockActorDataPacket> _getUpdatePacket(::BlockSource&) /*override*/;

    // vIndex: 46 - 接收并处理来自服务器的数据同步包
    virtual void _onUpdatePacket(::CompoundTag const& data, ::BlockSource&) /*override*/;

    // vIndex: 0 - 虚析构函数
    virtual ~HopperBlockActor() /*override*/ = default;
    // NOLINTEND

public:
    // 成员函数
    // NOLINTBEGIN

    // 构造函数，需要一个坐标
    MCAPI explicit HopperBlockActor(::BlockPos const& pos);

    // 确保漏斗链的tick顺序，防止无限循环
    MCAPI void _ensureTickingOrder(::BlockSource& region, int maxRecursion);

    // 内部tick逻辑，被 `tick` 函数调用
    MCAPI void _tick(::BlockSource& region, int maxRecursion);

    // 获取漏斗下方连接的熔炉
    MCAPI ::FurnaceBlockActor* getAttachedFurnace(::BlockSource& region);

    // 检查漏斗是否同时连接到箱子和熔炉（特定逻辑）
    MCAPI bool isAttachedToChestAndFurnace(::BlockSource& region);

    // 检查漏斗是否连接到指定类型的容器（如箱子、发射器等）
    MCAPI bool isAttachedToContainerType(::BlockSource& region, ::SharedTypes::Legacy::ContainerType containerType);

    // 检查漏斗上方是否是指定类型的容器（作为物品来源）
    MCAPI bool isSourceOfContainerType(::BlockSource& region, ::SharedTypes::Legacy::ContainerType containerType);

    // 当漏斗被移动后，更新其冷却时间
    MCAPI void updateCooldownAfterMove(::Tick const& currentTick, int time);
    // NOLINTEND


public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::BlockPos const& pos);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $tick(::BlockSource& region);

    MCAPI void $load(::ILevel& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCAPI bool $save(::CompoundTag& tag, ::SaveContext const& saveContext) const;

    MCAPI ::ItemStack const& $getItem(int slot) const;

    MCAPI void $setItem(int slot, ::ItemStack const& item);

    MCAPI ::std::string $getName() const;

    MCFOLD int $getContainerSize() const;

    MCFOLD int $getMaxStackSize() const;

    MCFOLD void $startOpen(::Player&);

    MCFOLD void $stopOpen(::Player& player);

    MCFOLD ::Container* $getContainer();

    MCFOLD ::Container const* $getContainer() const;

    MCFOLD void $setContainerChanged(int slot);

    MCFOLD void $onRemoved(::BlockSource&);

    MCAPI void $onNeighborChanged(::BlockSource& region, ::BlockPos const&);

    MCFOLD void $onMove();

    MCAPI void $serverInitItemStackIds(
        int                                            containerSlot,
        int                                            count,
        ::std::function<void(int, ::ItemStack const&)> onNetIdChanged
    );

    MCFOLD ::std::unique_ptr<::BlockActorDataPacket> $_getUpdatePacket(::BlockSource&);

    MCFOLD void $_onUpdatePacket(::CompoundTag const& data, ::BlockSource&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftableForBlockActor();

    MCAPI static void** $vftableForContainer();
    // NOLINTEND
};
