/**
 * @file  SparseContainerClient.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SparseContainerClient.
 *
 */
class SparseContainerClient {

#define AFTER_EXTRA
// Add Member There
public:
enum class PushSlotPredictionResult;

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SPARSECONTAINERCLIENT
public:
    class SparseContainerClient& operator=(class SparseContainerClient const &) = delete;
    SparseContainerClient(class SparseContainerClient const &) = delete;
    SparseContainerClient() = delete;
#endif

public:
    /**
     * @symbol  ?_networkUpdateItem\@SparseContainerClient\@\@QEAAXHAEBVItemStack\@\@\@Z
     */
    MCAPI void _networkUpdateItem(int, class ItemStack const &);

//private:

private:
    /**
     * @symbol  ?pushSlotPredictionResultMap\@SparseContainerClient\@\@0V?$BidirectionalUnorderedMap\@W4PushSlotPredictionResult\@SparseContainerClient\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@\@B
     */
    MCAPI static class BidirectionalUnorderedMap<enum class SparseContainerClient::PushSlotPredictionResult, std::string> const pushSlotPredictionResultMap;

};