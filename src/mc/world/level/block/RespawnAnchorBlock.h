#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockLegacy.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockSource;
class Container;
class Experiments;
class ItemStack;
class Level;
class Player;
class Random;
struct Brightness;
namespace BlockEvents { class BlockPlaceEvent; }
// clang-format on

class RespawnAnchorBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    RespawnAnchorBlock& operator=(RespawnAnchorBlock const&);
    RespawnAnchorBlock(RespawnAnchorBlock const&);
    RespawnAnchorBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 118
    virtual int getVariant(::Block const& block) const /*override*/;

    // vIndex: 123
    virtual void animateTickBedrockLegacy(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const
        /*override*/;

    // vIndex: 139
    virtual bool use(::Player& player, ::BlockPos const& anchorBlockPos, uchar) const /*override*/;

    // vIndex: 138
    virtual bool isInteractiveBlock() const /*override*/;

    // vIndex: 126
    virtual ::Brightness getLightEmission(::Block const& block) const /*override*/;

    // vIndex: 109
    virtual bool canSpawnAt(::BlockSource const& region, ::BlockPos const& pos) const /*override*/;

    // vIndex: 110
    virtual void notifySpawnedAt(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    // vIndex: 105
    virtual bool hasComparatorSignal() const /*override*/;

    // vIndex: 106
    virtual int getComparatorSignal(::BlockSource& region, ::BlockPos const& pos, ::Block const& block, uchar dir) const
        /*override*/;

    // vIndex: 131
    virtual void _addHardCodedBlockComponents(::Experiments const&) /*override*/;

    // vIndex: 0
    virtual ~RespawnAnchorBlock() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RespawnAnchorBlock(::std::string const& nameId, int id);

    MCAPI void onPlace(::BlockEvents::BlockPlaceEvent& eventData) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _bumpCharge(::BlockSource& region, ::BlockPos const& pos, ::Player* source, short delta);

    MCAPI static void
    _explode(::Player& player, ::BlockPos const& anchorBlockPos, ::BlockSource& region, ::Level& level);

    MCAPI static bool
    _trySetSpawn(::Player& player, ::BlockPos const& anchorBlockPos, ::BlockSource& region, ::Level& level);

    MCAPI static bool addItem(
        ::Container&       fromContainer,
        int                slot,
        ::ItemStack const& item,
        ::BlockSource&     region,
        ::Block const&     block,
        ::BlockPos const&  pos
    );

    MCAPI static int getChargeLevel(::Block const& block);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& nameId, int id);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI int $getVariant(::Block const& block) const;

    MCAPI void $animateTickBedrockLegacy(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const;

    MCAPI bool $use(::Player& player, ::BlockPos const& anchorBlockPos, uchar) const;

    MCAPI bool $isInteractiveBlock() const;

    MCAPI ::Brightness $getLightEmission(::Block const& block) const;

    MCAPI bool $canSpawnAt(::BlockSource const& region, ::BlockPos const& pos) const;

    MCAPI void $notifySpawnedAt(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI bool $hasComparatorSignal() const;

    MCAPI int $getComparatorSignal(::BlockSource& region, ::BlockPos const& pos, ::Block const& block, uchar dir) const;

    MCAPI void $_addHardCodedBlockComponents(::Experiments const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
