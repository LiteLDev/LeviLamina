#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::JSONObject {

class MemoryPage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkf74249;
    ::ll::UntypedStorage<8, 8> mUnkda6988;
    ::ll::UntypedStorage<4, 4> mUnk5d624f;
    ::ll::UntypedStorage<4, 4> mUnk165ea1;
    ::ll::UntypedStorage<8, 8> mUnk221efb;
    ::ll::UntypedStorage<8, 8> mUnkffec1b;
    // NOLINTEND

public:
    // prevent constructor by default
    MemoryPage& operator=(MemoryPage const&);
    MemoryPage(MemoryPage const&);
    MemoryPage();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void* _allocate(
        uint64 (Bedrock::JSONObject::MemoryPage::*allocateFn)(uint64, uint64),
        void* (Bedrock::JSONObject::MemoryPage::*forwardFn)(uint64, uint64),
        uint64 bytes,
        uint64 align
    );

    MCAPI uint64 _tryAllocateBack(uint64 bytes, uint64 align);

    MCAPI uint64 _tryAllocateFront(uint64 bytes, uint64 align);

    MCAPI void* allocateBack(uint64 bytes, uint64 align);

    MCAPI void* allocateFront(uint64 bytes, uint64 align);
    // NOLINTEND
};

} // namespace Bedrock::JSONObject
