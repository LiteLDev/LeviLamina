#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/memory/IMemoryAllocator.h"

namespace Bedrock::Memory {

class DefaultAllocator : public ::Bedrock::Memory::IMemoryAllocator {
public:
    // prevent constructor by default
    DefaultAllocator& operator=(DefaultAllocator const&);
    DefaultAllocator(DefaultAllocator const&);
    DefaultAllocator();

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
    virtual uint64 getUsableSize(void*) /*override*/;

    // vIndex: 6
    virtual void logCurrentState() /*override*/;

    // vIndex: 7
    virtual void* _realloc(::gsl::not_null<void*>, uint64) /*override*/;

    // vIndex: 0
    virtual ~DefaultAllocator() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void* $allocate(uint64);

    MCAPI void $release(void*);

    MCAPI void* $alignedAllocate(uint64, uint64);

    MCAPI void $alignedRelease(void*);

    MCAPI uint64 $getUsableSize(void*);

    MCAPI void $logCurrentState();

    MCAPI void* $_realloc(::gsl::not_null<void*>, uint64);
    // NOLINTEND
};

} // namespace Bedrock::Memory
