#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BlockState {
public:
    // BlockState inner types declare
    // clang-format off
    struct StateListNode;
    // clang-format on

    // BlockState inner types define
    struct StateListNode {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKSTATE_STATELISTNODE
    public:
        StateListNode& operator=(StateListNode const&) = delete;
        StateListNode(StateListNode const&)            = delete;
        StateListNode()                                = delete;
#endif

    public:
        /**
         * @symbol ??0StateListNode\@BlockState\@\@QEAA\@PEAV1\@\@Z
         */
        MCAPI StateListNode(class BlockState*);
        /**
         * @symbol ??1StateListNode\@BlockState\@\@QEAA\@XZ
         */
        MCAPI ~StateListNode();
        /**
         * @symbol ?mHead\@StateListNode\@BlockState\@\@2PEAU12\@EA
         */
        MCAPI static struct BlockState::StateListNode* mHead;
    };

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKSTATE
public:
    BlockState& operator=(BlockState const&) = delete;
    BlockState(BlockState const&)            = delete;
    BlockState()                             = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BLOCKSTATE
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~BlockState();
#endif
    /**
     * @symbol ?forEachState\@BlockState\@\@SAXV?$function\@$$A6A_NAEBVBlockState\@\@\@Z\@std\@\@\@Z
     */
    MCAPI static void forEachState(class std::function<bool(class BlockState const&)>);
    /**
     * @symbol ?getState\@BlockState\@\@SAPEBV1\@AEBVHashedString\@\@\@Z
     */
    MCAPI static class BlockState const* getState(class HashedString const&);
};
