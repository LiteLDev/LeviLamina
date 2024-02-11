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
    // vIndex: 0, symbol: ??1LabTableReactionComponent@@UEAA@XZ
    virtual ~LabTableReactionComponent();

    // vIndex: 1, symbol: ?_onStart@LabTableReactionComponent@@UEAAXAEAVLabTableReaction@@AEAVBlockSource@@@Z
    virtual void _onStart(class LabTableReaction& owner, class BlockSource& region);

    // vIndex: 2, symbol: ?_onTick@LabTableReactionComponent@@UEAAXAEAVLabTableReaction@@AEAVBlockSource@@@Z
    virtual void _onTick(class LabTableReaction& owner, class BlockSource& region);

    // vIndex: 3, symbol: ?_onEnd@LabTableReactionComponent@@UEAAXAEAVLabTableReaction@@AEAVBlockSource@@@Z
    virtual void _onEnd(class LabTableReaction&, class BlockSource&);

    // NOLINTEND
};
