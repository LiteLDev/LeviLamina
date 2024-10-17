#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace BlockTraitConversionUtils {

struct ConvertedSet {
public:
    // prevent constructor by default
    ConvertedSet& operator=(ConvertedSet const&);
    ConvertedSet(ConvertedSet const&);
    ConvertedSet();

public:
    // NOLINTBEGIN
    MCAPI ~ConvertedSet();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace BlockTraitConversionUtils
