#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/actor/animal/WaterAnimal.h"

// auto generated forward declare list
// clang-format off
class ActorDefinitionGroup;
class BlockPos;
class EntityContext;
struct ActorDefinitionIdentifier;
struct VariantParameterList;
// clang-format on

class Dolphin : public ::WaterAnimal {
public:
    // prevent constructor by default
    Dolphin();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool canBePulledIntoVehicle() const /*override*/;

    virtual float _getWalkTargetValue(::BlockPos const& pos) /*override*/;

    virtual bool createAIGoals() /*override*/;

    virtual void
    initializeComponents(::ActorInitializationMethod method, ::VariantParameterList const& params) /*override*/;

    virtual ~Dolphin() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Dolphin(
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

    MCAPI float $_getWalkTargetValue(::BlockPos const& pos);

    MCAPI bool $createAIGoals();

    MCAPI void $initializeComponents(::ActorInitializationMethod method, ::VariantParameterList const& params);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
