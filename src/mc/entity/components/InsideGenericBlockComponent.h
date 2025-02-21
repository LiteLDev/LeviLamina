#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class AABB;
struct InsideBlockData;
// clang-format on

struct InsideGenericBlockComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::InsideBlockData>> mData;
    ::ll::TypedStorage<4, 28, ::std::optional<::AABB>>          mSubstituteAABB;
    ::ll::TypedStorage<4, 4, float>                             mGrow;
    ::ll::TypedStorage<1, 1, bool>                              mHasChunks;
    // NOLINTEND

public:
    // prevent constructor by default
    InsideGenericBlockComponent& operator=(InsideGenericBlockComponent const&);
    InsideGenericBlockComponent(InsideGenericBlockComponent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::InsideGenericBlockComponent& operator=(::InsideGenericBlockComponent&&);
    // NOLINTEND
};
