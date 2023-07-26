/**
 * @file  BlockSourceComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BlockSourceComponent.
 *
 */
class BlockSourceComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKSOURCECOMPONENT
public:
    class BlockSourceComponent& operator=(class BlockSourceComponent const &) = delete;
    BlockSourceComponent(class BlockSourceComponent const &) = delete;
    BlockSourceComponent() = delete;
#endif

public:
    /**
     * @symbol  ??0BlockSourceComponent\@\@QEAA\@V?$WeakRefT\@U?$SharePtrRefTraits\@VBlockSource\@\@\@\@\@\@\@Z
     */
    MCAPI BlockSourceComponent(class WeakRefT<struct SharePtrRefTraits<class BlockSource>>);
    /**
     * @symbol  ?tryGetBlockSource\@BlockSourceComponent\@\@QEBA?AV?$StackRefResultT\@U?$SharePtrRefTraits\@VBlockSource\@\@\@\@\@\@XZ
     */
    MCAPI class StackRefResultT<struct SharePtrRefTraits<class BlockSource>> tryGetBlockSource() const;

};