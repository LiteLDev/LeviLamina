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
    // prevent constructor by default
    TaskQueueImpl& operator=(TaskQueueImpl const&);
    TaskQueueImpl(TaskQueueImpl const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI long Initialize(::XTaskQueuePortObject*, ::XTaskQueuePortObject*);

    MCAPI long Initialize(::XTaskQueueDispatchMode, ::XTaskQueueDispatchMode, bool, bool);

    MCAPI TaskQueueImpl();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void OnTerminationCallback(void*);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
