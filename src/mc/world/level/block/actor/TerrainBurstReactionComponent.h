#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/actor/LabTableReactionComponent.h"

class TerrainBurstReactionComponent : public ::LabTableReactionComponent {
public:
    // prevent constructor by default
    TerrainBurstReactionComponent& operator=(TerrainBurstReactionComponent const&) = delete;
    TerrainBurstReactionComponent(TerrainBurstReactionComponent const&)            = delete;
    TerrainBurstReactionComponent()                                                = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1();

    // vIndex: 2, symbol: __unk_vfn_2
    virtual void __unk_vfn_2();

    // vIndex: 3, symbol: ?_onEnd@TerrainBurstReactionComponent@@UEAAXAEAVLabTableReaction@@AEAVBlockSource@@@Z
    virtual void _onEnd(class LabTableReaction&, class BlockSource&);

    // NOLINTEND
};
