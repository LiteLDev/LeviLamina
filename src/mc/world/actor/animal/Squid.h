#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Color.h"
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/world/actor/ActorEvent.h"
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/actor/Mob.h"

// auto generated forward declare list
// clang-format off
class ActorDamageSource;
class ActorDefinitionGroup;
class EntityContext;
class Vec3;
struct ActorDefinitionIdentifier;
struct VariantParameterList;
// clang-format on

class Squid : public ::Mob {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 16, ::mce::Color> mInkColor;
    ::ll::TypedStorage<4, 4, float>         mSpeed;
    ::ll::TypedStorage<4, 4, float>         mTentacleSpeed;
    ::ll::TypedStorage<4, 4, float>         mRotateSpeed;
    ::ll::TypedStorage<4, 4, float>         mXBodyRot;
    ::ll::TypedStorage<4, 4, float>         mXBodyRotO;
    ::ll::TypedStorage<4, 4, float>         mZBodyRot;
    ::ll::TypedStorage<4, 4, float>         mZBodyRotO;
    ::ll::TypedStorage<4, 4, float>         mTx;
    ::ll::TypedStorage<4, 4, float>         mTy;
    ::ll::TypedStorage<4, 4, float>         mTz;
    ::ll::TypedStorage<4, 4, float>         mTentacleMovement;
    ::ll::TypedStorage<4, 4, float>         mOldTentacleMovement;
    ::ll::TypedStorage<4, 4, float>         mTentacleAngle;
    ::ll::TypedStorage<4, 4, float>         mOldTentacleAngle;
    // NOLINTEND

public:
    // prevent constructor by default
    Squid();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void handleEntityEvent(::ActorEvent eventId, int data) /*override*/;

    virtual bool checkSpawnObstruction() const /*override*/;

    virtual bool checkSpawnRules(bool fromSpawner) /*override*/;

    virtual bool _hurt(::ActorDamageSource const& source, float damage, bool knock, bool ignite) /*override*/;

    virtual ::SharedTypes::Legacy::LevelSoundEvent _getInkSquirtSoundEvent() const;

    virtual void reloadHardcoded(::ActorInitializationMethod method, ::VariantParameterList const& params) /*override*/;

    virtual ~Squid() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Squid(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext,
        ::mce::Color const&                inkParticleColor
    );

    MCAPI ::Vec3 _randomInkDir();

    MCAPI void postAiStep();

    MCAPI void spawnInkParticles();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext,
        ::mce::Color const&                inkParticleColor
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $handleEntityEvent(::ActorEvent eventId, int data);

    MCFOLD bool $checkSpawnObstruction() const;

    MCAPI bool $checkSpawnRules(bool fromSpawner);

    MCAPI bool $_hurt(::ActorDamageSource const& source, float damage, bool knock, bool ignite);

    MCAPI ::SharedTypes::Legacy::LevelSoundEvent $_getInkSquirtSoundEvent() const;

    MCFOLD void $reloadHardcoded(::ActorInitializationMethod method, ::VariantParameterList const& params);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
