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
    MCNAPI SulfurCube(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $canBePulledIntoVehicle() const;

    MCNAPI bool $checkSpawnRules(bool fromSpawner);

    MCNAPI bool $isDarkEnoughToSpawn() const;

    MCNAPI void $initializeComponents(::ActorInitializationMethod method, ::VariantParameterList const& params);

    MCNAPI void $reloadHardcoded(::ActorInitializationMethod method, ::VariantParameterList const& params);

    MCNAPI bool $_shouldSquish() const;

    MCNAPI bool $_shouldPlayJumpSound() const;

    MCNAPI bool $_shouldPlayLandSound() const;


    // NOLINTEND
};
