#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::BlockUtils::Task {

struct BlockUtilityFloodSearchOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk9834f8;
    ::ll::UntypedStorage<1, 1>  mUnk4409c2;
    ::ll::UntypedStorage<8, 24> mUnkf4fc30;
    ::ll::UntypedStorage<8, 8>  mUnk7578a5;
    ::ll::UntypedStorage<1, 1>  mUnk184914;
    ::ll::UntypedStorage<4, 28> mUnk468f40;
    ::ll::UntypedStorage<1, 1>  mUnkccece0;
    ::ll::UntypedStorage<1, 2>  mUnke0a02f;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockUtilityFloodSearchOptions& operator=(BlockUtilityFloodSearchOptions const&);
    BlockUtilityFloodSearchOptions(BlockUtilityFloodSearchOptions const&);
    BlockUtilityFloodSearchOptions();
};

} // namespace Editor::BlockUtils::Task
