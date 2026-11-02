#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/FaceDirectionalActorBlock.h"

// auto generated forward declare list
// clang-format off
class BeehiveBlockActor;
class Block;
class BlockPos;
class BlockSource;
class ItemStack;
class Player;
struct BlockAnimateTickData;
namespace BlockEvents { class ActorInternalEvent; }
namespace BlockEvents { class BlockPlayerInteractEvent; }
// clang-format on

class BeehiveBlock : public ::FaceDirectionalActorBlock {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual int getVariant(::Block const& block) const /*override*/;

    virtual void animateTickBedrockLegacy(::BlockAnimateTickData const& tickData) const /*override*/;

    virtual bool hasComparatorSignal() const /*override*/;

    virtual int getComparatorSignal(::BlockSource& region, ::BlockPos const& pos, ::Block const& block, uchar dir) const
        /*override*/;

    virtual ::Block const* playerWillDestroy(::Player& player, ::BlockPos const& pos, ::Block const& block) const
        /*override*/;

    virtual ::Block const* getNextBlockPermutation(::Block const& currentBlock) const /*override*/;

    virtual uchar getMappedFace(uchar face, ::Block const& block) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void emitHoneyComb(::BlockSource& region, ::BlockPos const& pos) const;

    MCNAPI void onEvent(::BlockEvents::ActorInternalEvent& event) const;

    MCNAPI void use(::BlockEvents::BlockPlayerInteractEvent& eventData) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void deliverNectar(::BlockSource& region, ::Block const& block, ::BlockPos const& pos);

    MCNAPI static ::ItemStack
    getHiveItemWithOccupants(::Block const& block, ::BeehiveBlockActor const* beehiveBlockActor);

    MCNAPI static bool hasHoneyToHarvest(::Block const& block);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI int $getVariant(::Block const& block) const;

    MCNAPI void $animateTickBedrockLegacy(::BlockAnimateTickData const& tickData) const;

    MCNAPI bool $hasComparatorSignal() const;

    MCNAPI int
    $getComparatorSignal(::BlockSource& region, ::BlockPos const& pos, ::Block const& block, uchar dir) const;

    MCNAPI ::Block const* $playerWillDestroy(::Player& player, ::BlockPos const& pos, ::Block const& block) const;

    MCNAPI ::Block const* $getNextBlockPermutation(::Block const& currentBlock) const;

    MCNAPI uchar $getMappedFace(uchar face, ::Block const& block) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
