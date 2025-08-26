#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/world/item/FertilizerType.h"
#include "mc/world/level/block/FoliageBlock.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class Block;
class BlockActor;
class BlockPos;
class BlockSource;
class Experiments;
class GetCollisionShapeInterface;
class IConstBlockSource;
class ItemInstance;
namespace BlockEvents { class BlockRandomTickEvent; }
// clang-format on

class CropBlock : public ::FoliageBlock {
public:
    // 默认构造函数被禁用
    CropBlock();

public:
    // 虚函数 - 从基类继承并重写，以定义农作物的特定行为
    // NOLINTBEGIN
    // vIndex: 80 - 检查此农作物是否可以被放置在指定的方块上（通常是耕地）。
    virtual bool mayPlaceOn(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    // vIndex: 86 - 当邻近方块发生变化时调用。农作物用它来检查下方的耕地是否还存在。
    virtual void neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const
        /*override*/;

    // vIndex: 137 - 检查农作物在当前位置是否能存活（例如，下方必须是耕地）。如果不能，它会变成掉落物。
    virtual bool canSurvive(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    // vIndex: 117 - 获取方块的变体。对于农作物，这通常代表其生长阶段（0-7）。
    virtual int getVariant(::Block const& block) const /*override*/;

    // vIndex: 89 - 当此方块被破坏或采集时，应该掉落什么物品。
    virtual ::ItemInstance asItemInstance(::Block const&, ::BlockActor const*) const /*override*/;

    // vIndex: 5 - 获取方块的碰撞箱。农作物通常没有碰撞箱。
    virtual ::AABB getCollisionShape(
        ::Block const&,
        ::IConstBlockSource const&,
        ::BlockPos const&,
        ::optional_ref<::GetCollisionShapeInterface const>
    ) const /*override*/;

    // vIndex: 9 - 获取方块的渲染轮廓线（选中时的高亮框）。
    virtual ::AABB const&
    getOutline(::Block const& block, ::IConstBlockSource const&, ::BlockPos const& pos, ::AABB& bufferValue) const
        /*override*/;

    // vIndex: 99 - 执行一个由动画或行为包触发的事件。
    virtual void executeEvent(
        ::BlockSource&       region,
        ::BlockPos const&    pos,
        ::Block const&       block,
        ::std::string const& eventName,
        ::Actor&             sourceEntity
    ) const /*override*/;

    // vIndex: 3 - 检查此方块是否具有某个标签（例如 "fertilize_area"）。
    virtual bool
    hasTag(::BlockSource& region, ::BlockPos const& pos, ::Block const& block, ::std::string const& tagName) const
        /*override*/;

    // vIndex: 149 - (纯虚函数或提供默认实现) 获取此农作物的基础种子物品。
    virtual ::ItemInstance const getBaseSeed() const;

    // vIndex: 73 - 当此方块被施肥（如使用骨粉）时的响应。它会尝试增加生长阶段。
    virtual bool
    onFertilized(::BlockSource& region, ::BlockPos const& pos, ::Actor* actor, ::FertilizerType fType) const
        /*override*/;

    // vIndex: 75 - 检查此农作物当前是否可以被施肥（例如，还未完全成熟）。
    virtual bool canBeFertilized(::BlockSource& region, ::BlockPos const& pos, ::Block const& aboveBlock) const
        /*override*/;

    // vIndex: 130 - 添加硬编码的方块组件。这是将传统方块与现代组件化系统连接的方式之一。
    virtual void _addHardCodedBlockComponents(::Experiments const& experiments) /*override*/;

    // vIndex: 0 - 虚析构函数
    virtual ~CropBlock() /*override*/ = default;
    // NOLINTEND

public:
    // 成员函数
    // NOLINTBEGIN
    // 构造函数，需要一个名称ID（如 "minecraft:wheat"）和一个内部ID。
    MCAPI CropBlock(::std::string const& nameId, int id);

    // 核心生长逻辑：当游戏给这个方块一个“随机刻”时调用此函数。
    // 在这里，农作物会检查周围环境（光照、水分）并决定是否生长一阶段。
    MCAPI void randomTick(::BlockEvents::BlockRandomTickEvent& eventData) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& nameId, int id);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $mayPlaceOn(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI void $neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const;

    MCAPI bool $canSurvive(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI int $getVariant(::Block const& block) const;

    MCAPI ::ItemInstance $asItemInstance(::Block const&, ::BlockActor const*) const;

    MCFOLD ::AABB $getCollisionShape(
        ::Block const&,
        ::IConstBlockSource const&,
        ::BlockPos const&,
        ::optional_ref<::GetCollisionShapeInterface const>
    ) const;

    MCAPI ::AABB const&
    $getOutline(::Block const& block, ::IConstBlockSource const&, ::BlockPos const& pos, ::AABB& bufferValue) const;

    MCAPI void $executeEvent(
        ::BlockSource&       region,
        ::BlockPos const&    pos,
        ::Block const&       block,
        ::std::string const& eventName,
        ::Actor&             sourceEntity
    ) const;

    MCAPI bool
    $hasTag(::BlockSource& region, ::BlockPos const& pos, ::Block const& block, ::std::string const& tagName) const;

    MCAPI ::ItemInstance const $getBaseSeed() const;

    MCAPI bool
    $onFertilized(::BlockSource& region, ::BlockPos const& pos, ::Actor* actor, ::FertilizerType fType) const;

    MCFOLD bool $canBeFertilized(::BlockSource& region, ::BlockPos const& pos, ::Block const& aboveBlock) const;

    MCAPI void $_addHardCodedBlockComponents(::Experiments const& experiments);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
