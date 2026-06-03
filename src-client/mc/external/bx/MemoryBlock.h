#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/bx/MemoryBlockI.h"

// auto generated forward declare list
// clang-format off
namespace bx { struct AllocatorI; }
// clang-format on

namespace bx {

class MemoryBlock : public ::bx::MemoryBlockI {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::bx::AllocatorI*> m_allocator;
    ::ll::TypedStorage<8, 8, void*>             m_data;
    ::ll::TypedStorage<4, 4, uint>              m_size;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MemoryBlock() = default;

    virtual void* more(uint) /*override*/;

    virtual uint getSize() /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace bx
