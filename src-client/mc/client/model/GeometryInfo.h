#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"

// auto generated forward declare list
// clang-format off
class Geometry;
// clang-format on

class GeometryInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::HashedString>               mName;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Geometry>> mPtr;
    // NOLINTEND
};
