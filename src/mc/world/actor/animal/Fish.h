#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/actor/animal/WaterAnimal.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorDefinitionGroup;
class EntityContext;
struct ActorDefinitionIdentifier;
struct VariantParameterList;
// clang-format on

class Fish : public ::WaterAnimal {
public:
    // prevent constructor by default
    Fish();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool startRiding(::Actor& vehicle, bool forceRiding) /*override*/;

    virtual bool createAIGoals() /*override*/;

    virtual void
    initializeComponents(::ActorInitializationMethod method, ::VariantParameterList const& params) /*override*/;

    virtual ~Fish() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Fish(
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
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $startRiding(::Actor& vehicle, bool forceRiding);

    MCAPI bool $createAIGoals();

    MCAPI void $initializeComponents(::ActorInitializationMethod method, ::VariantParameterList const& params);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
