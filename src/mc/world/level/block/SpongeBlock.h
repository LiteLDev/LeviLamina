#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockLegacy.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class Experiments;
class Material;
class Random;
namespace BlockEvents { class BlockPlaceEvent; }
// clang-format on

class SpongeBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    SpongeBlock& operator=(SpongeBlock const&);
    SpongeBlock(SpongeBlock const&);
    SpongeBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 136
    virtual void tick(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const /*override*/;

    // vIndex: 123
    virtual void animateTickBedrockLegacy(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const
        /*override*/;

    // vIndex: 87
    virtual void neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const
        /*override*/;

    // vIndex: 131
    virtual void _addHardCodedBlockComponents(::Experiments const&) /*override*/;

    // vIndex: 0
    virtual ~SpongeBlock() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SpongeBlock(::std::string const& nameId, int id, ::Material const& material);

    MCAPI void _attemptAbsorbWater(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI void _evaporateWater(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI bool _performAbsorbWater(::BlockSource& region, ::BlockPos const& startPos) const;

    MCAPI void _setShouldDry(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI void _spawnAbsorbParticles(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI void onPlace(::BlockEvents::BlockPlaceEvent& eventData) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& nameId, int id, ::Material const& material);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $tick(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const;

    MCAPI void $animateTickBedrockLegacy(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const;

    MCAPI void $neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const;

    MCAPI void $_addHardCodedBlockComponents(::Experiments const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
