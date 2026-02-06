#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct StorageManagementScreenData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mScrollToFocus;
    ::ll::TypedStorage<1, 1, bool> mNewItemSelected;
    ::ll::TypedStorage<1, 1, bool> mHasLoaded;
    ::ll::TypedStorage<1, 1, bool> mMultiSelectEnabled;
    ::ll::TypedStorage<1, 1, bool> mModalVisible;
    // NOLINTEND
};
