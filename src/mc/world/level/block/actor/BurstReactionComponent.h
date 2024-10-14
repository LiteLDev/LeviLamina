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
    // vIndex: 0
    virtual ~BurstReactionComponent() = default;

    // vIndex: 3
    virtual void _onEnd(class LabTableReaction& owner, class BlockSource& region);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void _onEnd$(class LabTableReaction& owner, class BlockSource& region);

    // NOLINTEND
};
