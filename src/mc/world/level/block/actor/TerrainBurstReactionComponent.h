#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/actor/LabTableReactionComponent.h"

class TerrainBurstReactionComponent : public ::LabTableReactionComponent {
public:
    // prevent constructor by default
    TerrainBurstReactionComponent& operator=(TerrainBurstReactionComponent const&);
    TerrainBurstReactionComponent(TerrainBurstReactionComponent const&);
    TerrainBurstReactionComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~TerrainBurstReactionComponent() = default;

    // vIndex: 3
    virtual void _onEnd(class LabTableReaction& owner, class BlockSource& region);

    // NOLINTEND
};
