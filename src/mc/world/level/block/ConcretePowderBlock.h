#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/FallingBlock.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockActor;
class BlockPos;
class BlockSource;
class Experiments;
class HashedString;
class ItemInstance;
namespace BlockEvents { class BlockPlaceEvent; }
namespace mce { class Color; }
// clang-format on

class ConcretePowderBlock : public ::FallingBlock {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 147
    virtual ::mce::Color getDustColor(::Block const& block) const /*override*/;

    // vIndex: 148
    virtual ::std::string getDustParticleName(::Block const& block) const /*override*/;

    // vIndex: 87
    virtual void neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const
        /*override*/;

    // vIndex: 102
    virtual bool shouldStopFalling(::Actor& entity) const /*override*/;

    // vIndex: 90
    virtual ::ItemInstance asItemInstance(::Block const& block, ::BlockActor const*) const /*override*/;

    // vIndex: 131
    virtual void _addHardCodedBlockComponents(::Experiments const&) /*override*/;

    // vIndex: 0
    virtual ~ConcretePowderBlock() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool
    _tryTouchWater(::BlockSource& region, ::BlockPos const& pos, ::std::optional<::HashedString> name) const;

    MCNAPI void onPlace(::BlockEvents::BlockPlaceEvent& eventData) const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::mce::Color $getDustColor(::Block const& block) const;

    MCNAPI ::std::string $getDustParticleName(::Block const& block) const;

    MCNAPI void $neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const;

    MCNAPI bool $shouldStopFalling(::Actor& entity) const;

    MCNAPI ::ItemInstance $asItemInstance(::Block const& block, ::BlockActor const*) const;

    MCNAPI void $_addHardCodedBlockComponents(::Experiments const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
