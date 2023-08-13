#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LabTableReactionComponent {

public:
    // prevent constructor by default
    LabTableReactionComponent& operator=(LabTableReactionComponent const&) = delete;
    LabTableReactionComponent(LabTableReactionComponent const&)            = delete;
    LabTableReactionComponent()                                            = delete;

public:
    // NOLINTBEGIN
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
     * @symbol ?_onEnd\@LabTableReactionComponent\@\@UEAAXAEAVLabTableReaction\@\@AEAVBlockSource\@\@\@Z
     */
    virtual void _onEnd(class LabTableReaction&, class BlockSource&);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_LABTABLEREACTIONCOMPONENT
    /**
     * @symbol ?_onStart\@LabTableReactionComponent\@\@UEAAXAEAVLabTableReaction\@\@AEAVBlockSource\@\@\@Z
     */
    MCVAPI void _onStart(class LabTableReaction&, class BlockSource&);
    /**
     * @symbol ?_onTick\@LabTableReactionComponent\@\@UEAAXAEAVLabTableReaction\@\@AEAVBlockSource\@\@\@Z
     */
    MCVAPI void _onTick(class LabTableReaction&, class BlockSource&);
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~LabTableReactionComponent();
#endif
    // NOLINTEND
};
