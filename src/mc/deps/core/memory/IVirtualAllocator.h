#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"

namespace Bedrock::Memory {

class IVirtualAllocator {
public:
    // IVirtualAllocator inner types declare
    // clang-format off
    struct Flags;
    struct ReservationInfo;
    // clang-format on

    // IVirtualAllocator inner types define
    struct Flags {
    public:
        // member variables
        // NOLINTBEGIN
        uint mUnkb8649a : 1;
        uint mUnk8510aa : 1;
        uint mUnkd8880b : 1;
        // NOLINTEND

    public:
        // prevent constructor by default
        Flags& operator=(Flags const&);
        Flags(Flags const&);
        Flags();
    };

    struct ReservationInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnke61f86;
        ::ll::UntypedStorage<8, 8> mUnk54d9ce;
        // NOLINTEND

    public:
        // prevent constructor by default
        ReservationInfo& operator=(ReservationInfo const&);
        ReservationInfo(ReservationInfo const&);
        ReservationInfo();
    };

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ::Bedrock::Result<::Bedrock::Memory::IVirtualAllocator::ReservationInfo>
    reserve(::Bedrock::Memory::IVirtualAllocator::Flags, void*, uint64, uint64) = 0;

    // vIndex: 1
    virtual ::Bedrock::Result<void> commit(::Bedrock::Memory::IVirtualAllocator::Flags, void*, uint64, uint64, int) = 0;

    // vIndex: 2
    virtual ::Bedrock::Result<void> decommit(::Bedrock::Memory::IVirtualAllocator::Flags, void*, uint64) = 0;

    // vIndex: 3
    virtual ::Bedrock::Result<void> release(::Bedrock::Memory::IVirtualAllocator::Flags, void*, uint64) = 0;

    // vIndex: 4
    virtual ::Bedrock::Memory::IVirtualAllocator::Flags getDefaultFlags() = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Bedrock::Memory
