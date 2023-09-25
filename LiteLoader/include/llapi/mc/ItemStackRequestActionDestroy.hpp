/**
 * @file  ItemStackRequestActionDestroy.hpp
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
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @symbol ??0ItemStackRequestActionDestroy\@\@QEAA\@XZ
     */
    MCAPI ItemStackRequestActionDestroy();

};
