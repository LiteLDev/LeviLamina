#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

template <typename T0>
struct TypedObjectHandle {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTING_TYPEDOBJECTHANDLE
public:
    TypedObjectHandle& operator=(TypedObjectHandle const&) = delete;
    TypedObjectHandle(TypedObjectHandle const&)            = delete;
    TypedObjectHandle()                                    = delete;
#endif

public:
};

}; // namespace Scripting
