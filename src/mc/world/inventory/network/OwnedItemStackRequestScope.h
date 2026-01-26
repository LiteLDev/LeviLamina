#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ItemStackNetManagerClient;
class ItemStackRequestData;
// clang-format on

struct OwnedItemStackRequestScope {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ItemStackNetManagerClient*>               mItemStackNetManagerClient;
    ::ll::TypedStorage<1, 1, bool>                                       mBeganRequest;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ItemStackRequestData>> mResult;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN

    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};
