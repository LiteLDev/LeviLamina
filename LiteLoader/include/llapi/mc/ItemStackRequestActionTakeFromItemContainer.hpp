/**
 * @file  ItemStackRequestActionTakeFromItemContainer.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Bedrock.hpp"
#include "ItemStackRequestActionTransferBase.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ItemStackRequestActionTakeFromItemContainer.
 *
 */
class ItemStackRequestActionTakeFromItemContainer : public ItemStackRequestActionTransferBase {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMSTACKREQUESTACTIONTAKEFROMITEMCONTAINER
public:
    class ItemStackRequestActionTakeFromItemContainer& operator=(class ItemStackRequestActionTakeFromItemContainer const &) = delete;
    ItemStackRequestActionTakeFromItemContainer(class ItemStackRequestActionTakeFromItemContainer const &) = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @symbol ??0ItemStackRequestActionTakeFromItemContainer\@\@QEAA\@XZ
     */
    MCAPI ItemStackRequestActionTakeFromItemContainer();

};
