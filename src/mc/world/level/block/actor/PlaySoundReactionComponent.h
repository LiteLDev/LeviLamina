#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PlaySoundReactionComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYSOUNDREACTIONCOMPONENT
public:
    PlaySoundReactionComponent& operator=(PlaySoundReactionComponent const&) = delete;
    PlaySoundReactionComponent(PlaySoundReactionComponent const&)            = delete;
    PlaySoundReactionComponent()                                             = delete;
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
     * @symbol ?_onEnd\@PlaySoundReactionComponent\@\@UEAAXAEAVLabTableReaction\@\@AEAVBlockSource\@\@\@Z
     */
    virtual void _onEnd(class LabTableReaction&, class BlockSource&);
};
