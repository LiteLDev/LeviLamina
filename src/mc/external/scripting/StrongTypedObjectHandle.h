#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

template <typename T0>
class StrongTypedObjectHandle {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTING_STRONGTYPEDOBJECTHANDLE
public:
    StrongTypedObjectHandle& operator=(StrongTypedObjectHandle const&) = delete;
    StrongTypedObjectHandle(StrongTypedObjectHandle const&)            = delete;
    StrongTypedObjectHandle()                                          = delete;
#endif

public:
};

}; // namespace Scripting
