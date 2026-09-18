#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::BlockUtils::Task {

struct BlockUtilityExtrudeResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>   mUnk1a8964;
    ::ll::UntypedStorage<4, 4>   mUnke2597e;
    ::ll::UntypedStorage<1, 1>   mUnk9cefc3;
    ::ll::UntypedStorage<8, 112> mUnk3b48e7;
    ::ll::UntypedStorage<8, 112> mUnke741e0;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockUtilityExtrudeResult& operator=(BlockUtilityExtrudeResult const&);
    BlockUtilityExtrudeResult(BlockUtilityExtrudeResult const&);
    BlockUtilityExtrudeResult();
};

} // namespace Editor::BlockUtils::Task
