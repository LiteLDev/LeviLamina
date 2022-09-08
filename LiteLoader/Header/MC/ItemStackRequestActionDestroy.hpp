/**
 * @file  ItemStackRequestActionDestroy.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ItemStackRequestActionTransferBase.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ItemStackRequestActionDestroy.
 *
 */
class ItemStackRequestActionDestroy : public ItemStackRequestActionTransferBase {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMSTACKREQUESTACTIONDESTROY
public:
    class ItemStackRequestActionDestroy& operator=(class ItemStackRequestActionDestroy const &) = delete;
    ItemStackRequestActionDestroy(class ItemStackRequestActionDestroy const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1242359496
     */
    virtual ~ItemStackRequestActionDestroy();
    /**
     * @vftbl  1
     * @hash   -1408478591
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl  2
     * @hash   2004456210
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl  3
     * @hash   -1370913101
     */
    virtual void __unk_vfn_3();
    /**
     * @symbol ??0ItemStackRequestActionDestroy@@QEAA@XZ
     * @hash   1015478022
     */
    MCAPI ItemStackRequestActionDestroy();

};