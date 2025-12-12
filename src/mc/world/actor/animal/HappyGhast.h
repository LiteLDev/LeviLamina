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
    ::ll::UntypedStorage<8, 8> mUnkb39d53;
    // NOLINTEND

public:
    // prevent constructor by default
    HappyGhast& operator=(HappyGhast const&);
    HappyGhast(HappyGhast const&);
    HappyGhast();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~HappyGhast() /*override*/ = default;

    virtual void reloadHardcoded(::ActorInitializationMethod method, ::VariantParameterList const& params) /*override*/;

    virtual void reloadHardcodedClient(::ActorInitializationMethod method) /*override*/;

    virtual void normalTick() /*override*/;

    virtual float getShadowRadius() const /*override*/;

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
