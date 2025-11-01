#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/Mob.h"

// auto generated forward declare list
// clang-format off
class ActorDefinitionGroup;
class EntityContext;
struct ActorDefinitionIdentifier;
// clang-format on

class WaterAnimal : public ::Mob {
public:
    // prevent constructor by default
    WaterAnimal();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 148
    virtual bool checkSpawnRules(bool) /*override*/;

    // vIndex: 8
    virtual ~WaterAnimal() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI WaterAnimal(::ActorDefinitionGroup* definitions, ::ActorDefinitionIdentifier const& definitionName, ::EntityContext& entityContext);

    MCAPI void preAiStep();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ActorDefinitionGroup* definitions, ::ActorDefinitionIdentifier const& definitionName, ::EntityContext& entityContext);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $checkSpawnRules(bool);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};
