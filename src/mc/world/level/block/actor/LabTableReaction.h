#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/actor/LabTableReactionType.h"

class LabTableReaction {
public:
    // prevent constructor by default
    LabTableReaction& operator=(LabTableReaction const&);
    LabTableReaction(LabTableReaction const&);
    LabTableReaction();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LabTableReaction() = default;

    MCAPI void addComponent(std::unique_ptr<class LabTableReactionComponent> comp);

    MCAPI void addResultItem(class ItemStack const& resultItem);

    MCAPI int getReactionId();

    MCAPI ::LabTableReactionType getType();

    MCAPI bool tick(class BlockSource& region);

    MCAPI static std::unique_ptr<class LabTableReaction>
    createReaction(::LabTableReactionType type, class BlockPos const& pos, bool isClientSide);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    // NOLINTEND
};
