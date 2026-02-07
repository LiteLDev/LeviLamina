#pragma once

#include "mc/_HeaderOutputPredefine.h"

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

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void addTags(::std::vector<::NameTagRenderObject>&& tags);

    MCAPI ~NameTagRenderObjectCollection();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
