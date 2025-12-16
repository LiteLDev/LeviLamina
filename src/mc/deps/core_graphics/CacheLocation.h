#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core_graphics/CacheOrigin.h"

namespace cg {

struct CacheLocation {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>> mPath;
    ::ll::TypedStorage<1, 1, ::cg::CacheOrigin>                  mOrigin;
    // NOLINTEND
};

} // namespace cg
