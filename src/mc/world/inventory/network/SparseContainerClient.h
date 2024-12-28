#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/BidirectionalUnorderedMap.h"
#include "mc/world/inventory/network/SparseContainer.h"

// auto generated forward declare list
// clang-format off
class ItemStack;
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
    // prevent constructor by default
    SparseContainerClient& operator=(SparseContainerClient const&);
    SparseContainerClient(SparseContainerClient const&);
    SparseContainerClient();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SparseContainerClient() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _networkUpdateItem(int slot, ::ItemStack const& newItem);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::BidirectionalUnorderedMap<::SparseContainerClient::PushSlotPredictionResult, ::std::string> const&
    pushSlotPredictionResultMap();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
