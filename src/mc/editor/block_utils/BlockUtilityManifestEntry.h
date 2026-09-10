#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::BlockUtils::Task {

struct BlockUtilityManifestEntry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk178eb0;
    ::ll::UntypedStorage<4, 4>  mUnk1b78cd;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockUtilityManifestEntry& operator=(BlockUtilityManifestEntry const&);
    BlockUtilityManifestEntry(BlockUtilityManifestEntry const&);
    BlockUtilityManifestEntry();
};

} // namespace Editor::BlockUtils::Task
