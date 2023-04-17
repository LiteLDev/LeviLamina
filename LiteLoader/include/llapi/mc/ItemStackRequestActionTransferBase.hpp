/**
 * @file  ItemStackRequestActionTransferBase.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ItemStackRequestActionTransferBase.
 *
 */
class ItemStackRequestActionTransferBase {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMSTACKREQUESTACTIONTRANSFERBASE
public:
    class ItemStackRequestActionTransferBase& operator=(class ItemStackRequestActionTransferBase const &) = delete;
    ItemStackRequestActionTransferBase(class ItemStackRequestActionTransferBase const &) = delete;
    ItemStackRequestActionTransferBase() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ITEMSTACKREQUESTACTIONTRANSFERBASE
    /**
     * @symbol ?_read\@ItemStackRequestActionTransferBase\@\@MEAA_NAEAVReadOnlyBinaryStream\@\@\@Z
     */
    MCVAPI bool _read(class ReadOnlyBinaryStream &);
    /**
     * @symbol ?_write\@ItemStackRequestActionTransferBase\@\@MEBAXAEAVBinaryStream\@\@\@Z
     */
    MCVAPI void _write(class BinaryStream &) const;
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ItemStackRequestActionTransferBase();
#endif
    /**
     * @symbol ?getSrc\@ItemStackRequestActionTransferBase\@\@QEBAAEBUItemStackRequestSlotInfo\@\@XZ
     */
    MCAPI struct ItemStackRequestSlotInfo const & getSrc() const;

};
