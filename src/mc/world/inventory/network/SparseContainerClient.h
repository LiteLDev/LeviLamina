#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/BidirectionalUnorderedMap.h"
#include "mc/world/inventory/network/SparseContainer.h"

class SparseContainerClient : public ::SparseContainer {
public:
    // SparseContainerClient inner types define
    enum class PushSlotPredictionResult {};

public:
    // prevent constructor by default
    SparseContainerClient& operator=(SparseContainerClient const&);
    SparseContainerClient(SparseContainerClient const&);
    SparseContainerClient();

public:
    // NOLINTBEGIN
    MCAPI void _networkUpdateItem(int slot, class ItemStack const& newItem);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static class BidirectionalUnorderedMap<::SparseContainerClient::PushSlotPredictionResult, std::string> const&
    pushSlotPredictionResultMap();

    // NOLINTEND
};
