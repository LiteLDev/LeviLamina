#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace StorageItemUtility {

class StorageItemWeightData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mOwnWeight;
    ::ll::TypedStorage<4, 4, int> mContentsWeight;
    ::ll::TypedStorage<4, 4, int> mContentsWeightLimit;
    // NOLINTEND

};

}
