#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Threading {

template <typename T0, typename T1>
class ThreadLocalObjectImplementation {

public:
	T0* mPtr; //this+0x0

    // prevent constructor by default
    ThreadLocalObjectImplementation& operator=(ThreadLocalObjectImplementation const&) = delete;
    ThreadLocalObjectImplementation(ThreadLocalObjectImplementation const&)            = delete;
    ThreadLocalObjectImplementation()                                                   = delete;
};

template <typename T0, typename T1 = std::allocator<T0>>
class ThreadLocalObject : public ThreadLocalObjectImplementation<T0, T1> {

public:
    std::function<void(T0*)> mConstructor; // this+0x8

    // prevent constructor by default
    ThreadLocalObject& operator=(ThreadLocalObject const&) = delete;
    ThreadLocalObject(ThreadLocalObject const&)            = delete;
    ThreadLocalObject()                                    = delete;
};

}; // namespace Bedrock::Threading
