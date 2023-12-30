#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/ContainerType.h"
#include "mc/world/level/block/utils/BlockActorType.h"

class RandomizableBlockActorFillingContainer {
public:
    // prevent constructor by default
    RandomizableBlockActorFillingContainer& operator=(RandomizableBlockActorFillingContainer const&);
    RandomizableBlockActorFillingContainer(RandomizableBlockActorFillingContainer const&);
    RandomizableBlockActorFillingContainer();

public:
    // NOLINTBEGIN
    // symbol: ?dropContents@RandomizableBlockActorFillingContainer@@UEAAXAEAVBlockSource@@AEBVVec3@@_N@Z
    MCVAPI void dropContents(class BlockSource& region, class Vec3 const& pos, bool randomizeDrop);

    // symbol: ?initializeContainerContents@RandomizableBlockActorFillingContainer@@UEAAXAEAVBlockSource@@@Z
    MCVAPI void initializeContainerContents(class BlockSource&);

    // symbol: ?setContainerChanged@RandomizableBlockActorFillingContainer@@UEAAXH@Z
    MCVAPI void setContainerChanged(int);

    // symbol: ?startOpen@RandomizableBlockActorFillingContainer@@UEAAXAEAVPlayer@@@Z
    MCVAPI void startOpen(class Player& player);

    // symbol: ??1RandomizableBlockActorFillingContainer@@UEAA@XZ
    MCVAPI ~RandomizableBlockActorFillingContainer();

    // symbol:
    // ??0RandomizableBlockActorFillingContainer@@QEAA@W4BlockActorType@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVBlockPos@@HW4ContainerType@@@Z
    MCAPI RandomizableBlockActorFillingContainer(
        enum BlockActorType   blockEntityType,
        std::string const&    id,
        class BlockPos const& pos,
        int                   numTotalSlots,
        enum ContainerType    containerType
    );

    // NOLINTEND
};
