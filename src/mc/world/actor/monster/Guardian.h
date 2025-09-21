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
class CompoundTag;
class DataLoadHelper;
class EntityContext;
class Mob;
struct ActorDefinitionIdentifier;
struct VariantParameterList;
// clang-format on

class Guardian : public ::Monster {
public:
    // Guardian inner types define
    using DataFlagIdType = char;

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
    // vIndex: 8
    virtual ~Guardian() /*override*/;

    // vIndex: 2
    virtual void reloadHardcoded(::ActorInitializationMethod method, ::VariantParameterList const& params) /*override*/;

    // vIndex: 3
    virtual void reloadHardcodedClient(::ActorInitializationMethod method) /*override*/;

    // vIndex: 147
    virtual bool checkSpawnRules(bool) /*override*/;

    // vIndex: 51
    virtual void setTarget(::Actor* entity) /*override*/;

    // vIndex: 152
    virtual float getMaxHeadXRot() /*override*/;

    // vIndex: 137
    virtual void addAdditionalSaveData(::CompoundTag& tag) const /*override*/;

    // vIndex: 136
    virtual void readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;

    // vIndex: 177
    virtual bool isDarkEnoughToSpawn() const /*override*/;

    // vIndex: 135
    virtual bool _hurt(::ActorDamageSource const& source, float damage, bool knock, bool ignite) /*override*/;
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

    MCAPI bool isElder() const;

    MCAPI void preAiStep();

    MCAPI void registerLoopingSounds();
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
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $reloadHardcoded(::ActorInitializationMethod method, ::VariantParameterList const& params);

    MCAPI void $reloadHardcodedClient(::ActorInitializationMethod method);

    MCAPI bool $checkSpawnRules(bool);

    MCFOLD void $setTarget(::Actor* entity);

    MCFOLD float $getMaxHeadXRot();

    MCAPI void $addAdditionalSaveData(::CompoundTag& tag) const;

    MCAPI void $readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCFOLD bool $isDarkEnoughToSpawn() const;

    MCAPI bool $_hurt(::ActorDamageSource const& source, float damage, bool knock, bool ignite);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
