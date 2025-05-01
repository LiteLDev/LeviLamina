#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/block_events/BlockEventBase.h"

namespace BlockEvents {

class BlockCancellableEventBase : public ::BlockEvents::BlockEventBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnkc44d17;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockCancellableEventBase& operator=(BlockCancellableEventBase const&);
    BlockCancellableEventBase(BlockCancellableEventBase const&);
    BlockCancellableEventBase();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BlockCancellableEventBase() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace BlockEvents
