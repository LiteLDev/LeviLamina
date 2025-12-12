#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/FertilizerType.h"
#include "mc/world/level/block/BlockType.h"
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
class Vec3;
namespace BlockEvents { class BlockPlaceEvent; }
namespace BlockEvents { class BlockQueuedTickEvent; }
namespace BlockEvents { class BlockRandomTickEvent; }
// clang-format on

class BambooStalkBlock : public ::BlockType {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::Block const&
    getPlacementBlock(::Actor const& by, ::BlockPos const& pos, uchar face, ::Vec3 const& clickPos, int itemValue) const
        /*override*/;

    virtual bool canSurvive(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    virtual void neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const
        /*override*/;

    virtual bool
    onFertilized(::BlockSource& region, ::BlockPos const& pos, ::Actor* actor, ::FertilizerType fType) const
        /*override*/;

    virtual bool mayConsumeFertilizer(::BlockSource& region) const /*override*/;

    virtual bool canBeFertilized(::BlockSource& region, ::BlockPos const& pos, ::Block const& aboveBlock) const
        /*override*/;

    virtual bool isValidAuxValue(int value) const /*override*/;

    virtual ::AABB const& getVisualShape(::Block const& block, ::AABB&) const /*override*/;

    virtual bool isLavaBlocking() const /*override*/;

    virtual bool mayPlace(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    virtual void _addHardCodedBlockComponents(::Experiments const&) /*override*/;

    virtual ~BambooStalkBlock() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::Block const& _determineNewBlockState(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI_S ::LeafSize _getLeafSize(::Block const& block) const;

    MCAPI_S ::StalkThickness _getStalkThickness(::Block const& block) const;

    MCAPI void onPlace(::BlockEvents::BlockPlaceEvent& eventData) const;

    MCAPI void randomTick(::BlockEvents::BlockRandomTickEvent& eventData) const;

    MCFOLD void tick(::BlockEvents::BlockQueuedTickEvent& eventData) const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::Block const& $getPlacementBlock(
        ::Actor const&    by,
        ::BlockPos const& pos,
        uchar             face,
        ::Vec3 const&     clickPos,
        int               itemValue
    ) const;

    MCFOLD bool $canSurvive(::BlockSource& region, ::BlockPos const& pos) const;

    MCFOLD void $neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const;

    MCAPI bool
    $onFertilized(::BlockSource& region, ::BlockPos const& pos, ::Actor* actor, ::FertilizerType fType) const;

    MCFOLD bool $mayConsumeFertilizer(::BlockSource& region) const;

    MCFOLD bool $canBeFertilized(::BlockSource& region, ::BlockPos const& pos, ::Block const& aboveBlock) const;

    MCAPI bool $isValidAuxValue(int value) const;

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
