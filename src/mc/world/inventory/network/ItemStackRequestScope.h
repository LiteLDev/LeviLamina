#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/events/TextProcessingEventOrigin.h"

// auto generated forward declare list
// clang-format off
class ItemStackNetManagerClient;
class ItemStackRequestAction;
// clang-format on

struct ItemStackRequestScope {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ItemStackNetManagerClient*> mItemStackNetManagerClient;
    ::ll::TypedStorage<1, 1, bool>                         mBeganRequest;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void addRequestAction(::std::unique_ptr<::ItemStackRequestAction> requestAction) const;

    MCNAPI int addRequestToFilterString(::std::string const& stringToFilter, ::TextProcessingEventOrigin origin) const;

    MCNAPI ~ItemStackRequestScope();
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
