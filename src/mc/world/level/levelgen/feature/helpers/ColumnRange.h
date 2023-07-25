#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ColumnUtils {

struct ColumnRange {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COLUMNUTILS_COLUMNRANGE
public:
    ColumnRange& operator=(ColumnRange const&) = delete;
    ColumnRange(ColumnRange const&)            = delete;
    ColumnRange()                              = delete;
#endif

public:
};

}; // namespace ColumnUtils
