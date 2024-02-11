#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/actor/LabTableReactionComponent.h"

class SetBlockReactionComponent : public ::LabTableReactionComponent {
public:
    // prevent constructor by default
    SetBlockReactionComponent& operator=(SetBlockReactionComponent const&);
    SetBlockReactionComponent(SetBlockReactionComponent const&);
    SetBlockReactionComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1SetBlockReactionComponent@@UEAA@XZ
    virtual ~SetBlockReactionComponent() = default;

    // vIndex: 3, symbol: ?_onEnd@SetBlockReactionComponent@@UEAAXAEAVLabTableReaction@@AEAVBlockSource@@@Z
    virtual void _onEnd(class LabTableReaction& owner, class BlockSource& region);

    // NOLINTEND
};
