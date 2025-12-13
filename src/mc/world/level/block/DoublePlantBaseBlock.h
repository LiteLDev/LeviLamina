#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/world/item/FertilizerType.h"
#include "mc/world/level/block/FoliageBlock.h"
#include "mc/world/phys/AABB.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockPos;
class BlockSource;
class Experiments;
class GetCollisionShapeInterface;
class IConstBlockSource;
class Player;
namespace BlockEvents { class BlockPlaceEvent; }
namespace BlockEvents { class BlockQueuedTickEvent; }
// clang-format on

class DoublePlantBaseBlock : public ::FoliageBlock {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 24, ::AABB> mBottomVisualShape;
    // NOLINTEND

public:
    // prevent constructor by default
    DoublePlantBaseBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::Block const* getNextBlockPermutation(::Block const& currentBlock) const /*override*/;

    virtual bool mayPlace(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    virtual bool mayPlace(::BlockSource& region, ::BlockPos const& pos, uchar face) const /*override*/;

    virtual void checkAlive(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    virtual bool canSurvive(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    virtual void tick(::BlockEvents::BlockQueuedTickEvent& eventData) const /*override*/;

    virtual ::AABB getCollisionShape(
        ::Block const&,
        ::IConstBlockSource const&,
        ::BlockPos const&,
        ::optional_ref<::GetCollisionShapeInterface const>
    ) const /*override*/;

    virtual ::AABB const& getVisualShape(::Block const& block, ::AABB& bufferAABB) const /*override*/;

    virtual ::Block const* playerWillDestroy(::Player& player, ::BlockPos const& pos, ::Block const& block) const
        /*override*/;

    virtual bool getSecondPart(::IConstBlockSource const& region, ::BlockPos const& pos, ::BlockPos& out) const
        /*override*/;

    virtual bool
    onFertilized(::BlockSource& region, ::BlockPos const& pos, ::Actor* actor, ::FertilizerType fType) const
        /*override*/;

    virtual bool canBeFertilized(::BlockSource& region, ::BlockPos const& pos, ::Block const& aboveBlock) const
        /*override*/;

    virtual ::Block const& _keepRelevantStateForDropping(::Block const& block) const;

    virtual void _addHardCodedBlockComponents(::Experiments const&) /*override*/;

    virtual ~DoublePlantBaseBlock() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI DoublePlantBaseBlock(::std::string const& nameId, int id);

    MCAPI void _preventCreativeDropFromBottomPart(::Player const& player, ::BlockPos const& bottomHalfPos) const;

    MCAPI void onPlace(::BlockEvents::BlockPlaceEvent& eventData) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& nameId, int id);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::Block const* $getNextBlockPermutation(::Block const& currentBlock) const;

    MCFOLD bool $mayPlace(::BlockSource& region, ::BlockPos const& pos) const;

    MCFOLD bool $mayPlace(::BlockSource& region, ::BlockPos const& pos, uchar face) const;

    MCFOLD void $checkAlive(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI bool $canSurvive(::BlockSource& region, ::BlockPos const& pos) const;

    MCFOLD void $tick(::BlockEvents::BlockQueuedTickEvent& eventData) const;

    MCFOLD ::AABB $getCollisionShape(
        ::Block const&,
        ::IConstBlockSource const&,
        ::BlockPos const&,
        ::optional_ref<::GetCollisionShapeInterface const>
    ) const;

    MCAPI ::AABB const& $getVisualShape(::Block const& block, ::AABB& bufferAABB) const;

    MCAPI ::Block const* $playerWillDestroy(::Player& player, ::BlockPos const& pos, ::Block const& block) const;

    MCFOLD bool $getSecondPart(::IConstBlockSource const& region, ::BlockPos const& pos, ::BlockPos& out) const;

    MCAPI bool
    $onFertilized(::BlockSource& region, ::BlockPos const& pos, ::Actor* actor, ::FertilizerType fType) const;

    MCFOLD bool $canBeFertilized(::BlockSource& region, ::BlockPos const& pos, ::Block const& aboveBlock) const;

    MCAPI ::Block const& $_keepRelevantStateForDropping(::Block const& block) const;

    MCAPI void $_addHardCodedBlockComponents(::Experiments const&);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
