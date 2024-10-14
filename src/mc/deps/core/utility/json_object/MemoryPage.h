#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::JSONObject { class Document; }
// clang-format on

namespace Bedrock::JSONObject {

class MemoryPage {
public:
    // prevent constructor by default
    MemoryPage& operator=(MemoryPage const&);
    MemoryPage(MemoryPage const&);
    MemoryPage();

public:
    // NOLINTBEGIN
    MCAPI
    MemoryPage(gsl::not_null<class Bedrock::JSONObject::Document*>, class Bedrock::JSONObject::MemoryPage*, uint, uint);

    MCAPI void* allocateBack(uint64 bytes, uint64 align);

    MCAPI void* allocateFront(uint64 bytes, uint64 align);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void* _allocate(
        uint64 (Bedrock::JSONObject::MemoryPage::*allocateFn)(uint64, uint64),
        void* (Bedrock::JSONObject::MemoryPage::*forwardFn)(uint64, uint64),
        uint64 bytes,
        uint64 align
    );

    MCAPI uint64 _tryAllocateBack(uint64 bytes, uint64 align);

    MCAPI uint64 _tryAllocateFront(uint64 bytes, uint64 align);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    // NOLINTEND
};

}; // namespace Bedrock::JSONObject
