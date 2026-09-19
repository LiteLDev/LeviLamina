#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::BlockUtils::Task {

struct BlockUtilityChunkBatch {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk2b782f;
    ::ll::UntypedStorage<8, 24> mUnkb3b80d;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockUtilityChunkBatch& operator=(BlockUtilityChunkBatch const&);
    BlockUtilityChunkBatch(BlockUtilityChunkBatch const&);
    BlockUtilityChunkBatch();
};

} // namespace Editor::BlockUtils::Task
