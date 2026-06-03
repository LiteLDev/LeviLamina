#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/bx/Semaphore.h"
#include "mc/external/bx/SpScUnboundedQueue.h"

namespace bx {

class SpScBlockingUnboundedQueue {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 128, ::bx::Semaphore>         m_count;
    ::ll::TypedStorage<8, 32, ::bx::SpScUnboundedQueue> m_queue;
    // NOLINTEND
};

} // namespace bx
