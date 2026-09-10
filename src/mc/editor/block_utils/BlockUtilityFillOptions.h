#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::BlockUtils::Task {

struct BlockUtilityFillOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk811fde;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockUtilityFillOptions& operator=(BlockUtilityFillOptions const&);
    BlockUtilityFillOptions(BlockUtilityFillOptions const&);
    BlockUtilityFillOptions();
};

} // namespace Editor::BlockUtils::Task
