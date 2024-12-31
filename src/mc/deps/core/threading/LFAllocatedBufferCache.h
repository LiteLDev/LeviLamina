#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/LFBufferCache.h"

namespace Bedrock::Threading {

class LFAllocatedBufferCache : public ::Bedrock::Threading::LFBufferCache::BufferAllocator {
public:
    // LFAllocatedBufferCache inner types declare
    // clang-format off
    struct Deleter;
    // clang-format on

    // LFAllocatedBufferCache inner types define
    struct Deleter {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk4e3826;
        // NOLINTEND

    public:
        // prevent constructor by default
        Deleter& operator=(Deleter const&);
        Deleter(Deleter const&);
        Deleter();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnka77749;
    ::ll::UntypedStorage<8, 24> mUnka16329;
    ::ll::UntypedStorage<8, 8>  mUnka842c5;
    ::ll::UntypedStorage<8, 8>  mUnk9af674;
    // NOLINTEND

public:
    // prevent constructor by default
    LFAllocatedBufferCache& operator=(LFAllocatedBufferCache const&);
    LFAllocatedBufferCache(LFAllocatedBufferCache const&);
    LFAllocatedBufferCache();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void* _allocateBuffer() /*override*/;

    // vIndex: 2
    virtual void _deallocateBuffer(void*) /*override*/;

    // vIndex: 0
    virtual ~LFAllocatedBufferCache() /*override*/ = default;
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

} // namespace Bedrock::Threading
