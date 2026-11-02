#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/FallingBlock.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
class Block;
class BlockPos;
class BlockSource;
class Player;
class Random;
namespace BlockEvents { class BlockPlayerInteractEvent; }
namespace mce { class Color; }
// clang-format on

class DragonEggBlock : public ::FallingBlock {
public:
    // prevent constructor by default
    DragonEggBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::mce::Color getDustColor(::Block const&) const /*override*/;

    virtual ::std::string getDustParticleName(::Block const&) const /*override*/;

    virtual bool attack(::Player* player, ::BlockPos const& pos) const /*override*/;

    virtual bool breaksFallingBlocks(::Block const& block, ::BaseGameVersion const version) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DragonEggBlock(::std::string const& nameId, int id);

    MCNAPI void use(::BlockEvents::BlockPlayerInteractEvent& eventData) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _attemptTeleport(::BlockSource& region, ::Random& random, ::BlockPos const& pos);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::string const& nameId, int id);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::mce::Color $getDustColor(::Block const&) const;

    MCNAPI ::std::string $getDustParticleName(::Block const&) const;

    MCNAPI bool $attack(::Player* player, ::BlockPos const& pos) const;

    MCNAPI bool $breaksFallingBlocks(::Block const& block, ::BaseGameVersion const version) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
