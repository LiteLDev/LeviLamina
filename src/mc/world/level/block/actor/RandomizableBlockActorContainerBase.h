#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/world/AutomaticID.h"
#include "mc/world/level/block/actor/BlockActor.h"

class RandomizableBlockActorContainerBase : public ::BlockActor {
public:
    // prevent constructor by default
    RandomizableBlockActorContainerBase& operator=(RandomizableBlockActorContainerBase const&);
    RandomizableBlockActorContainerBase(RandomizableBlockActorContainerBase const&);
    RandomizableBlockActorContainerBase();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1RandomizableBlockActorContainerBase@@UEAA@XZ
    virtual ~RandomizableBlockActorContainerBase();

    // vIndex: 1, symbol:
    // ?load@RandomizableBlockActorContainerBase@@UEAAXAEAVLevel@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    virtual void load(class Level& level, class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    // vIndex: 2, symbol: ?save@RandomizableBlockActorContainerBase@@UEBA_NAEAVCompoundTag@@@Z
    virtual bool save(class CompoundTag& tag) const;

    // vIndex: 34, symbol: ?eraseLootTable@RandomizableBlockActorContainerBase@@UEAAXXZ
    virtual void eraseLootTable();

    // symbol:
    // ?setLootTable@RandomizableBlockActorContainerBase@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI void setLootTable(std::string const& lootTable, int lootTableSeed);

    // symbol:
    // ?unPackLootTable@RandomizableBlockActorContainerBase@@QEAAXAEAVLevel@@AEAVContainer@@V?$AutomaticID@VDimension@@H@@PEAVActor@@@Z
    MCAPI void
    unPackLootTable(class Level& level, class Container& container, DimensionType dimensionId, class Actor* actor);

    // NOLINTEND
};
