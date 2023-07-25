#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/SharePtrRefTraits.h"
#include "mc/common/wrapper/StackRefResultT.h"
#include "mc/common/wrapper/WeakRefT.h"

class BlockSourceComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKSOURCECOMPONENT
public:
    BlockSourceComponent& operator=(BlockSourceComponent const&) = delete;
    BlockSourceComponent(BlockSourceComponent const&)            = delete;
    BlockSourceComponent()                                       = delete;
#endif

public:
    /**
     * @symbol ??0BlockSourceComponent\@\@QEAA\@V?$WeakRefT\@U?$SharePtrRefTraits\@VBlockSource\@\@\@\@\@\@\@Z
     */
    MCAPI BlockSourceComponent(class WeakRefT<struct SharePtrRefTraits<class BlockSource>>);
    /**
     * @symbol
     * ?tryGetBlockSource\@BlockSourceComponent\@\@QEBA?AV?$StackRefResultT\@U?$SharePtrRefTraits\@VBlockSource\@\@\@\@\@\@XZ
     */
    MCAPI class StackRefResultT<struct SharePtrRefTraits<class BlockSource>> tryGetBlockSource() const;
};
