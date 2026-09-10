#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/minecraft_renderer/objects/NameTagRenderObject.h"

// auto generated inclusion list
#include "mc/deps/core/memory/LinearAllocator.h"

// auto generated forward declare list
// clang-format off
struct NameTagRenderObject;
// clang-format on

struct NameTagRenderObjectCollection {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::std::vector<::NameTagRenderObject, ::LinearAllocator<::NameTagRenderObject>>> mNameTags;
    // NOLINTEND
};
