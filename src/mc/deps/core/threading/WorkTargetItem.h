#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Threading::Burst::Details {

struct WorkTargetItem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk5e9a9e;
    ::ll::UntypedStorage<8, 8> mUnk2a3809;
    // NOLINTEND

public:
    // prevent constructor by default
    WorkTargetItem& operator=(WorkTargetItem const&);
    WorkTargetItem(WorkTargetItem const&);
    WorkTargetItem();
};

} // namespace Bedrock::Threading::Burst::Details
