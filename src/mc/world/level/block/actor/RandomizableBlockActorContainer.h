#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/ContainerType.h"
#include "mc/world/level/block/actor/BlockActorType.h"

class RandomizableBlockActorContainer {
public:
    // prevent constructor by default
    RandomizableBlockActorContainer& operator=(RandomizableBlockActorContainer const&);
    RandomizableBlockActorContainer(RandomizableBlockActorContainer const&);
    RandomizableBlockActorContainer();

public:
    // NOLINTBEGIN
    MCVAPI void dropContents(class BlockSource& region, class Vec3 const& pos, bool randomizeDrop);

    MCVAPI void dropSlotContent(class BlockSource& region, class Vec3 const& pos, bool randomizeDrop, int slot);

    MCVAPI void initializeContainerContents(class BlockSource& region);

    MCVAPI void onRemoved(class BlockSource&);

    MCVAPI void setContainerChanged(int slot);

    MCVAPI void startOpen(class Player& player);

    MCVAPI ~RandomizableBlockActorContainer();

    MCAPI RandomizableBlockActorContainer(
        ::BlockActorType      blockEntityType,
        std::string const&    id,
        class BlockPos const& pos,
        ::ContainerType
    );

    // NOLINTEND
};
