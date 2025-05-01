#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/world/level/block/actor/BlockActor.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CompoundTag;
class Container;
class DataLoadHelper;
class Dimension;
class ILevel;
class Level;
class SaveContext;
// clang-format on

class RandomizableBlockActorContainerBase : public ::BlockActor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk4eae51;
    ::ll::UntypedStorage<4, 4>  mUnk7a2f42;
    // NOLINTEND

public:
    // prevent constructor by default
    RandomizableBlockActorContainerBase& operator=(RandomizableBlockActorContainerBase const&);
    RandomizableBlockActorContainerBase(RandomizableBlockActorContainerBase const&);
    RandomizableBlockActorContainerBase();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RandomizableBlockActorContainerBase() /*override*/;

    // vIndex: 1
    virtual void load(::ILevel& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;

    // vIndex: 2
    virtual bool save(::CompoundTag& tag, ::SaveContext const& saveContext) const /*override*/;

    // vIndex: 35
    virtual void eraseLootTable() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void setLootTable(::std::string const& lootTable, int lootTableSeed);

    MCNAPI void unPackLootTable(::Level& level, ::Container& container, ::DimensionType dimensionId, ::Actor* actor);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $load(::ILevel& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCNAPI bool $save(::CompoundTag& tag, ::SaveContext const& saveContext) const;

    MCNAPI void $eraseLootTable();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
