#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/typeid_t.h"

// auto generated forward declare list
// clang-format off
struct SystemCategory;
// clang-format on

struct EntitySystemsFilter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, ::Bedrock::typeid_t<::SystemCategory>> mIncludeType;
    ::ll::TypedStorage<1, 1, bool>                                  mUseSkipHints;
    ::ll::TypedStorage<1, 1, bool>                                  mUseRemoveHints;
    // NOLINTEND
};
