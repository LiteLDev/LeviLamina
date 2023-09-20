/**
 * @file  BlockState.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#include "HashedString.hpp"

#undef BEFORE_EXTRA


class BlockState {

#define AFTER_EXTRA
public:
    class StateListNode {
    public:
        BlockState::StateListNode* mNext;
        BlockState::StateListNode* mPrev;
        BlockState* mState;
    };

    int (**_vptr_BlockState)(void);
    const size_t mID;
    const size_t mVariationCount;
    const class HashedString mName;
    StateListNode mNode;

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKSTATE
public:
    class BlockState& operator=(class BlockState const &) = delete;
    BlockState(class BlockState const &) = delete;
    BlockState() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?toNBT\@?$BlockStateVariant\@E\@\@UEBAXAEAVCompoundTag\@\@H\@Z
     */
    virtual void toNBT(class CompoundTag &, int) const = 0;
    /**
     * @vftbl 2
     * @symbol ?fromNBT\@?$BlockStateVariant\@E\@\@UEBA_NAEBVCompoundTag\@\@AEAH\@Z
     */
    virtual bool fromNBT(class CompoundTag const &, int &) const = 0;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BLOCKSTATE
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~BlockState();
#endif
    /**
     * @symbol ?forEachState\@BlockState\@\@SAXV?$function\@$$A6A_NAEBVBlockState\@\@\@Z\@std\@\@\@Z
     */
    MCAPI static void forEachState(class std::function<bool (class BlockState const &)>);

};
