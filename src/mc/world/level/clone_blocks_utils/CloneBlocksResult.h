#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace CloneBlocksUtils {

struct CloneBlocksResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8> mUnk9a7f2f;
    ::ll::UntypedStorage<4, 4> mUnkab24d7;
    // NOLINTEND

public:
    // prevent constructor by default
    CloneBlocksResult& operator=(CloneBlocksResult const&);
    CloneBlocksResult(CloneBlocksResult const&);
    CloneBlocksResult();
};

} // namespace CloneBlocksUtils
