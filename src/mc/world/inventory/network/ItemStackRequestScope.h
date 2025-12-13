#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/events/TextProcessingEventOrigin.h"

// auto generated forward declare list
// clang-format off
class ItemStackRequestAction;
// clang-format on

struct ItemStackRequestScope {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnka0dab6;
    ::ll::UntypedStorage<1, 1> mUnk522815;
    // NOLINTEND

public:
    // prevent constructor by default
    ItemStackRequestScope& operator=(ItemStackRequestScope const&);
    ItemStackRequestScope(ItemStackRequestScope const&);
    ItemStackRequestScope();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C void addRequestAction(::std::unique_ptr<::ItemStackRequestAction> requestAction) const;

    MCNAPI_C int
    addRequestToFilterString(::std::string const& stringToFilter, ::TextProcessingEventOrigin origin) const;

    MCNAPI_C ~ItemStackRequestScope();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};
