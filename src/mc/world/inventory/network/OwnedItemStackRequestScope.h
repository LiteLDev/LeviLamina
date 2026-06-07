#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/network/ItemStackRequestScreen.h"

// auto generated forward declare list
// clang-format off
class ItemStackNetManagerClient;
class ItemStackRequestAction;
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

#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    OwnedItemStackRequestScope();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI OwnedItemStackRequestScope(
        ::ItemStackNetManagerClient&              manager,
        ::std::shared_ptr<::ItemStackRequestData> result,
        ::ItemStackRequestScreen                  screen
    );

    MCNAPI void addRequestAction(::std::unique_ptr<::ItemStackRequestAction> requestAction) const;

    MCNAPI ~OwnedItemStackRequestScope();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(
        ::ItemStackNetManagerClient&              manager,
        ::std::shared_ptr<::ItemStackRequestData> result,
        ::ItemStackRequestScreen                  screen
    );
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
    // NOLINTEND
};
