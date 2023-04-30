/**
 * @file  ItemStackRequestActionConsume.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "ItemStackRequestActionTransferBase.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ItemStackRequestActionConsume.
 *
 */
class ItemStackRequestActionConsume : public ItemStackRequestActionTransferBase {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMSTACKREQUESTACTIONCONSUME
public:
    class ItemStackRequestActionConsume& operator=(class ItemStackRequestActionConsume const &) = delete;
    ItemStackRequestActionConsume(class ItemStackRequestActionConsume const &) = delete;
    ItemStackRequestActionConsume() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl 2
     * @symbol __unk_vfn_2
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl 4
     * @symbol ?_write\@ItemStackRequestActionTransferBase\@\@MEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void _write(class BinaryStream &) const;
    /**
     * @vftbl 5
     * @symbol ?_read\@ItemStackRequestActionTransferBase\@\@MEAA_NAEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual bool _read(class ReadOnlyBinaryStream &);

};
