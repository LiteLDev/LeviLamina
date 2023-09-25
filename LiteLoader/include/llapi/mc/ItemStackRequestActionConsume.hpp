/**
 * @file  ItemStackRequestActionConsume.hpp
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
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @symbol ??0ItemStackRequestActionConsume\@\@QEAA\@XZ
     */
    MCAPI ItemStackRequestActionConsume();

};
