#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/memory/IMemoryAllocator.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Memory { class IMemoryAllocator; }
// clang-format on

namespace Bedrock::Memory {

class InternalHeapAllocator : public ::Bedrock::Memory::IMemoryAllocator {
public:
    // prevent constructor by default
    InternalHeapAllocator& operator=(InternalHeapAllocator const&);
    InternalHeapAllocator(InternalHeapAllocator const&);
    InternalHeapAllocator();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~InternalHeapAllocator() = default;

    // vIndex: 1
    virtual void* allocate(uint64 size);

    // vIndex: 2
    virtual void release(void* ptr);

    // vIndex: 3
    virtual void* alignedAllocate(uint64 size, uint64 alignment);

    // vIndex: 4
    virtual void alignedRelease(void* ptr);

    // vIndex: 5
    virtual uint64 getUsableSize(void* ptr);

    // vIndex: 6
    virtual void logCurrentState();

    // vIndex: 7
    virtual void* _realloc(gsl::not_null<void*> p, uint64 newSize);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* _realloc$(gsl::not_null<void*> p, uint64 newSize);

    MCAPI void* alignedAllocate$(uint64 size, uint64 alignment);

    MCAPI void alignedRelease$(void* ptr);

    MCAPI void* allocate$(uint64 size);

    MCAPI uint64 getUsableSize$(void* ptr);

    MCAPI void logCurrentState$();

    MCAPI void release$(void* ptr);

    // NOLINTEND
};

}; // namespace Bedrock::Memory
