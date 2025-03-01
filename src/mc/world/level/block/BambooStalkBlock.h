#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/world/item/FertilizerType.h"
#include "mc/world/level/block/BlockLegacy.h"
#include "mc/world/level/block/LeafSize.h"
#include "mc/world/level/block/StalkThickness.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class Block;
class BlockPos;
class BlockSource;
class Experiments;
class GetCollisionShapeInterface;
class IConstBlockSource;
class Random;
class Vec3;
namespace BlockEvents { class BlockPlaceEvent; }
namespace BlockEvents { class BlockQueuedTickEvent; }
// clang-format on

class BambooStalkBlock : public ::BlockLegacy {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 15
    virtual ::Vec3 randomlyModifyPosition(::BlockPos const& pos) const /*override*/;

    // vIndex: 5
    virtual ::AABB
    getCollisionShape(::Block const& block, ::IConstBlockSource const&, ::BlockPos const& pos, ::optional_ref<::GetCollisionShapeInterface const>)
        const /*override*/;

    // vIndex: 9
    virtual ::AABB const&
    getOutline(::Block const& block, ::IConstBlockSource const&, ::BlockPos const& pos, ::AABB& bufferValue) const
        /*override*/;

    // vIndex: 137
    virtual void randomTick(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const /*override*/;

    // vIndex: 92
    virtual ::Block const&
    getPlacementBlock(::Actor const& by, ::BlockPos const& pos, uchar face, ::Vec3 const& clickPos, int itemValue) const
        /*override*/;

    // vIndex: 142
    virtual bool canSurvive(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    // vIndex: 87
    virtual void neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const
        /*override*/;

    // vIndex: 74
    virtual bool
    onFertilized(::BlockSource& region, ::BlockPos const& pos, ::Actor* actor, ::FertilizerType fType) const
        /*override*/;

    // vIndex: 75
    virtual bool mayConsumeFertilizer(::BlockSource& region) const /*override*/;

    // vIndex: 76
    virtual bool canBeFertilized(::BlockSource& region, ::BlockPos const& pos, ::Block const& aboveBlock) const
        /*override*/;

    // vIndex: 48
    virtual bool isValidAuxValue(int auxValue) const /*override*/;

    // vIndex: 11
    virtual ::AABB const& getVisualShape(::Block const& block, ::AABB&) const /*override*/;

    // vIndex: 31
    virtual bool isLavaBlocking() const /*override*/;

    // vIndex: 79
    virtual bool mayPlace(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    // vIndex: 131
    virtual void _addHardCodedBlockComponents(::Experiments const&) /*override*/;

    // vIndex: 0
    virtual ~BambooStalkBlock() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::Block const& _determineNewBlockState(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI ::LeafSize _getLeafSize(::Block const& block) const;

    MCAPI ::AABB const& _getShape(::BlockPos const& pos, ::Block const& block, ::AABB& bufferValue) const;

    MCAPI ::StalkThickness _getStalkThickness(::Block const& block) const;

    MCAPI void onPlace(::BlockEvents::BlockPlaceEvent& eventData) const;

    MCFOLD void tick(::BlockEvents::BlockQueuedTickEvent& eventData) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::Vec3 $randomlyModifyPosition(::BlockPos const& pos) const;

    MCAPI ::AABB
    $getCollisionShape(::Block const& block, ::IConstBlockSource const&, ::BlockPos const& pos, ::optional_ref<::GetCollisionShapeInterface const>)
        const;

    MCAPI ::AABB const&
    $getOutline(::Block const& block, ::IConstBlockSource const&, ::BlockPos const& pos, ::AABB& bufferValue) const;

    MCAPI void $randomTick(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const;

    MCAPI ::Block const&
    $getPlacementBlock(::Actor const& by, ::BlockPos const& pos, uchar face, ::Vec3 const& clickPos, int itemValue)
        const;

    MCFOLD bool $canSurvive(::BlockSource& region, ::BlockPos const& pos) const;

    MCFOLD void $neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const;

    MCAPI bool
    $onFertilized(::BlockSource& region, ::BlockPos const& pos, ::Actor* actor, ::FertilizerType fType) const;

    MCFOLD bool $mayConsumeFertilizer(::BlockSource& region) const;

    MCFOLD bool $canBeFertilized(::BlockSource& region, ::BlockPos const& pos, ::Block const& aboveBlock) const;

    MCAPI bool $isValidAuxValue(int auxValue) const;

    MCAPI ::AABB const& $getVisualShape(::Block const& block, ::AABB&) const;

    MCFOLD bool $isLavaBlocking() const;

    MCAPI bool $mayPlace(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI void $_addHardCodedBlockComponents(::Experiments const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
