#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/block_events/BlockEventExecutor.h"

// auto generated forward declare list
// clang-format off
namespace BlockEvents { class BlockPlaceEvent; }
// clang-format on

namespace BlockEvents {

class BlockPlaceEventExecutor : public ::BlockEvents::BlockEventExecutor<::BlockEvents::BlockPlaceEvent> {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual void dispatch(::BlockEvents::BlockPlaceEvent& eventData) const /*override*/;

    // vIndex: 0
    virtual ~BlockPlaceEventExecutor() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $dispatch(::BlockEvents::BlockPlaceEvent& eventData) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace BlockEvents
