#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_21_20 {

struct DimensionPaddingRange {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk5e91af;
    ::ll::UntypedStorage<4, 4> mUnkd4c9b4;
    // NOLINTEND

public:
    // prevent constructor by default
    DimensionPaddingRange& operator=(DimensionPaddingRange const&);
    DimensionPaddingRange(DimensionPaddingRange const&);
    DimensionPaddingRange();
};

} // namespace SharedTypes::v1_21_20
