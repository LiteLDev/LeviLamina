#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/SharePtrRefTraits.h"
#include "mc/common/wrapper/WeakRefT.h"

class ActorTickNeededComponent {

public:
    // prevent constructor by default
    ActorTickNeededComponent& operator=(ActorTickNeededComponent const&) = delete;
    ActorTickNeededComponent(ActorTickNeededComponent const&)            = delete;
    ActorTickNeededComponent()                                           = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0ActorTickNeededComponent\@\@QEAA\@AEAVBlockSource\@\@\@Z
     */
    MCAPI ActorTickNeededComponent(class BlockSource&);
    /**
     * @symbol ??0ActorTickNeededComponent\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI ActorTickNeededComponent(class ActorTickNeededComponent&&);
    /**
     * @symbol
     * ?getBlockSource\@ActorTickNeededComponent\@\@QEAA?AV?$WeakRefT\@U?$SharePtrRefTraits\@VBlockSource\@\@\@\@\@\@XZ
     */
    MCAPI class WeakRefT<struct SharePtrRefTraits<class BlockSource>> getBlockSource();
    /**
     * @symbol ??4ActorTickNeededComponent\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class ActorTickNeededComponent& operator=(class ActorTickNeededComponent&&);
    /**
     * @symbol ??1ActorTickNeededComponent\@\@QEAA\@XZ
     */
    MCAPI ~ActorTickNeededComponent();
    // NOLINTEND
};
