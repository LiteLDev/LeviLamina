#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Threading {

template <typename T, typename Alloc>
class ThreadLocalObject {

public:
    T*                      mPtr;         // this+0x0
    std::function<void(T*)> mConstructor; // this+0x8

    // prevent constructor by default
    ThreadLocalObject& operator=(ThreadLocalObject const&);
    ThreadLocalObject(ThreadLocalObject const&);
    ThreadLocalObject();
};

}; // namespace Bedrock::Threading
