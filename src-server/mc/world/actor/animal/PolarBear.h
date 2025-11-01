#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/animal/Animal.h"

// auto generated forward declare list
// clang-format off
class ActorDefinitionGroup;
class EntityContext;
struct ActorDefinitionIdentifier;
// clang-format on

class PolarBear : public ::Animal {
public:
    // prevent constructor by default
    PolarBear();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 85
    virtual bool canFreeze() const /*override*/;

    // vIndex: 8
    virtual ~PolarBear() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PolarBear(::ActorDefinitionGroup* definitions, ::ActorDefinitionIdentifier const& definitionName, ::EntityContext& entityContext);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ActorDefinitionGroup* definitions, ::ActorDefinitionIdentifier const& definitionName, ::EntityContext& entityContext);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $canFreeze() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};
