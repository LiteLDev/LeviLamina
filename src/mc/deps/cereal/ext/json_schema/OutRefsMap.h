#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cereal::ext::internal {

struct OutRefsMap {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, int>> mMap;
    ::ll::TypedStorage<4, 4, uint const>                                mRootSchemaId;
    // NOLINTEND
};

} // namespace cereal::ext::internal
