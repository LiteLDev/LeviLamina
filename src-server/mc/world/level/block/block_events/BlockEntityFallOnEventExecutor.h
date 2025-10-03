#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/block_events/BlockEventExecutor.h"

// auto generated forward declare list
// clang-format off
namespace BlockEvents { class BlockEntityFallOnEvent; }
// clang-format on

namespace BlockEvents {

class BlockEntityFallOnEventExecutor : public ::BlockEvents::BlockEventExecutor<::BlockEvents::BlockEntityFallOnEvent> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mShouldCallBase;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual void dispatch(::BlockEvents::BlockEntityFallOnEvent& eventData) const /*override*/;

    // vIndex: 0
    virtual ~BlockEntityFallOnEventExecutor() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $dispatch(::BlockEvents::BlockEntityFallOnEvent& eventData) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace BlockEvents
