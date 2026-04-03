#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Poi {

struct StorageInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk94a4be;
    ::ll::UntypedStorage<8, 32> mUnkd1eaf2;
    // NOLINTEND

public:
    // prevent constructor by default
    StorageInfo& operator=(StorageInfo const&);
    StorageInfo(StorageInfo const&);
    StorageInfo();
};

} // namespace Poi
