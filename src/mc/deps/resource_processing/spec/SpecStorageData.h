#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Resources::internal {

struct SpecStorageData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk345924;
    ::ll::UntypedStorage<8, 64> mUnk31d6f2;
    ::ll::UntypedStorage<8, 24> mUnke45d6d;
    // NOLINTEND

public:
    // prevent constructor by default
    SpecStorageData& operator=(SpecStorageData const&);
    SpecStorageData(SpecStorageData const&);
    SpecStorageData();
};

} // namespace Bedrock::Resources::internal
