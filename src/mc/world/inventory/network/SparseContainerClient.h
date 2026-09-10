#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/BidirectionalUnorderedMap.h"
#include "mc/world/inventory/network/SparseContainer.h"
#include "mc/world/inventory/network/TypedClientNetId.h"

// auto generated forward declare list
// clang-format off
class ItemStack;
struct ItemStackRequestIdTag;
// clang-format on

class SparseContainerClient : public ::SparseContainer {
public:
    // SparseContainerClient inner types define
    enum class PushSlotPredictionResult : int {
        Succeeded                  = 0,
        FailedWithFuturePrediction = 1,
        FailedWithError            = 2,
    };

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SparseContainerClient() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _networkUpdateItem(int slot, ::ItemStack const& newItem);

#ifdef LL_PLAT_C
    MCNAPI ::ItemStack const&
    _setCreatedItem(::ItemStackRequestId const& currentRequestId, int slot, ::ItemStack const& item);
#endif
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::BidirectionalUnorderedMap<::SparseContainerClient::PushSlotPredictionResult, ::std::string> const&
    pushSlotPredictionResultMap();
    // NOLINTEND
};
