#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/world/actor/ActorEvent.h"
#include "mc/world/actor/animal/Animal.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorDamageSource;
class CompoundTag;
class DataLoadHelper;
class Mob;
// clang-format on

class Wolf : public ::Animal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk2a67c0;
    ::ll::UntypedStorage<4, 4> mUnk7af3c9;
    ::ll::UntypedStorage<4, 4> mUnk3b4e09;
    ::ll::UntypedStorage<4, 4> mUnke5d0b7;
    ::ll::UntypedStorage<1, 1> mUnkb0504e;
    ::ll::UntypedStorage<1, 1> mUnk6c6cc2;
    // NOLINTEND

public:
    // prevent constructor by default
    Wolf& operator=(Wolf const&);
    Wolf(Wolf const&);
    Wolf();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 175
    virtual void newServerAiStep() /*override*/;

    // vIndex: 82
    virtual bool load(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;

    // vIndex: 168
    virtual void onBorn(::Actor&, ::Actor& parentRight) /*override*/;

    // vIndex: 93
    virtual void onSynchedDataUpdate(int dataId) /*override*/;

    // vIndex: 56
    virtual void setSitting(bool value) /*override*/;

    // vIndex: 69
    virtual void handleEntityEvent(::ActorEvent eventId, int data) /*override*/;

    // vIndex: 153
    virtual bool isAlliedTo(::Mob* other) /*override*/;

    // vIndex: 63
    virtual ::SharedTypes::Legacy::LevelSoundEvent getAmbientSound() const /*override*/;

    // vIndex: 135
    virtual bool _hurt(::ActorDamageSource const& source, float damage, bool knock, bool ignite) /*override*/;

    // vIndex: 8
    virtual ~Wolf() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _avoidSnowBury();

    MCAPI void _updateTintColor();

    MCAPI void postNormalTick();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $newServerAiStep();

    MCAPI bool $load(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCAPI void $onBorn(::Actor&, ::Actor& parentRight);

    MCAPI void $onSynchedDataUpdate(int dataId);

    MCFOLD void $setSitting(bool value);

    MCAPI void $handleEntityEvent(::ActorEvent eventId, int data);

    MCAPI bool $isAlliedTo(::Mob* other);

    MCAPI ::SharedTypes::Legacy::LevelSoundEvent $getAmbientSound() const;

    MCAPI bool $_hurt(::ActorDamageSource const& source, float damage, bool knock, bool ignite);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
