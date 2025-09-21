#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/actor/animal/Animal.h"

// auto generated forward declare list
// clang-format off
class ActorDefinitionGroup;
class EntityContext;
struct ActorDefinitionIdentifier;
struct VariantParameterList;
// clang-format on

class HappyGhast : public ::Animal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, uint64> mRidingLoop;
    // NOLINTEND

public:
    // prevent constructor by default
    HappyGhast();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 8
    virtual ~HappyGhast() /*override*/;

    // vIndex: 2
    virtual void reloadHardcoded(::ActorInitializationMethod method, ::VariantParameterList const& params) /*override*/;

    // vIndex: 3
    virtual void reloadHardcodedClient(::ActorInitializationMethod method) /*override*/;

    // vIndex: 24
    virtual void normalTick() /*override*/;

    // vIndex: 35
    virtual float getShadowRadius() const /*override*/;

    // vIndex: 145
    virtual void aiStep() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI HappyGhast(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );

    MCAPI void _registerLoopingSounds();
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

    MCAPI void $normalTick();

    MCFOLD float $getShadowRadius() const;

    MCAPI void $aiStep();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
