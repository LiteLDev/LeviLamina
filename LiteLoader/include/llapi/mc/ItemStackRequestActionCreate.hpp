/**
 * @file  ItemStackRequestActionCreate.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ItemStackRequestActionCreate.
 *
 */
class ItemStackRequestActionCreate {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMSTACKREQUESTACTIONCREATE
public:
    class ItemStackRequestActionCreate& operator=(class ItemStackRequestActionCreate const &) = delete;
    ItemStackRequestActionCreate(class ItemStackRequestActionCreate const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~ItemStackRequestActionCreate();
    /**
     * @vftbl  1
     * @symbol  __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl  2
     * @symbol  __unk_vfn_2
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl  3
     * @symbol  __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   1385576110
     * @vftbl  4
     * @symbol  ?_write\@ItemStackRequestActionCreate\@\@MEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void _write(class BinaryStream &) const;
    /**
     * @hash   404521302
     * @vftbl  5
     * @symbol  ?_read\@ItemStackRequestActionCreate\@\@MEAA_NAEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual bool _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   47726264
     * @symbol  ??0ItemStackRequestActionCreate\@\@QEAA\@XZ
     */
    MCAPI ItemStackRequestActionCreate();
    /**
     * @hash   749971991
     * @symbol  ?getResultsIndex\@ItemStackRequestActionCreate\@\@QEBAEXZ
     */
    MCAPI unsigned char getResultsIndex() const;

};