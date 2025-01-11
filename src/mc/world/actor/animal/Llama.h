#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/animal/Animal.h"

// auto generated forward declare list
// clang-format off
class ActorDamageSource;
class ActorDefinitionGroup;
class Block;
class BlockPos;
class EntityContext;
struct ActorDefinitionIdentifier;
// clang-format on

class Llama : public ::Animal {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 59
    virtual void onFailedTame() /*override*/;

    // vIndex: 94
    virtual float causeFallDamageToActor(float fallDistance, float multiplier, ::ActorDamageSource source) /*override*/;

    // vIndex: 142
    virtual void _playStepSound(::BlockPos const& pos, ::Block const& onBlock) /*override*/;

    // vIndex: 8
    virtual ~Llama() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Llama(
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

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onFailedTame();

    MCAPI float $causeFallDamageToActor(float fallDistance, float multiplier, ::ActorDamageSource source);

    MCFOLD void $_playStepSound(::BlockPos const& pos, ::Block const& onBlock);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
