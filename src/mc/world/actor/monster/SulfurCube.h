#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/actor/monster/Slime.h"

// auto generated forward declare list
// clang-format off
class ActorDefinitionGroup;
class EntityContext;
struct ActorDefinitionIdentifier;
struct VariantParameterList;
// clang-format on

class SulfurCube : public ::Slime {
public:
    // prevent constructor by default
    SulfurCube();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool canBePulledIntoVehicle() const /*override*/;

    virtual bool checkSpawnRules(bool fromSpawner) /*override*/;

    virtual bool isDarkEnoughToSpawn() const /*override*/;

    virtual bool canFreeze() const /*override*/;

    virtual void
    initializeComponents(::ActorInitializationMethod method, ::VariantParameterList const& params) /*override*/;

    virtual void reloadHardcoded(::ActorInitializationMethod method, ::VariantParameterList const& params) /*override*/;

    virtual bool _shouldSquish() const /*override*/;

    virtual bool _shouldPlayJumpSound() const /*override*/;

    virtual bool _shouldPlayLandSound() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SulfurCube(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );
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
    MCFOLD bool $canBePulledIntoVehicle() const;

    MCFOLD bool $checkSpawnRules(bool fromSpawner);

    MCFOLD bool $isDarkEnoughToSpawn() const;

    MCAPI bool $canFreeze() const;

    MCAPI void $initializeComponents(::ActorInitializationMethod method, ::VariantParameterList const& params);

    MCAPI void $reloadHardcoded(::ActorInitializationMethod method, ::VariantParameterList const& params);

    MCAPI bool $_shouldSquish() const;

    MCAPI bool $_shouldPlayJumpSound() const;

    MCAPI bool $_shouldPlayLandSound() const;


    // NOLINTEND
};
