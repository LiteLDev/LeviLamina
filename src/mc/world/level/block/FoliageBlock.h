#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/world/item/FertilizerType.h"
#include "mc/world/level/block/BlockLegacy.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Block;
class BlockPos;
class BlockSource;
class Experiments;
class GetCollisionShapeInterface;
class IConstBlockSource;
class Vec3;
namespace BlockEvents { class BlockQueuedTickEvent; }
// clang-format on

class FoliageBlock : public ::BlockLegacy {
public:
    // 虚函数 - 从 BlockLegacy 继承并重写
    // NOLINTBEGIN
    // vIndex: 86 - 当邻近方块发生变化时调用。
    // 基类实现通常会调用 checkAlive 来检查生存条件。
    virtual void neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const
        /*override*/;

    // vIndex: 146 - 当一个“计划刻”到达时调用。
    // 这可以用于实现一些有延迟的效果，比如树叶腐烂。
    virtual void tick(::BlockEvents::BlockQueuedTickEvent& eventData) const;

    // vIndex: 137 - 检查此植物方块在当前位置是否能存活。
    // 默认实现通常会检查下方的方块是否能支撑它。
    virtual bool canSurvive(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    // vIndex: 5 - 获取方块的碰撞箱。
    // 对于大多数植物来说，这个函数返回一个空的AABB，意味着它们没有物理碰撞体积。
    virtual ::AABB getCollisionShape(
        ::Block const&,
        ::IConstBlockSource const&,
        ::BlockPos const&,
        ::optional_ref<::GetCollisionShapeInterface const>
    ) const /*override*/;

    // vIndex: 130 - 添加硬编码的方块组件。
    virtual void _addHardCodedBlockComponents(::Experiments const&) /*override*/;

    // vIndex: 80 - 检查此方块是否可以被放置在目标方块上。
    virtual bool mayPlaceOn(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    // vIndex: 147 - (新虚函数) 检查方块是否存活，如果不能，则将其破坏。
    // 这是一个独立的、可被重写的生存检查+执行函数。
    virtual void checkAlive(::BlockSource& region, ::BlockPos const& pos) const;

    // vIndex: 148 - (新虚函数) 设置方块的生长状态。
    // 这是一个通用的接口，用于修改代表生长阶段的方块状态。
    virtual ::Block const& setGrowth(
        ::BlockSource&    region,
        ::BlockPos const& pos,
        ::Block const&    baseBlock,
        ushort            newGrowth,
        int               updateFlags
    ) const;

    // vIndex: 0 - 虚析构函数
    virtual ~FoliageBlock() /*override*/;
    // NOLINTEND

public:
    // 成员函数
    // NOLINTBEGIN
    // 一个辅助函数，用于催生作物。这个函数放在这里可能是为了让树叶等也能有类似的生长行为（例如长出果实）。
    MCAPI bool growCrops(::BlockSource& region, ::BlockPos const& pos, ::FertilizerType fType) const;
    // NOLINTEND

public:
    // 静态变量
    // NOLINTBEGIN
    // 定义了一个通用的“灌木”形状的AABB，用于渲染轮廓或视觉边界。
    MCAPI static ::Vec3 const& BUSH_VISUAL_SHAPE_MAX();
    MCAPI static ::Vec3 const& BUSH_VISUAL_SHAPE_MIN();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const;

    MCFOLD void $tick(::BlockEvents::BlockQueuedTickEvent& eventData) const;

    MCFOLD bool $canSurvive(::BlockSource& region, ::BlockPos const& pos) const;

    MCFOLD ::AABB $getCollisionShape(
        ::Block const&,
        ::IConstBlockSource const&,
        ::BlockPos const&,
        ::optional_ref<::GetCollisionShapeInterface const>
    ) const;

    MCFOLD void $_addHardCodedBlockComponents(::Experiments const&);

    MCAPI bool $mayPlaceOn(::BlockSource& region, ::BlockPos const& pos) const;

    MCFOLD void $checkAlive(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI ::Block const& $setGrowth(
        ::BlockSource&    region,
        ::BlockPos const& pos,
        ::Block const&    baseBlock,
        ushort            newGrowth,
        int               updateFlags
    ) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
