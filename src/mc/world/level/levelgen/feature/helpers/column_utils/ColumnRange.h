#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ColumnUtils {

struct ColumnRange {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8> mUnke369c2;
    ::ll::UntypedStorage<4, 8> mUnk2d6bb4;
    // NOLINTEND

public:
    // prevent constructor by default
    ColumnRange& operator=(ColumnRange const&);
    ColumnRange(ColumnRange const&);
    ColumnRange();
};

} // namespace ColumnUtils
