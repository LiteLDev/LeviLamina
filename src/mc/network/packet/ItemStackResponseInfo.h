#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/network/ItemStackNetResult.h"
#include "mc/world/inventory/network/TypedClientNetId.h"

// auto generated forward declare list
// clang-format off
struct ItemStackRequestIdTag;
struct ItemStackResponseContainerInfo;
// clang-format on

struct ItemStackResponseInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::ItemStackNetResult>                             mResult;
    ::ll::TypedStorage<4, 16, ::ItemStackRequestId>                            mClientRequestId;
    ::ll::TypedStorage<8, 24, ::std::vector<::ItemStackResponseContainerInfo>> mContainers;
    // NOLINTEND

public:
    // prevent constructor by default
    ItemStackResponseInfo& operator=(ItemStackResponseInfo const&);
    ItemStackResponseInfo(ItemStackResponseInfo const&);
    ItemStackResponseInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ItemStackResponseInfo(::ItemStackResponseInfo&&);

    MCAPI ~ItemStackResponseInfo();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ItemStackResponseInfo&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
