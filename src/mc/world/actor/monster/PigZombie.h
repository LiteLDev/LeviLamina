#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/monster/Zombie.h"

// auto generated forward declare list
// clang-format off
class ActorDamageSource;
class CompoundTag;
class DataLoadHelper;
// clang-format on

class PigZombie : public ::Zombie {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkb480f4;
    ::ll::UntypedStorage<4, 4> mUnka23cdc;
    ::ll::UntypedStorage<4, 4> mUnkdf9a1f;
    // NOLINTEND

public:
    // prevent constructor by default
    PigZombie& operator=(PigZombie const&);
    PigZombie(PigZombie const&);
    PigZombie();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void normalTick() /*override*/;

    virtual bool checkSpawnRules(bool fromSpawner) /*override*/;

    virtual bool _hurt(::ActorDamageSource const& source, float damage, bool knock, bool ignite) /*override*/;

    virtual void addAdditionalSaveData(::CompoundTag& tag) const /*override*/;

    virtual void readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;

    virtual ~PigZombie() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $normalTick();

    MCAPI bool $checkSpawnRules(bool fromSpawner);

    MCAPI bool $_hurt(::ActorDamageSource const& source, float damage, bool knock, bool ignite);

    MCAPI void $addAdditionalSaveData(::CompoundTag& tag) const;

    MCAPI void $readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
