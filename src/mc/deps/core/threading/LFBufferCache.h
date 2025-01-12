#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Threading {

class LFBufferCache {
public:
    // LFBufferCache inner types declare
    // clang-format off
    class BufferAllocator;
    // clang-format on

    // LFBufferCache inner types define
    class BufferAllocator {
    public:
        // virtual functions
        // NOLINTBEGIN
        // vIndex: 0
        virtual ~BufferAllocator() = default;

        // vIndex: 1
        virtual void* _allocateBuffer() = 0;

        // vIndex: 2
        virtual void _deallocateBuffer(void*) = 0;
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

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnke12cff;
    ::ll::UntypedStorage<8, 8> mUnkb8d037;
    ::ll::UntypedStorage<8, 8> mUnkbd15d6;
    // NOLINTEND

public:
    // prevent constructor by default
    LFBufferCache& operator=(LFBufferCache const&);
    LFBufferCache(LFBufferCache const&);
    LFBufferCache();
};

} // namespace Bedrock::Threading
