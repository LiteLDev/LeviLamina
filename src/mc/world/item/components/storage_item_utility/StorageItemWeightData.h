#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace StorageItemUtility {

class StorageItemWeightData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk6c94ba;
    ::ll::UntypedStorage<4, 4> mUnk57b021;
    ::ll::UntypedStorage<4, 4> mUnk36aa4f;
    // NOLINTEND

public:
    // prevent constructor by default
    StorageItemWeightData& operator=(StorageItemWeightData const&);
    StorageItemWeightData(StorageItemWeightData const&);
    StorageItemWeightData();
};

} // namespace StorageItemUtility
