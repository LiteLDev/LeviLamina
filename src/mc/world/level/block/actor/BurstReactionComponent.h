#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/actor/LabTableReactionComponent.h"

class BurstReactionComponent : public ::LabTableReactionComponent {
public:
    // prevent constructor by default
    BurstReactionComponent& operator=(BurstReactionComponent const&);
    BurstReactionComponent(BurstReactionComponent const&);
    BurstReactionComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1BurstReactionComponent@@UEAA@XZ
    virtual ~BurstReactionComponent() = default;

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1();

    // vIndex: 2, symbol: __unk_vfn_2
    virtual void __unk_vfn_2();

    // vIndex: 3, symbol: ?_onEnd@BurstReactionComponent@@UEAAXAEAVLabTableReaction@@AEAVBlockSource@@@Z
    virtual void _onEnd(class LabTableReaction&, class BlockSource&);

    // NOLINTEND
};
