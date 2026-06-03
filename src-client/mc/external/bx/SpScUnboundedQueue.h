#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace bx { struct AllocatorI; }
// clang-format on

namespace bx {

class SpScUnboundedQueue {
public:
    // SpScUnboundedQueue inner types declare
    // clang-format off
    struct Node;
    // clang-format on

    // SpScUnboundedQueue inner types define
    struct Node {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, void*>                           m_ptr;
        ::ll::TypedStorage<8, 8, ::bx::SpScUnboundedQueue::Node*> m_next;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::bx::AllocatorI*>               m_allocator;
    ::ll::TypedStorage<8, 8, ::bx::SpScUnboundedQueue::Node*> m_first;
    ::ll::TypedStorage<8, 8, ::bx::SpScUnboundedQueue::Node*> m_divider;
    ::ll::TypedStorage<8, 8, ::bx::SpScUnboundedQueue::Node*> m_last;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~SpScUnboundedQueue();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace bx
