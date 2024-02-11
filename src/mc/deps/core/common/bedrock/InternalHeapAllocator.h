#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/IMemoryAllocator.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Memory { class IMemoryAllocator; }
// clang-format on

namespace Bedrock::Memory {

class InternalHeapAllocator : public ::Bedrock::Memory::IMemoryAllocator {
public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1InternalHeapAllocator@Memory@Bedrock@@UEAA@XZ
    virtual ~InternalHeapAllocator() = default;

    // vIndex: 1, symbol: ?allocate@InternalHeapAllocator@Memory@Bedrock@@UEAAPEAX_K@Z
    virtual void* allocate(uint64 size);

    // vIndex: 2, symbol: ?release@InternalHeapAllocator@Memory@Bedrock@@UEAAXPEAX@Z
    virtual void release(void* ptr);

    // vIndex: 3, symbol: ?alignedAllocate@InternalHeapAllocator@Memory@Bedrock@@UEAAPEAX_K0@Z
    virtual void* alignedAllocate(uint64 size, uint64 alignment);

    // vIndex: 4, symbol: ?alignedRelease@InternalHeapAllocator@Memory@Bedrock@@UEAAXPEAX@Z
    virtual void alignedRelease(void* ptr);

    // vIndex: 5, symbol: ?getUsableSize@InternalHeapAllocator@Memory@Bedrock@@UEAA_KPEAX@Z
    virtual uint64 getUsableSize(void* ptr);

    // vIndex: 6, symbol: ?logCurrentState@InternalHeapAllocator@Memory@Bedrock@@UEAAXXZ
    virtual void logCurrentState();

    // vIndex: 7, symbol: ?_realloc@InternalHeapAllocator@Memory@Bedrock@@EEAAPEAXV?$not_null@PEAX@gsl@@_K@Z
    virtual void* _realloc(gsl::not_null<void*> p, uint64 newSize);

    // NOLINTEND
};

}; // namespace Bedrock::Memory
