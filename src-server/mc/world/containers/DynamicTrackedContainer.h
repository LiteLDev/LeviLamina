#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class LockingFillingContainer;
class StorageItemContainerModel;
// clang-format on

struct DynamicTrackedContainer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::StorageItemContainerModel>> mModel;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::LockingFillingContainer>> mBackingContainer;
    ::ll::TypedStorage<1, 1, bool> mExpired;
    ::ll::TypedStorage<1, 1, bool> mIsValid;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~DynamicTrackedContainer();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};
