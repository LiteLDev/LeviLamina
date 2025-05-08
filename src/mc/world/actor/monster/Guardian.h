#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
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
class Vec3;
struct ActorDefinitionIdentifier;
struct VariantParameterList;
// clang-format on

class Guardian : public ::Monster {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk57d3d5;
    ::ll::UntypedStorage<4, 4>  mUnk3decdb;
    ::ll::UntypedStorage<4, 4>  mUnk347092;
    ::ll::UntypedStorage<4, 4>  mUnkdf392f;
    ::ll::UntypedStorage<4, 12> mUnk84296a;
    ::ll::UntypedStorage<8, 8>  mUnkb833b0;
    ::ll::UntypedStorage<4, 4>  mUnkeff916;
    ::ll::UntypedStorage<1, 1>  mUnk880f37;
    ::ll::UntypedStorage<8, 8>  mUnk3ad402;
    ::ll::UntypedStorage<1, 1>  mUnk78b2b3;
    ::ll::UntypedStorage<8, 8>  mUnkfa487a;
    ::ll::UntypedStorage<8, 8>  mUnkad1f17;
    // NOLINTEND

public:
    // prevent constructor by default
    Guardian& operator=(Guardian const&);
    Guardian(Guardian const&);
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
    virtual void setTarget(::Actor* target) /*override*/;

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

    MCFOLD void $setTarget(::Actor* target);

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
