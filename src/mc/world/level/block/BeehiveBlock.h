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
    // prevent constructor by default
    BeehiveBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual int getVariant(::Block const& block) const /*override*/;

    virtual void animateTickBedrockLegacy(::BlockAnimateTickData const& tickData) const /*override*/;

    virtual bool hasComparatorSignal() const /*override*/;

    virtual int getComparatorSignal(::BlockSource& block, ::BlockPos const&, ::Block const&, uchar) const /*override*/;

    virtual ::Block const* playerWillDestroy(::Player& player, ::BlockPos const& pos, ::Block const& block) const
        /*override*/;

    virtual ::Block const* getNextBlockPermutation(::Block const& currentBlock) const /*override*/;

    virtual uchar getMappedFace(uchar face, ::Block const& block) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BeehiveBlock(::std::string const& nameId, int id);

    MCAPI void _fillHoneyBottle(
        ::Player&         player,
        ::ItemStack&      emptyBottle,
        ::ItemStack&      honeyBottle,
        ::BlockSource&    region,
        ::BlockPos const& pos
    ) const;

    MCAPI bool _hasLitCampfireBelow(::BlockSource const& region, ::BlockPos pos) const;

    MCAPI void _playBottleSound(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI void _playShearSound(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI void emitHoneyComb(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI void evictAll(::BlockSource& region, ::BlockPos const& pos, bool angry) const;

    MCAPI void onEvent(::BlockEvents::ActorInternalEvent& event) const;

    MCAPI void onPlayerPlace(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI void use(::BlockEvents::BlockPlayerInteractEvent& eventData) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void deliverNectar(::BlockSource& region, ::Block const& block, ::BlockPos const& pos);

    MCAPI static ::ItemStack
    getHiveItemWithOccupants(::Block const& block, ::BeehiveBlockActor const* beehiveBlockActor);

    MCAPI static bool hasHoneyToHarvest(::Block const& block);

    MCAPI static void resetHoneyLevel(::BlockSource& region, ::Block const& block, ::BlockPos const& pos);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& nameId, int id);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI int $getVariant(::Block const& block) const;

    MCAPI void $animateTickBedrockLegacy(::BlockAnimateTickData const& tickData) const;

    MCFOLD bool $hasComparatorSignal() const;

    MCAPI int $getComparatorSignal(::BlockSource& block, ::BlockPos const&, ::Block const&, uchar) const;

    MCAPI ::Block const* $playerWillDestroy(::Player& player, ::BlockPos const& pos, ::Block const& block) const;

    MCAPI ::Block const* $getNextBlockPermutation(::Block const& currentBlock) const;

    MCAPI uchar $getMappedFace(uchar face, ::Block const& block) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
