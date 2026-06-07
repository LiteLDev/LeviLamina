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
    // prevent constructor by default
    PaleMossCarpetBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::AABB const& getVisualShape(::Block const& block, ::AABB& bufferAABB) const /*override*/;

    virtual ::AABB getCollisionShape(
        ::Block const&             block,
        ::IConstBlockSource const& pos,
        ::BlockPos const&,
        ::optional_ref<::GetCollisionShapeInterface const>
    ) const /*override*/;

    virtual bool mayPlace(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    virtual bool canSurvive(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    virtual void neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const
        /*override*/;

    virtual bool canBeFertilized(::BlockSource&, ::BlockPos const&, ::Block const&) const /*override*/;

    virtual bool onFertilized(::BlockSource& region, ::BlockPos const& pos, ::Actor*, ::FertilizerType) const
        /*override*/;

    virtual ::Block const* playerWillDestroy(::Player& player, ::BlockPos const& pos, ::Block const& block) const
        /*override*/;

    virtual ::ItemInstance asItemInstance(::Block const& block, ::BlockActor const* blockActor) const /*override*/;

    virtual void _addHardCodedBlockComponents(::Experiments const&) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PaleMossCarpetBlock(::std::string const& nameId, int id);

    MCAPI void _onOneHalfDestroyed(::BlockSource& region, ::BlockPos const& pos, bool wasBottom) const;

    MCAPI void tick(::BlockEvents::BlockQueuedTickEvent& eventData) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool isBottom(::Block const& block);

    MCAPI static bool isTop(::Block const& block);

    MCAPI static void placeWithRandomizedSides(::BlockSource& region, ::BlockPos const& pos, ::Random& random);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& nameId, int id);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::AABB const& $getVisualShape(::Block const& block, ::AABB& bufferAABB) const;

    MCAPI ::AABB $getCollisionShape(
        ::Block const&             block,
        ::IConstBlockSource const& pos,
        ::BlockPos const&,
        ::optional_ref<::GetCollisionShapeInterface const>
    ) const;

    MCAPI bool $mayPlace(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI bool $canSurvive(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI void $neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const;

    MCFOLD bool $canBeFertilized(::BlockSource&, ::BlockPos const&, ::Block const&) const;

    MCAPI bool $onFertilized(::BlockSource& region, ::BlockPos const& pos, ::Actor*, ::FertilizerType) const;

    MCAPI ::Block const* $playerWillDestroy(::Player& player, ::BlockPos const& pos, ::Block const& block) const;

    MCAPI ::ItemInstance $asItemInstance(::Block const& block, ::BlockActor const* blockActor) const;

    MCAPI void $_addHardCodedBlockComponents(::Experiments const&);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
