#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockType.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockActor;
class BlockPos;
class BlockSource;
class Experiments;
class IConstBlockSource;
class ItemInstance;
class Player;
class Vec3;
struct UpdateEntityAfterFallOnInterface;
namespace BlockEvents { class BlockEntityFallOnEvent; }
namespace BlockEvents { class BlockPlaceEvent; }
namespace BlockEvents { class BlockPlayerInteractEvent; }
namespace mce { class Color; }
// clang-format on

class BedBlock : public ::BlockType {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 136
    virtual bool isInteractiveBlock() const /*override*/;

    // vIndex: 118
    virtual int getVariant(::Block const& block) const /*override*/;

    // vIndex: 121
    virtual uchar getMappedFace(uchar face, ::Block const& block) const /*override*/;

    // vIndex: 2
    virtual ::Block const* getNextBlockPermutation(::Block const& currentBlock) const /*override*/;

    // vIndex: 89
    virtual ::Block const* playerWillDestroy(::Player& player, ::BlockPos const& pos, ::Block const& block) const
        /*override*/;

    // vIndex: 87
    virtual void neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const
        /*override*/;

    // vIndex: 90
    virtual ::ItemInstance asItemInstance(::Block const&, ::BlockActor const* blockActor) const /*override*/;

    // vIndex: 88
    virtual bool getSecondPart(::IConstBlockSource const& region, ::BlockPos const& pos, ::BlockPos& out) const
        /*override*/;

    // vIndex: 68
    virtual void updateEntityAfterFallOn(::BlockPos const& pos, ::UpdateEntityAfterFallOnInterface& entity) const
        /*override*/;

    // vIndex: 69
    virtual bool isBounceBlock() const /*override*/;

    // vIndex: 49
    virtual bool canFillAtPos(::BlockSource& region, ::BlockPos const& pos, ::Block const& block) const /*override*/;

    // vIndex: 50
    virtual ::Block const& sanitizeFillBlock(::Block const& block) const /*override*/;

    // vIndex: 51
    virtual void onFillBlock(::BlockSource& region, ::BlockPos const& pos, ::Block const& block) const /*override*/;

    // vIndex: 117
    virtual int telemetryVariant(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    // vIndex: 57
    virtual bool checkIsPathable(::Actor& entity, ::BlockPos const& lastPathPos, ::BlockPos const& pathPos) const
        /*override*/;

    // vIndex: 109
    virtual bool canSpawnAt(::BlockSource const& region, ::BlockPos const& pos) const /*override*/;

    // vIndex: 144
    virtual ::mce::Color getMapColor(::BlockSource& source, ::BlockPos const& pos, ::Block const& block) const
        /*override*/;

    // vIndex: 131
    virtual void _addHardCodedBlockComponents(::Experiments const&) /*override*/;

    // vIndex: 0
    virtual ~BedBlock() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void onFallOn(::BlockEvents::BlockEntityFallOnEvent& eventData) const;

    MCAPI void onPlace(::BlockEvents::BlockPlaceEvent& eventData) const;

    MCAPI void use(::BlockEvents::BlockPlayerInteractEvent& eventData) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::optional<::BlockPos>
    findWakeupPosition(::BlockSource& region, ::BlockPos const& pos, ::std::optional<::Vec3> const& enteredBedPos);

    MCAPI static bool isValidStandUpPosition(::BlockSource& region, ::BlockPos const& pos);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<int[][2]> HEAD_DIRECTION_OFFSETS();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $isInteractiveBlock() const;

    MCAPI int $getVariant(::Block const& block) const;

    MCAPI uchar $getMappedFace(uchar face, ::Block const& block) const;

    MCFOLD ::Block const* $getNextBlockPermutation(::Block const& currentBlock) const;

    MCAPI ::Block const* $playerWillDestroy(::Player& player, ::BlockPos const& pos, ::Block const& block) const;

    MCAPI void $neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const;

    MCAPI ::ItemInstance $asItemInstance(::Block const&, ::BlockActor const* blockActor) const;

    MCAPI bool $getSecondPart(::IConstBlockSource const& region, ::BlockPos const& pos, ::BlockPos& out) const;

    MCAPI void $updateEntityAfterFallOn(::BlockPos const& pos, ::UpdateEntityAfterFallOnInterface& entity) const;

    MCFOLD bool $isBounceBlock() const;

    MCAPI bool $canFillAtPos(::BlockSource& region, ::BlockPos const& pos, ::Block const& block) const;

    MCAPI ::Block const& $sanitizeFillBlock(::Block const& block) const;

    MCAPI void $onFillBlock(::BlockSource& region, ::BlockPos const& pos, ::Block const& block) const;

    MCAPI int $telemetryVariant(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI bool $checkIsPathable(::Actor& entity, ::BlockPos const& lastPathPos, ::BlockPos const& pathPos) const;

    MCFOLD bool $canSpawnAt(::BlockSource const& region, ::BlockPos const& pos) const;

    MCAPI ::mce::Color $getMapColor(::BlockSource& source, ::BlockPos const& pos, ::Block const& block) const;

    MCAPI void $_addHardCodedBlockComponents(::Experiments const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
