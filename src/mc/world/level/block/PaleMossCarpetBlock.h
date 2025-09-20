#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/world/item/FertilizerType.h"
#include "mc/world/level/block/CarpetBlock.h"

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
class Player;
class Random;
namespace BlockEvents { class BlockQueuedTickEvent; }
// clang-format on

class PaleMossCarpetBlock : public ::CarpetBlock {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 11
    virtual ::AABB const& getVisualShape(::Block const& block, ::AABB& bufferAABB) const /*override*/;

    // vIndex: 5
    virtual ::AABB getCollisionShape(
        ::Block const& block,
        ::IConstBlockSource const&,
        ::BlockPos const& pos,
        ::optional_ref<::GetCollisionShapeInterface const>
    ) const /*override*/;

    // vIndex: 79
    virtual bool mayPlace(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    // vIndex: 138
    virtual bool canSurvive(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    // vIndex: 87
    virtual void neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const
        /*override*/;

    // vIndex: 76
    virtual bool canBeFertilized(::BlockSource& region, ::BlockPos const& pos, ::Block const& aboveBlock) const
        /*override*/;

    // vIndex: 74
    virtual bool
    onFertilized(::BlockSource& region, ::BlockPos const& pos, ::Actor* actor, ::FertilizerType fType) const
        /*override*/;

    // vIndex: 89
    virtual ::Block const* playerWillDestroy(::Player& player, ::BlockPos const& pos, ::Block const& block) const
        /*override*/;

    // vIndex: 90
    virtual ::ItemInstance asItemInstance(::Block const& block, ::BlockActor const* blockActor) const /*override*/;

    // vIndex: 131
    virtual void _addHardCodedBlockComponents(::Experiments const&) /*override*/;

    // vIndex: 0
    virtual ~PaleMossCarpetBlock() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _onOneHalfDestroyed(::BlockSource& region, ::BlockPos const& pos, bool wasBottom) const;

    MCNAPI void tick(::BlockEvents::BlockQueuedTickEvent& eventData) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void placeWithRandomizedSides(::BlockSource& region, ::BlockPos const& pos, ::Random& random);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::AABB const& $getVisualShape(::Block const& block, ::AABB& bufferAABB) const;

    MCNAPI ::AABB $getCollisionShape(
        ::Block const& block,
        ::IConstBlockSource const&,
        ::BlockPos const& pos,
        ::optional_ref<::GetCollisionShapeInterface const>
    ) const;

    MCNAPI bool $mayPlace(::BlockSource& region, ::BlockPos const& pos) const;

    MCNAPI bool $canSurvive(::BlockSource& region, ::BlockPos const& pos) const;

    MCNAPI void $neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const;

    MCNAPI bool $canBeFertilized(::BlockSource& region, ::BlockPos const& pos, ::Block const& aboveBlock) const;

    MCNAPI bool
    $onFertilized(::BlockSource& region, ::BlockPos const& pos, ::Actor* actor, ::FertilizerType fType) const;

    MCNAPI ::Block const* $playerWillDestroy(::Player& player, ::BlockPos const& pos, ::Block const& block) const;

    MCNAPI ::ItemInstance $asItemInstance(::Block const& block, ::BlockActor const* blockActor) const;

    MCNAPI void $_addHardCodedBlockComponents(::Experiments const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
