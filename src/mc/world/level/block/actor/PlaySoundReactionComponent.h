#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/actor/LabTableReactionComponent.h"

class PlaySoundReactionComponent : public ::LabTableReactionComponent {
public:
    // prevent constructor by default
    PlaySoundReactionComponent& operator=(PlaySoundReactionComponent const&);
    PlaySoundReactionComponent(PlaySoundReactionComponent const&);
    PlaySoundReactionComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1PlaySoundReactionComponent@@UEAA@XZ
    virtual ~PlaySoundReactionComponent() = default;

    // vIndex: 3, symbol: ?_onEnd@PlaySoundReactionComponent@@UEAAXAEAVLabTableReaction@@AEAVBlockSource@@@Z
    virtual void _onEnd(class LabTableReaction& owner, class BlockSource& region);

    // NOLINTEND
};
