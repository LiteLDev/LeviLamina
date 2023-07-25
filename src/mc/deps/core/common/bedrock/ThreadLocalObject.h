#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Threading {

template <typename T0, typename T1>
class ThreadLocalObject {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEDROCK_THREADING_THREADLOCALOBJECT
public:
    ThreadLocalObject& operator=(ThreadLocalObject const&) = delete;
    ThreadLocalObject(ThreadLocalObject const&)            = delete;
    ThreadLocalObject()                                    = delete;
#endif

public:
};

}; // namespace Bedrock::Threading
