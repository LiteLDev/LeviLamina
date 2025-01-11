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
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 152
    virtual bool checkSpawnRules(bool) /*override*/;

    // vIndex: 182
    virtual float getFlopVerticalVelocityFactor() const;

    // vIndex: 183
    virtual float getFlopHorizontalVelocityFactor() const;

    // vIndex: 8
    virtual ~WaterAnimal() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI WaterAnimal(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );

    MCAPI void preAiStep();
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
    MCAPI bool $checkSpawnRules(bool);

    MCFOLD float $getFlopVerticalVelocityFactor() const;

    MCAPI float $getFlopHorizontalVelocityFactor() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
