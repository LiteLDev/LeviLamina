#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::BlockUtils::Task {

struct BlockUtilitySubChunkBatch {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnkfa2329;
    ::ll::UntypedStorage<8, 24> mUnk95fdd0;
    ::ll::UntypedStorage<8, 24> mUnkbfa3b9;
    ::ll::UntypedStorage<8, 24> mUnk28a76f;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockUtilitySubChunkBatch& operator=(BlockUtilitySubChunkBatch const&);
    BlockUtilitySubChunkBatch(BlockUtilitySubChunkBatch const&);
    BlockUtilitySubChunkBatch();
};

} // namespace Editor::BlockUtils::Task
