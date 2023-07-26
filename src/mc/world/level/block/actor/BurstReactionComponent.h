#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BurstReactionComponent {

public:
    // prevent constructor by default
    BurstReactionComponent& operator=(BurstReactionComponent const&) = delete;
    BurstReactionComponent(BurstReactionComponent const&)            = delete;
    BurstReactionComponent()                                         = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1(); // NOLINT
    /**
     * @vftbl 2
     * @symbol __unk_vfn_2
     */
    virtual void __unk_vfn_2(); // NOLINT
    /**
     * @vftbl 3
     * @symbol ?_onEnd\@BurstReactionComponent\@\@UEAAXAEAVLabTableReaction\@\@AEAVBlockSource\@\@\@Z
     */
    virtual void _onEnd(class LabTableReaction&, class BlockSource&); // NOLINT
};
