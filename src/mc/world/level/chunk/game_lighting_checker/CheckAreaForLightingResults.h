#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
// clang-format on

namespace GameLightingChecker {

struct CheckAreaForLightingResults {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockPos>> mErrorList;
    ::ll::TypedStorage<8, 8, uint64>                     mNumBlocksChecked;
    ::ll::TypedStorage<1, 1, bool>                       mSuccess;
    // NOLINTEND
};

} // namespace GameLightingChecker
