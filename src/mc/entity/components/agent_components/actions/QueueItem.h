#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace AgentComponents::Actions {

struct QueueItem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>  mUnkd8f0ed;
    ::ll::UntypedStorage<4, 4>   mUnk9fed68;
    ::ll::UntypedStorage<8, 168> mUnk919642;
    // NOLINTEND

public:
    // prevent constructor by default
    QueueItem& operator=(QueueItem const&);
    QueueItem(QueueItem const&);
    QueueItem();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI QueueItem(::AgentComponents::Actions::QueueItem&&);

    MCNAPI ~QueueItem();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::AgentComponents::Actions::QueueItem&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace AgentComponents::Actions
