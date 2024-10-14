#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace BlendingDataFactoryUtil {

struct BorderCellEntry {
public:
    // prevent constructor by default
    BorderCellEntry& operator=(BorderCellEntry const&);
    BorderCellEntry(BorderCellEntry const&);
    BorderCellEntry();

public:
    // NOLINTBEGIN
    MCAPI ~BorderCellEntry();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace BlendingDataFactoryUtil
