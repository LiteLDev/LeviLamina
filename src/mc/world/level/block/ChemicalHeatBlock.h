#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockType.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
class BlockPos;
class BlockSource;
class Experiments;
class Random;
namespace BlockEvents { class BlockPlaceEvent; }
namespace BlockEvents { class BlockQueuedTickEvent; }
namespace BlockEvents { class BlockRandomTickEvent; }
// clang-format on

class ChemicalHeatBlock : public ::BlockType {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 140
    virtual int getExtraRenderLayers() const /*override*/;

    // vIndex: 56
    virtual bool canBeUsedInCommands(::BaseGameVersion const& baseGameVersion) const /*override*/;

    // vIndex: 131
    virtual void _addHardCodedBlockComponents(::Experiments const&) /*override*/;

    // vIndex: 0
    virtual ~ChemicalHeatBlock() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _queueTick(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const;

    MCNAPI void _tick(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const;

    MCNAPI void onPlace(::BlockEvents::BlockPlaceEvent& eventData) const;

    MCNAPI void randomTick(::BlockEvents::BlockRandomTickEvent& eventData) const;

    MCNAPI void tick(::BlockEvents::BlockQueuedTickEvent& eventData) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::vector<::BlockPos> const& _getRelativeOffsets();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI int $getExtraRenderLayers() const;

    MCNAPI bool $canBeUsedInCommands(::BaseGameVersion const& baseGameVersion) const;

    MCNAPI void $_addHardCodedBlockComponents(::Experiments const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
