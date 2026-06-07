#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockType.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
class BlockPos;
class BlockSource;
class Random;
namespace BlockEvents { class BlockPlaceEvent; }
namespace BlockEvents { class BlockQueuedTickEvent; }
namespace BlockEvents { class BlockRandomTickEvent; }
// clang-format on

class ChemicalHeatBlock : public ::BlockType {
public:
    // prevent constructor by default
    ChemicalHeatBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual int getExtraRenderLayers() const /*override*/;

    virtual bool canBeUsedInCommands(::BaseGameVersion const& baseGameVersion) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ChemicalHeatBlock(::std::string const& nameId, int id);

    MCAPI bool _melt(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const;

    MCAPI void _tick(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const;

    MCAPI void onPlace(::BlockEvents::BlockPlaceEvent& eventData) const;

    MCAPI void randomTick(::BlockEvents::BlockRandomTickEvent& eventData) const;

    MCAPI void tick(::BlockEvents::BlockQueuedTickEvent& eventData) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::vector<::BlockPos> const& _getRelativeOffsets();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& nameId, int id);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD int $getExtraRenderLayers() const;

    MCFOLD bool $canBeUsedInCommands(::BaseGameVersion const& baseGameVersion) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
