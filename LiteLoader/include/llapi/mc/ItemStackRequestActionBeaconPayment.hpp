/**
 * @file  ItemStackRequestActionBeaconPayment.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Bedrock.hpp"
#include "ItemStackRequestAction.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ItemStackRequestActionBeaconPayment.
 *
 */
class ItemStackRequestActionBeaconPayment : public ItemStackRequestAction {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMSTACKREQUESTACTIONBEACONPAYMENT
public:
    class ItemStackRequestActionBeaconPayment& operator=(class ItemStackRequestActionBeaconPayment const &) = delete;
    ItemStackRequestActionBeaconPayment(class ItemStackRequestActionBeaconPayment const &) = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 4
     * @symbol ?_write\@ItemStackRequestActionBeaconPayment\@\@MEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void _write(class BinaryStream &) const;
    /**
     * @vftbl 5
     * @symbol ?_read\@ItemStackRequestActionBeaconPayment\@\@MEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, class std::error_code> _read(class ReadOnlyBinaryStream &);
    /**
     * @symbol ??0ItemStackRequestActionBeaconPayment\@\@QEAA\@XZ
     */
    MCAPI ItemStackRequestActionBeaconPayment();

};
