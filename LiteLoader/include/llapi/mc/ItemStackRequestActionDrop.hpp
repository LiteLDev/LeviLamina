/**
 * @file  ItemStackRequestActionDrop.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Bedrock.hpp"
#include "ItemStackRequestActionTransferBase.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ItemStackRequestActionDrop.
 *
 */
class ItemStackRequestActionDrop : public ItemStackRequestActionTransferBase {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMSTACKREQUESTACTIONDROP
public:
    class ItemStackRequestActionDrop& operator=(class ItemStackRequestActionDrop const &) = delete;
    ItemStackRequestActionDrop(class ItemStackRequestActionDrop const &) = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 4
     * @symbol ?_write\@ItemStackRequestActionDrop\@\@MEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void _write(class BinaryStream &) const;
    /**
     * @vftbl 5
     * @symbol ?_read\@ItemStackRequestActionDrop\@\@MEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, class std::error_code> _read(class ReadOnlyBinaryStream &);
    /**
     * @symbol ??0ItemStackRequestActionDrop\@\@QEAA\@XZ
     */
    MCAPI ItemStackRequestActionDrop();
    /**
     * @symbol ?getRandomly\@ItemStackRequestActionDrop\@\@QEBA_NXZ
     */
    MCAPI bool getRandomly() const;

};
