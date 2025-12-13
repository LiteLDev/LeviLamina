#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorEvent.h"
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/actor/monster/Zombie.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class DataLoadHelper;
struct VariantParameterList;
// clang-format on

class ZombieVillager : public ::Zombie {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk48fc92;
    ::ll::UntypedStorage<1, 1> mUnk4d0943;
    // NOLINTEND

public:
    // prevent constructor by default
    ZombieVillager& operator=(ZombieVillager const&);
    ZombieVillager(ZombieVillager const&);
    ZombieVillager();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void reloadHardcoded(::ActorInitializationMethod method, ::VariantParameterList const& params) /*override*/;

    virtual void handleEntityEvent(::ActorEvent eventId, int data) /*override*/;

    virtual void addAdditionalSaveData(::CompoundTag& tag) const /*override*/;

    virtual void readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;

    virtual ~ZombieVillager() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $reloadHardcoded(::ActorInitializationMethod method, ::VariantParameterList const& params);

    MCAPI void $handleEntityEvent(::ActorEvent eventId, int data);

    MCAPI void $addAdditionalSaveData(::CompoundTag& tag) const;

    MCAPI void $readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
