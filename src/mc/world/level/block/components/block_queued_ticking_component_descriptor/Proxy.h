#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/DefinitionTrigger.h"

namespace BlockQueuedTickingComponentDescriptor {

struct Proxy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<int>>  mDelayIntervalRange;
    ::ll::TypedStorage<8, 56, ::DefinitionTrigger> mOnTimeDown;
    ::ll::TypedStorage<1, 1, bool>                 mLooping;
    // NOLINTEND

public:
    // prevent constructor by default
    Proxy& operator=(Proxy const&);
    Proxy();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Proxy(::BlockQueuedTickingComponentDescriptor::Proxy const&);

    MCAPI ~Proxy();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::BlockQueuedTickingComponentDescriptor::Proxy const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace BlockQueuedTickingComponentDescriptor
