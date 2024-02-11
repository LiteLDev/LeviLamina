#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/ContainerType.h"
#include "mc/world/level/block/utils/BlockActorType.h"

class RandomizableBlockActorContainer {
public:
    // prevent constructor by default
    RandomizableBlockActorContainer& operator=(RandomizableBlockActorContainer const&);
    RandomizableBlockActorContainer(RandomizableBlockActorContainer const&);
    RandomizableBlockActorContainer();

public:
    // NOLINTBEGIN
    // symbol: ?dropContents@RandomizableBlockActorContainer@@UEAAXAEAVBlockSource@@AEBVVec3@@_N@Z
    MCVAPI void dropContents(class BlockSource& region, class Vec3 const& pos, bool randomizeDrop);

    // symbol: ?dropSlotContent@RandomizableBlockActorContainer@@UEAAXAEAVBlockSource@@AEBVVec3@@_NH@Z
    MCVAPI void dropSlotContent(class BlockSource&, class Vec3 const&, bool, int);

    // symbol: ?initializeContainerContents@RandomizableBlockActorContainer@@UEAAXAEAVBlockSource@@@Z
    MCVAPI void initializeContainerContents(class BlockSource& region);

    // symbol: ?setContainerChanged@RandomizableBlockActorContainer@@UEAAXH@Z
    MCVAPI void setContainerChanged(int slot);

    // symbol: ?startOpen@RandomizableBlockActorContainer@@UEAAXAEAVPlayer@@@Z
    MCVAPI void startOpen(class Player& player);

    // symbol: ??1RandomizableBlockActorContainer@@UEAA@XZ
    MCVAPI ~RandomizableBlockActorContainer();

    // symbol:
    // ??0RandomizableBlockActorContainer@@QEAA@W4BlockActorType@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVBlockPos@@W4ContainerType@@@Z
    MCAPI RandomizableBlockActorContainer(
        ::BlockActorType      blockEntityType,
        std::string const&    id,
        class BlockPos const& pos,
        ::ContainerType       containerType
    );

    // NOLINTEND
};
