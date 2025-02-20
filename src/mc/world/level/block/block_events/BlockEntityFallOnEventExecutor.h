#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/block_events/BlockEventExecutor.h"

// auto generated forward declare list
// clang-format off
namespace BlockEvents { class BlockEventBase; }
// clang-format on

namespace BlockEvents {

class BlockEntityFallOnEventExecutor : public ::BlockEvents::BlockEventExecutor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk44dade;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockEntityFallOnEventExecutor& operator=(BlockEntityFallOnEventExecutor const&);
    BlockEntityFallOnEventExecutor(BlockEntityFallOnEventExecutor const&);
    BlockEntityFallOnEventExecutor();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void dispatch(::BlockEvents::BlockEventBase& eventData) const /*override*/;

    // vIndex: 0
    virtual ~BlockEntityFallOnEventExecutor() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $dispatch(::BlockEvents::BlockEventBase& eventData) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace BlockEvents
