/**
 * @file  ItemStackRequestBatch.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @symbol ?read\@ItemStackRequestBatch\@\@SA?AV?$unique_ptr\@VItemStackRequestBatch\@\@U?$default_delete\@VItemStackRequestBatch\@\@\@std\@\@\@std\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    MCAPI static std::unique_ptr<class ItemStackRequestBatch> read(class ReadOnlyBinaryStream &);

};
