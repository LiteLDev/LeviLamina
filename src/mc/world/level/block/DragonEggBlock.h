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
namespace mce { class Color; }
// clang-format on

class DragonEggBlock : public ::FallingBlock {
public:
    // prevent constructor by default
    DragonEggBlock& operator=(DragonEggBlock const&);
    DragonEggBlock(DragonEggBlock const&);
    DragonEggBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 151
    virtual ::mce::Color getDustColor(::Block const&) const /*override*/;

    // vIndex: 152
    virtual ::std::string getDustParticleName(::Block const&) const /*override*/;

    // vIndex: 95
    virtual bool attack(::Player* player, ::BlockPos const& pos) const /*override*/;

    // vIndex: 139
    virtual bool use(::Player& player, ::BlockPos const& pos, uchar) const /*override*/;

    // vIndex: 84
    virtual bool breaksFallingBlocks(::Block const& block, ::BaseGameVersion const version) const /*override*/;

    // vIndex: 0
    virtual ~DragonEggBlock() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI DragonEggBlock(::std::string const& nameId, int id);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _attemptTeleport(::BlockSource& region, ::Random& random, ::BlockPos const& pos);
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
    MCAPI ::mce::Color $getDustColor(::Block const&) const;

    MCAPI ::std::string $getDustParticleName(::Block const&) const;

    MCAPI bool $attack(::Player* player, ::BlockPos const& pos) const;

    MCAPI bool $use(::Player& player, ::BlockPos const& pos, uchar) const;

    MCAPI bool $breaksFallingBlocks(::Block const& block, ::BaseGameVersion const version) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
