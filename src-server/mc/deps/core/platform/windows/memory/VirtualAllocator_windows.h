#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/memory/IVirtualAllocator.h"
#include "mc/platform/Result.h"

namespace Bedrock::Memory {

class VirtualAllocator_windows : public ::Bedrock::Memory::IVirtualAllocator {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ::Bedrock::Result<::Bedrock::Memory::IVirtualAllocator::ReservationInfo>
    reserve(::Bedrock::Memory::IVirtualAllocator::Flags, void*, uint64, uint64) /*override*/;

    // vIndex: 1
    virtual ::Bedrock::Result<void>
    commit(::Bedrock::Memory::IVirtualAllocator::Flags, void*, uint64, uint64, int) /*override*/;

    // vIndex: 2
    virtual ::Bedrock::Result<void> decommit(::Bedrock::Memory::IVirtualAllocator::Flags, void*, uint64) /*override*/;

    // vIndex: 3
    virtual ::Bedrock::Result<void> release(::Bedrock::Memory::IVirtualAllocator::Flags, void*, uint64) /*override*/;

    // vIndex: 4
    virtual ::Bedrock::Memory::IVirtualAllocator::Flags getDefaultFlags() /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Bedrock::Memory
