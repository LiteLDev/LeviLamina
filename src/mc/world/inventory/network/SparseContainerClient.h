#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/data/BidirectionalUnorderedMap.h"

class SparseContainerClient {
public:
    // SparseContainerClient inner types declare
    // clang-format off

    // clang-format on

    // SparseContainerClient inner types define
    enum class PushSlotPredictionResult {};

public:
    // prevent constructor by default
    SparseContainerClient& operator=(SparseContainerClient const&) = delete;
    SparseContainerClient(SparseContainerClient const&)            = delete;
    SparseContainerClient()                                        = delete;

public:
    /**
     * @symbol ?_networkUpdateItem\@SparseContainerClient\@\@QEAAXHAEBVItemStack\@\@\@Z
     */
    MCAPI void _networkUpdateItem(int, class ItemStack const&); // NOLINT

    // private:

private:
    /**
     * @symbol
     * ?pushSlotPredictionResultMap\@SparseContainerClient\@\@0V?$BidirectionalUnorderedMap\@W4PushSlotPredictionResult\@SparseContainerClient\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@\@B
     */
    MCAPI static class BidirectionalUnorderedMap<
        enum class SparseContainerClient::PushSlotPredictionResult,
        std::string> const pushSlotPredictionResultMap; // NOLINT
};
