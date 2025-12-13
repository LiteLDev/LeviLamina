#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockType.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockSource;
class Experiments;
class Level;
class Player;
struct BlockAnimateTickData;
struct Brightness;
namespace BlockEvents { class BlockPlaceEvent; }
namespace BlockEvents { class BlockPlayerInteractEvent; }
// clang-format on

class RespawnAnchorBlock : public ::BlockType {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual int getVariant(::Block const& block) const /*override*/;

    virtual void animateTickBedrockLegacy(::BlockAnimateTickData const& tickData) const /*override*/;

    virtual bool isInteractiveBlock() const /*override*/;

    virtual ::Brightness getLightEmission(::Block const& block) const /*override*/;

    virtual bool canSpawnAt(::BlockSource const& region, ::BlockPos const& pos) const /*override*/;

    virtual void notifySpawnedAt(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    virtual bool hasComparatorSignal() const /*override*/;

    virtual int getComparatorSignal(::BlockSource& region, ::BlockPos const& pos, ::Block const& block, uchar dir) const
        /*override*/;

    virtual void _addHardCodedBlockComponents(::Experiments const&) /*override*/;

    virtual ~RespawnAnchorBlock() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void onPlace(::BlockEvents::BlockPlaceEvent& eventData) const;

    MCAPI void use(::BlockEvents::BlockPlayerInteractEvent& eventData) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _bumpCharge(::BlockSource& region, ::BlockPos const& pos, ::Player* source, short delta);

    MCAPI static void
    _explode(::Player& player, ::BlockPos const& anchorBlockPos, ::BlockSource& region, ::Level& level);

    MCAPI static bool
    _trySetSpawn(::Player& player, ::BlockPos const& anchorBlockPos, ::BlockSource& region, ::Level& level);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI int $getVariant(::Block const& block) const;

    MCAPI void $animateTickBedrockLegacy(::BlockAnimateTickData const& tickData) const;

    MCFOLD bool $isInteractiveBlock() const;

    MCAPI ::Brightness $getLightEmission(::Block const& block) const;

    MCAPI bool $canSpawnAt(::BlockSource const& region, ::BlockPos const& pos) const;

    MCAPI void $notifySpawnedAt(::BlockSource& region, ::BlockPos const& pos) const;

    MCFOLD bool $hasComparatorSignal() const;

    MCAPI int $getComparatorSignal(::BlockSource& region, ::BlockPos const& pos, ::Block const& block, uchar dir) const;

    MCAPI void $_addHardCodedBlockComponents(::Experiments const&);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
