/**
 * @file  ItemStackRequestActionTake.hpp
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
 * @brief MC class ItemStackRequestActionTake.
 *
 */
class ItemStackRequestActionTake : public ItemStackRequestActionTransferBase {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMSTACKREQUESTACTIONTAKE
public:
    class ItemStackRequestActionTake& operator=(class ItemStackRequestActionTake const &) = delete;
    ItemStackRequestActionTake(class ItemStackRequestActionTake const &) = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @symbol ??0ItemStackRequestActionTake\@\@QEAA\@XZ
     */
    MCAPI ItemStackRequestActionTake();

};
