#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LabTableReactionComponent {
public:
    // prevent constructor by default
    LabTableReactionComponent& operator=(LabTableReactionComponent const&);
    LabTableReactionComponent(LabTableReactionComponent const&);
    LabTableReactionComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1();

    // vIndex: 2, symbol: __unk_vfn_2
    virtual void __unk_vfn_2();

    // vIndex: 3, symbol: ?_onEnd@LabTableReactionComponent@@UEAAXAEAVLabTableReaction@@AEAVBlockSource@@@Z
    virtual void _onEnd(class LabTableReaction&, class BlockSource&);

    // symbol: ?_onStart@LabTableReactionComponent@@UEAAXAEAVLabTableReaction@@AEAVBlockSource@@@Z
    MCVAPI void _onStart(class LabTableReaction&, class BlockSource&);

    // symbol: ?_onTick@LabTableReactionComponent@@UEAAXAEAVLabTableReaction@@AEAVBlockSource@@@Z
    MCVAPI void _onTick(class LabTableReaction&, class BlockSource&);

    // symbol: ??1LabTableReactionComponent@@UEAA@XZ
    MCVAPI ~LabTableReactionComponent();

    // NOLINTEND
};
