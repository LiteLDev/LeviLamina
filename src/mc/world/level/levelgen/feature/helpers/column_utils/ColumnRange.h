#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ColumnUtils {

struct ColumnRange {
public:
    // prevent constructor by default
    ColumnRange& operator=(ColumnRange const&);
    ColumnRange(ColumnRange const&);
    ColumnRange();
};

}; // namespace ColumnUtils
