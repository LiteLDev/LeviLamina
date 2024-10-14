#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/world/level/block/actor/BlockActor.h"

class RandomizableBlockActorContainerBase : public ::BlockActor {
public:
    // prevent constructor by default
    RandomizableBlockActorContainerBase& operator=(RandomizableBlockActorContainerBase const&);
    RandomizableBlockActorContainerBase(RandomizableBlockActorContainerBase const&);
    RandomizableBlockActorContainerBase();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RandomizableBlockActorContainerBase();

    // vIndex: 1
    virtual void load(class Level& level, class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    // vIndex: 2
    virtual bool save(class CompoundTag& tag) const;

    // vIndex: 34
    virtual void eraseLootTable();

    MCAPI void setLootTable(std::string const& lootTable, int lootTableSeed);

    MCAPI void
    unPackLootTable(class Level& level, class Container& container, DimensionType dimensionId, class Actor* actor);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void dtor$();

    MCAPI void eraseLootTable$();

    MCAPI void load$(class Level& level, class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    MCAPI bool save$(class CompoundTag& tag) const;

    // NOLINTEND
};
