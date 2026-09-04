#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace AgentComponents::Actions {

struct QueueItem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>  mUnkf17f98;
    ::ll::UntypedStorage<4, 4>   mUnk9fed68;
    ::ll::UntypedStorage<8, 168> mUnk919642;
    // NOLINTEND

public:
    // prevent constructor by default
    QueueItem& operator=(QueueItem const&);
    QueueItem();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI QueueItem(::AgentComponents::Actions::QueueItem const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::AgentComponents::Actions::QueueItem const&);
    // NOLINTEND
};

} // namespace AgentComponents::Actions
