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
    // vIndex: 0
    virtual ~LabTableReactionComponent();

    // vIndex: 1
    virtual void _onStart(class LabTableReaction& owner, class BlockSource& region);

    // vIndex: 2
    virtual void _onTick(class LabTableReaction& owner, class BlockSource& region);

    // vIndex: 3
    virtual void _onEnd(class LabTableReaction&, class BlockSource&);

    // NOLINTEND
};
