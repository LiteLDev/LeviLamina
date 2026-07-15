#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockType.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
struct BlockAnimateTickData;
namespace BlockEvents { class BlockPlaceEvent; }
namespace BlockEvents { class BlockQueuedTickEvent; }
// clang-format on

class SpongeBlock : public ::BlockType {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void animateTickBedrockLegacy(::BlockAnimateTickData const& tickData) const /*override*/;

    virtual void neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const
        /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void onPlace(::BlockEvents::BlockPlaceEvent& eventData) const;

    MCAPI void tick(::BlockEvents::BlockQueuedTickEvent& eventData) const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $animateTickBedrockLegacy(::BlockAnimateTickData const& tickData) const;

    MCAPI void $neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
