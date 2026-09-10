#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/inventory/network/ItemStackRequestData.h"

// auto generated forward declare list
// clang-format off
class ItemStackRequestData;
// clang-format on

class ItemStackRequestBatch {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::ItemStackRequestData>>> mRequests;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void addDeserializedRequest(::std::unique_ptr<::ItemStackRequestData> request);

    MCAPI void addRequest(::std::unique_ptr<::ItemStackRequestData> request);
#endif
    // NOLINTEND
};
