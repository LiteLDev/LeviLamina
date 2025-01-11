#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/monster/Monster.h"

// auto generated forward declare list
// clang-format off
class ActorDefinitionGroup;
class Block;
class BlockPos;
class EntityContext;
struct ActorDefinitionIdentifier;
// clang-format on

class Spider : public ::Monster {
public:
    // Spider inner types define
    enum class Type : int {
        Normal = 0,
        Cave   = 1,
    };

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 107
    virtual bool canBeAffected(uint id) const /*override*/;

    // vIndex: 183
    virtual float getModelScale() const;

    // vIndex: 36
    virtual float getShadowRadius() const /*override*/;

    // vIndex: 63
    virtual bool shouldRender() const /*override*/;

    // vIndex: 142
    virtual void _playStepSound(::BlockPos const& pos, ::Block const& onBlock) /*override*/;

    // vIndex: 8
    virtual ~Spider() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Spider(
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
    MCAPI bool $canBeAffected(uint id) const;

    MCAPI float $getModelScale() const;

    MCAPI float $getShadowRadius() const;

    MCAPI bool $shouldRender() const;

    MCAPI void $_playStepSound(::BlockPos const& pos, ::Block const& onBlock);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
