#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/FallingBlock.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
class Block;
class BlockPos;
class Player;
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
    MCAPI DragonEggBlock(::std::string const& nameId, int id);

    MCAPI void use(::BlockEvents::BlockPlayerInteractEvent& eventData) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& nameId, int id);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::mce::Color $getDustColor(::Block const&) const;

    MCAPI ::std::string $getDustParticleName(::Block const&) const;

    MCAPI bool $attack(::Player* player, ::BlockPos const& pos) const;

    MCFOLD bool $breaksFallingBlocks(::Block const& block, ::BaseGameVersion const version) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
