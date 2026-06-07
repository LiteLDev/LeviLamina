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

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCFOLD int getContentsWeight() const;

    MCAPI int getRemainingWeight() const;
#endif

    MCAPI int getTotalWeight() const;

#ifdef LL_PLAT_C
    MCFOLD int getWeightCapacity() const;

    MCAPI bool isEmpty() const;

    MCAPI bool isFull() const;
#endif
    // NOLINTEND
};

} // namespace StorageItemUtility
