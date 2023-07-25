#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct ObjectHandle {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTING_OBJECTHANDLE
public:
    ObjectHandle& operator=(ObjectHandle const&) = delete;
    ObjectHandle(ObjectHandle const&)            = delete;
    ObjectHandle()                               = delete;
#endif

public:
};

}; // namespace Scripting
