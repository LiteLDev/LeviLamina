#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class Container;
class ItemStack;
class Vec3;
// clang-format on

class Hopper {
public:
    // 成员变量
    // NOLINTBEGIN (忽略命名规范检查)
    // 使用 ll::TypedStorage 是为了精确控制内存布局，功能上等同于普通成员变量
    ::ll::TypedStorage<4, 4, int>  mCooldownTime;                // 漏斗的冷却时间，默认为8个游戏刻 (ticks)
    ::ll::TypedStorage<1, 1, bool> mTransferedFromChestMinecart; // 一个特殊的标志，用于处理从运输矿车（带箱子）转移物品的逻辑，防止出现问题
    ::ll::TypedStorage<1, 1, bool> mIsEntity;                    // 关键标志！标识该漏斗逻辑是附着在方块实体上(false)还是一个真正的实体(true)，例如漏斗矿车。这会影响其行为。
    ::ll::TypedStorage<4, 4, int>  mMoveItemSpeed;               // 移动物品的速度/频率相关的设置，可能影响冷却或动画
    // NOLINTEND

public:
    // 成员函数 (这些函数通常带有下划线前缀，表示它们是内部实现细节)
    // NOLINTBEGIN
    
    // 尝试将一个物品堆栈(item)添加到一个容器(container)中。
    // face 参数用于指定从哪个面放入（例如，不能从上方给熔炉添加燃料）。
    MCAPI bool _addItem(::BlockSource& region, ::Container& container, ::ItemStack& item, int face, int itemCount);

    // 获取指定三维坐标(pos)处的方块内的容器。
    MCAPI ::Container* _getContainerInBlock(::BlockSource& region, ::Vec3 const& pos);

    // 获取指定三维坐标(pos)处的所有容器（例如，一个大箱子是两个容器实体）。
    MCAPI ::std::vector<::Container*> _getContainersAt(::BlockSource& region, ::Vec3 const& pos);

    // 检查一个容器是否为空。face 参数可能用于检查特定侧面是否可访问。
    MCAPI bool _isEmptyContainer(::Container& container, int face);

    // 检查一个容器是否已满。
    MCAPI bool _isFullContainer(::Container& container, int);

    // 核心功能之一：将物品从源容器(fromContainer)推送到目标位置(position)的容器中。
    // attachedFace 表示漏斗指向的方向。
    MCAPI bool
    _pushOutItems(::BlockSource& region, ::Container& fromContainer, ::Vec3 const& position, int attachedFace);

    // 尝试从指定位置(pos)的容器中拉取物品到目标容器(toContainer)中。
    MCAPI bool _tryAddItemsFromPos(::BlockSource& region, ::Container& toContainer, ::Vec3 const& pos);

    // 尝试将一个物品(item)从一个容器移动到另一个容器的特定槽位(slot)。
    MCAPI bool
    _tryMoveInItem(::BlockSource& region, ::Container& container, ::ItemStack& item, int slot, int face, int itemCount);

    // 尝试移动物品的核心函数。它会决定是推送(push)还是拉取(pull)物品。
    // fromContainer 是漏斗自身的物品栏。
    // pos 是目标/源位置。
    // canPushItems 决定是否允许执行推送操作。
    MCAPI bool _tryMoveItems(
        ::BlockSource& region,
        ::Container&   fromContainer,
        ::Vec3 const&  pos,
        int            attachedFace,
        bool           canPushItems
    );

    // 核心功能之一：尝试从正上方的容器中吸取物品到目标容器(toContainer)中。
    MCAPI bool _tryPullInItemsFromAboveContainer(::BlockSource& region, ::Container& toContainer, ::Vec3 const& pos);

    // 处理向堆肥桶推送物品的特殊逻辑，因为堆肥桶有自己独特的物品接受规则。
    MCAPI bool
    _tryPushToComposter(::BlockSource& region, ::Container& fromContainer, ::BlockPos hopperPos, int facingDirection);

    // 尝试从源容器(fromContainer)的指定槽位(slot)拿取物品，放入目标容器(toContainer)中。
    // 这对于处理像熔炉这样只能从特定槽位（成品槽）取物的容器至关重要。
    MCAPI bool _tryTakeInItemFromSlot(
        ::BlockSource& region,
        ::Container&   toContainer,
        ::Container&   fromContainer,
        int            slot,
        int            face
    );
    // NOLINTEND
};
