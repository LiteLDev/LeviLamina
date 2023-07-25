#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ItemReactionComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMREACTIONCOMPONENT
public:
    ItemReactionComponent& operator=(ItemReactionComponent const&) = delete;
    ItemReactionComponent(ItemReactionComponent const&)            = delete;
    ItemReactionComponent()                                        = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl 2
     * @symbol __unk_vfn_2
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl 3
     * @symbol ?_onEnd\@ItemReactionComponent\@\@UEAAXAEAVLabTableReaction\@\@AEAVBlockSource\@\@\@Z
     */
    virtual void _onEnd(class LabTableReaction&, class BlockSource&);
};
