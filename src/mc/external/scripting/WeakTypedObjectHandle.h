#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

template <typename T0>
class WeakTypedObjectHandle {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTING_WEAKTYPEDOBJECTHANDLE
public:
    WeakTypedObjectHandle& operator=(WeakTypedObjectHandle const&) = delete;
    WeakTypedObjectHandle(WeakTypedObjectHandle const&)            = delete;
    WeakTypedObjectHandle()                                        = delete;
#endif

public:
};

}; // namespace Scripting
