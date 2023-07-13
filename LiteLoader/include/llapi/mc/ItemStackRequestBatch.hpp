/**
 * @file  ItemStackRequestBatch.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Bedrock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ItemStackRequestBatch.
 *
 */
class ItemStackRequestBatch {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMSTACKREQUESTBATCH
public:
    class ItemStackRequestBatch& operator=(class ItemStackRequestBatch const &) = delete;
    ItemStackRequestBatch(class ItemStackRequestBatch const &) = delete;
    ItemStackRequestBatch() = delete;
#endif

public:
    /**
     * @symbol ?write\@ItemStackRequestBatch\@\@QEBAXAEAVBinaryStream\@\@\@Z
     */
    MCAPI void write(class BinaryStream &) const;
    /**
     * @symbol ??1ItemStackRequestBatch\@\@QEAA\@XZ
     */
    MCAPI ~ItemStackRequestBatch();
    /**
     * @symbol ?read\@ItemStackRequestBatch\@\@SA?AV?$Result\@V?$unique_ptr\@VItemStackRequestBatch\@\@U?$default_delete\@VItemStackRequestBatch\@\@\@std\@\@\@std\@\@Verror_code\@2\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    MCAPI static class Bedrock::Result<std::unique_ptr<class ItemStackRequestBatch>, class std::error_code> read(class ReadOnlyBinaryStream &);

};
