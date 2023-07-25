#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TerrainBurstReactionComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TERRAINBURSTREACTIONCOMPONENT
public:
    TerrainBurstReactionComponent& operator=(TerrainBurstReactionComponent const&) = delete;
    TerrainBurstReactionComponent(TerrainBurstReactionComponent const&)            = delete;
    TerrainBurstReactionComponent()                                                = delete;
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
     * @symbol ?_onEnd\@TerrainBurstReactionComponent\@\@UEAAXAEAVLabTableReaction\@\@AEAVBlockSource\@\@\@Z
     */
    virtual void _onEnd(class LabTableReaction&, class BlockSource&);
};
