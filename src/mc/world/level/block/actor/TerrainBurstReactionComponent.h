#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TerrainBurstReactionComponent {

public:
    // prevent constructor by default
    TerrainBurstReactionComponent& operator=(TerrainBurstReactionComponent const&) = delete;
    TerrainBurstReactionComponent(TerrainBurstReactionComponent const&)            = delete;
    TerrainBurstReactionComponent()                                                = delete;

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
     * @symbol ?_onEnd\@TerrainBurstReactionComponent\@\@UEAAXAEAVLabTableReaction\@\@AEAVBlockSource\@\@\@Z
     */
    virtual void _onEnd(class LabTableReaction&, class BlockSource&); // NOLINT
};
