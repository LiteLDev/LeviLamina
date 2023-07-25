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

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SPARSECONTAINERCLIENT
public:
    SparseContainerClient& operator=(SparseContainerClient const&) = delete;
    SparseContainerClient(SparseContainerClient const&)            = delete;
    SparseContainerClient()                                        = delete;
#endif

public:
    /**
     * @symbol ?_networkUpdateItem\@SparseContainerClient\@\@QEAAXHAEBVItemStack\@\@\@Z
     */
    MCAPI void _networkUpdateItem(int, class ItemStack const&);

    // private:

private:
    /**
     * @symbol
     * ?pushSlotPredictionResultMap\@SparseContainerClient\@\@0V?$BidirectionalUnorderedMap\@W4PushSlotPredictionResult\@SparseContainerClient\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@\@B
     */
    MCAPI static class BidirectionalUnorderedMap<
        enum class SparseContainerClient::PushSlotPredictionResult,
        std::string> const pushSlotPredictionResultMap;
};
