#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ColumnUtils {

struct ColumnRange {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, ::std::optional<int>> start;
    ::ll::TypedStorage<4, 8, ::std::optional<int>> end;
    // NOLINTEND
};

} // namespace ColumnUtils
