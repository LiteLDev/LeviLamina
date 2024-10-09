#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/ContainerType.h"
#include "mc/world/level/block/actor/BlockActorType.h"

class RandomizableBlockActorFillingContainer {
public:
    // prevent constructor by default
    RandomizableBlockActorFillingContainer& operator=(RandomizableBlockActorFillingContainer const&);
    RandomizableBlockActorFillingContainer(RandomizableBlockActorFillingContainer const&);
    RandomizableBlockActorFillingContainer();

public:
    // NOLINTBEGIN
    MCVAPI void dropContents(class BlockSource& region, class Vec3 const& pos, bool randomizeDrop);

    MCVAPI void dropSlotContent(class BlockSource& region, class Vec3 const& pos, bool randomizeDrop, int slot);

    MCVAPI void initializeContainerContents(class BlockSource& region);

    MCVAPI void onRemoved(class BlockSource&);

    MCVAPI void setContainerChanged(int slot);

    MCVAPI void startOpen(class Player& player);

    MCVAPI ~RandomizableBlockActorFillingContainer();

    MCAPI RandomizableBlockActorFillingContainer(
        ::BlockActorType      blockEntityType,
        std::string const&    id,
        class BlockPos const& pos,
        int                   numTotalSlots,
        ::ContainerType       containerType
    );

    // NOLINTEND
};
