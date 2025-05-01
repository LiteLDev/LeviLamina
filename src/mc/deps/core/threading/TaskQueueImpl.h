#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/XTaskQueueDispatchMode.h"

// auto generated forward declare list
// clang-format off
struct XTaskQueuePortObject;
// clang-format on

class TaskQueueImpl {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI long Initialize(::XTaskQueuePortObject*, ::XTaskQueuePortObject*);

    MCNAPI long Initialize(::XTaskQueueDispatchMode, ::XTaskQueueDispatchMode, bool, bool);

    MCNAPI TaskQueueImpl();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void OnTerminationCallback(void*);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
