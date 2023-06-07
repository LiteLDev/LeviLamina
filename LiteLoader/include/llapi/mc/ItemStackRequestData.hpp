/**
 * @file  ItemStackRequestData.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ItemStackRequestData.
 *
 */
class ItemStackRequestData {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMSTACKREQUESTDATA
public:
    class ItemStackRequestData& operator=(class ItemStackRequestData const &) = delete;
    ItemStackRequestData(class ItemStackRequestData const &) = delete;
    ItemStackRequestData() = delete;
#endif

public:
    /**
     * @symbol ?tryFindAction\@ItemStackRequestData\@\@QEBAPEBVItemStackRequestAction\@\@W4ItemStackRequestActionType\@\@\@Z
     */
    MCAPI class ItemStackRequestAction const * tryFindAction(enum class ItemStackRequestActionType) const;
    /**
     * @symbol ?write\@ItemStackRequestData\@\@QEBAXAEAVBinaryStream\@\@\@Z
     */
    MCAPI void write(class BinaryStream &) const;
    /**
     * @symbol ??1ItemStackRequestData\@\@QEAA\@XZ
     */
    MCAPI ~ItemStackRequestData();
    /**
     * @symbol ?read\@ItemStackRequestData\@\@SA?AV?$unique_ptr\@VItemStackRequestData\@\@U?$default_delete\@VItemStackRequestData\@\@\@std\@\@\@std\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    MCAPI static std::unique_ptr<class ItemStackRequestData> read(class ReadOnlyBinaryStream &);

};
