#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/LevelSoundEvent.h"
#include "mc/world/actor/ActorDamageCause.h"
#include "mc/world/actor/ActorEvent.h"
#include "mc/world/actor/animal/Animal.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorDamageSource;
class ActorDefinitionGroup;
class CompoundTag;
class DataLoadHelper;
class EntityContext;
class Mob;
struct ActorDefinitionIdentifier;
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
    // vIndex: 179
    virtual void newServerAiStep() /*override*/;

    // vIndex: 84
    virtual bool load(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;

    // vIndex: 173
    virtual void onBorn(::Actor&, ::Actor& parentRight) /*override*/;

    // vIndex: 95
    virtual void onSynchedDataUpdate(int dataId) /*override*/;

    // vIndex: 57
    virtual void setSitting(bool value) /*override*/;

    // vIndex: 71
    virtual void handleEntityEvent(::ActorEvent eventId, int data) /*override*/;

    // vIndex: 158
    virtual bool isAlliedTo(::Mob* other) /*override*/;

    // vIndex: 65
    virtual ::SharedTypes::Legacy::LevelSoundEvent getAmbientSound() const /*override*/;

    // vIndex: 139
    virtual bool _hurt(::ActorDamageSource const& source, float damage, bool knock, bool ignite) /*override*/;

    // vIndex: 8
    virtual ~Wolf() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Wolf(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );

    MCAPI void _avoidSnowBury();

    MCAPI void _updateTintColor();

    MCAPI float getHeadRollAngle(float a);

    MCAPI float getShakeAnim() const;

    MCAPI float getTailAngle();

    MCAPI bool isShaking() const;

    MCAPI void postNormalTick();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::optional<::SharedTypes::Legacy::LevelSoundEvent>
    getCustomHurtSound(::Mob& mob, ::ActorDamageCause cause);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $newServerAiStep();

    MCAPI bool $load(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCAPI void $onBorn(::Actor&, ::Actor& parentRight);

    MCAPI void $onSynchedDataUpdate(int dataId);

    MCAPI void $setSitting(bool value);

    MCAPI bool $isAlliedTo(::Mob* other);

    MCAPI ::SharedTypes::Legacy::LevelSoundEvent $getAmbientSound() const;

    MCAPI bool $_hurt(::ActorDamageSource const& source, float damage, bool knock, bool ignite);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
