#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::BlockUtils::Task {

struct BlockUtilityPositionEntry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnkf1d246;
    ::ll::UntypedStorage<2, 2>  mUnk5f7ca7;
    ::ll::UntypedStorage<8, 8>  mUnk3a1ec3;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockUtilityPositionEntry& operator=(BlockUtilityPositionEntry const&);
    BlockUtilityPositionEntry(BlockUtilityPositionEntry const&);
    BlockUtilityPositionEntry();
};

} // namespace Editor::BlockUtils::Task
