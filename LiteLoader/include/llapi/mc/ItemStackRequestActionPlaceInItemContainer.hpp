/**
 * @file  ItemStackRequestActionPlaceInItemContainer.hpp
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
 * @brief MC class ItemStackRequestActionPlaceInItemContainer.
 *
 */
class ItemStackRequestActionPlaceInItemContainer : public ItemStackRequestActionTransferBase {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMSTACKREQUESTACTIONPLACEINITEMCONTAINER
public:
    class ItemStackRequestActionPlaceInItemContainer& operator=(class ItemStackRequestActionPlaceInItemContainer const &) = delete;
    ItemStackRequestActionPlaceInItemContainer(class ItemStackRequestActionPlaceInItemContainer const &) = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @symbol ??0ItemStackRequestActionPlaceInItemContainer\@\@QEAA\@XZ
     */
    MCAPI ItemStackRequestActionPlaceInItemContainer();

};
