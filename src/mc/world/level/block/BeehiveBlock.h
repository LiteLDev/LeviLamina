#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/FaceDirectionalActorBlock.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BeehiveBlockActor;
class Block;
class BlockPos;
class BlockSource;
class Experiments;
class ItemStack;
class Player;
struct BlockAnimateTickData;
namespace BlockEvents { class BlockPlayerInteractEvent; }
// clang-format on

class BeehiveBlock : public ::FaceDirectionalActorBlock {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 118
    virtual int getVariant(::Block const& block) const /*override*/;

    // vIndex: 100
    virtual void executeEvent(
        ::BlockSource&       region,
        ::BlockPos const&    pos,
        ::Block const&       block,
        ::std::string const& eventName,
        ::Actor&             sourceEntity
    ) const /*override*/;

    // vIndex: 123
    virtual void animateTickBedrockLegacy(::BlockAnimateTickData const& tickData) const /*override*/;

    // vIndex: 105
    virtual bool hasComparatorSignal() const /*override*/;

    // vIndex: 106
    virtual int getComparatorSignal(::BlockSource& region, ::BlockPos const& pos, ::Block const& block, uchar dir) const
        /*override*/;

    // vIndex: 89
    virtual ::Block const* playerWillDestroy(::Player& player, ::BlockPos const& pos, ::Block const& block) const
        /*override*/;

    // vIndex: 2
    virtual ::Block const* getNextBlockPermutation(::Block const& currentBlock) const /*override*/;

    // vIndex: 121
    virtual uchar getMappedFace(uchar face, ::Block const& block) const /*override*/;

    // vIndex: 131
    virtual void _addHardCodedBlockComponents(::Experiments const&) /*override*/;

    // vIndex: 0
    virtual ~BeehiveBlock() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _fillHoneyBottle(
        ::Player&         player,
        ::ItemStack&      emptyBottle,
        ::ItemStack&      honeyBottle,
        ::BlockSource&    region,
        ::BlockPos const& pos
    ) const;

    MCAPI void emitHoneyComb(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI void use(::BlockEvents::BlockPlayerInteractEvent& eventData) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::ItemStack
    getHiveItemWithOccupants(::Block const& block, ::BeehiveBlockActor const* beehiveBlockActor);

    MCAPI static void resetHoneyLevel(::BlockSource& region, ::Block const& block, ::BlockPos const& pos);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI int $getVariant(::Block const& block) const;

    MCAPI void $executeEvent(
        ::BlockSource&       region,
        ::BlockPos const&    pos,
        ::Block const&       block,
        ::std::string const& eventName,
        ::Actor&             sourceEntity
    ) const;

    MCAPI void $animateTickBedrockLegacy(::BlockAnimateTickData const& tickData) const;

    MCFOLD bool $hasComparatorSignal() const;

    MCAPI int $getComparatorSignal(::BlockSource& region, ::BlockPos const& pos, ::Block const& block, uchar dir) const;

    MCAPI ::Block const* $playerWillDestroy(::Player& player, ::BlockPos const& pos, ::Block const& block) const;

    MCAPI ::Block const* $getNextBlockPermutation(::Block const& currentBlock) const;

    MCAPI uchar $getMappedFace(uchar face, ::Block const& block) const;

    MCAPI void $_addHardCodedBlockComponents(::Experiments const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
