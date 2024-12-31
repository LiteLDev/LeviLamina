#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Memory {

class IMemoryAllocator {
public:
    // prevent constructor by default
    IMemoryAllocator& operator=(IMemoryAllocator const&);
    IMemoryAllocator(IMemoryAllocator const&);
    IMemoryAllocator();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IMemoryAllocator() = default;

    // vIndex: 1
    virtual void* allocate(uint64) = 0;

    // vIndex: 2
    virtual void release(void*) = 0;

    // vIndex: 3
    virtual void* alignedAllocate(uint64, uint64) = 0;

    // vIndex: 4
    virtual void alignedRelease(void*) = 0;

    // vIndex: 5
    virtual uint64 getUsableSize(void*) = 0;

    // vIndex: 6
    virtual void logCurrentState() = 0;

    // vIndex: 7
    virtual void* _realloc(::gsl::not_null<void*>, uint64) = 0;
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
