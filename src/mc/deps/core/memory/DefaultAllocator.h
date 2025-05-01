#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/memory/IMemoryAllocator.h"

namespace Bedrock::Memory {

class DefaultAllocator : public ::Bedrock::Memory::IMemoryAllocator {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void* allocate(uint64) /*override*/;

    // vIndex: 2
    virtual void release(void*) /*override*/;

    // vIndex: 3
    virtual void* alignedAllocate(uint64, uint64) /*override*/;

    // vIndex: 4
    virtual void alignedRelease(void*) /*override*/;

    // vIndex: 5
    virtual uint64 getUsableSize(void*, bool) /*override*/;

    // vIndex: 6
    virtual void* _realloc(::gsl::not_null<void*>, uint64) /*override*/;

    // vIndex: 0
    virtual ~DefaultAllocator() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Bedrock::Memory
