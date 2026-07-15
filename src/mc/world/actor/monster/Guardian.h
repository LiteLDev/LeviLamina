#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/actor/monster/Monster.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorDamageSource;
class ActorDefinitionGroup;
class ActorHurtResult;
class CompoundTag;
class DataLoadHelper;
class EntityContext;
class Mob;
struct ActorDefinitionIdentifier;
struct HurtParameters;
struct VariantParameterList;
// clang-format on

class Guardian : public ::Monster {
public:
    // Guardian inner types define
    using DataFlagIdType = schar;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>  ATTACK_SOUND;
    ::ll::TypedStorage<4, 4, float>           ELDER_SIZE_SCALE;
    ::ll::TypedStorage<4, 4, int>             FLAG_MOVING;
    ::ll::TypedStorage<4, 4, int>             FLAG_ELDER;
    ::ll::TypedStorage<4, 12, ::Vec3>         startPos;
    ::ll::TypedStorage<8, 8, ::Mob*>          clientSideCachedAttackTarget;
    ::ll::TypedStorage<4, 4, int>             clientSideAttackTime;
    ::ll::TypedStorage<1, 1, bool>            clientSideTouchedGround;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID> mAttackTargetId;
    ::ll::TypedStorage<1, 1, bool>            mElderGhost;
    ::ll::TypedStorage<8, 8, uint64>          mLaserLoop;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID> mEyeTarget;
    // NOLINTEND

public:
    // prevent constructor by default
    Guardian();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Guardian() /*override*/ = default;

    virtual void reloadHardcoded(::ActorInitializationMethod method, ::VariantParameterList const& params) /*override*/;

    virtual void reloadHardcodedClient(::ActorInitializationMethod method) /*override*/;

    virtual bool checkSpawnRules(bool fromSpawner) /*override*/;

    virtual void setTarget(::Actor* target) /*override*/;

    virtual float getMaxHeadXRot() /*override*/;

    virtual void addAdditionalSaveData(::CompoundTag& tag) const /*override*/;

    virtual void readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;

    virtual bool isDarkEnoughToSpawn() const /*override*/;

    virtual ::ActorHurtResult
    _hurt(::ActorDamageSource const& source, float damage, ::HurtParameters const& hurtParameters) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Guardian(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );

    MCAPI ::Vec3 getMoveEyeVector();

    MCAPI void preAiStep();

#ifdef LL_PLAT_C
    MCAPI void setElderGhost();
#endif
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
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
