#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/data/BidirectionalUnorderedMap.h"
#include "mc/world/containers/SparseContainer.h"

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
    // symbol: ?_networkUpdateItem@SparseContainerClient@@QEAAXHAEBVItemStack@@@Z
    MCAPI void _networkUpdateItem(int slot, class ItemStack const& newItem);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?pushSlotPredictionResultMap@SparseContainerClient@@0V?$BidirectionalUnorderedMap@W4PushSlotPredictionResult@SparseContainerClient@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@@B
    MCAPI static class BidirectionalUnorderedMap<::SparseContainerClient::PushSlotPredictionResult, std::string> const
        pushSlotPredictionResultMap;

    // NOLINTEND
};
