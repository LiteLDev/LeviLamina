#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/monster/Monster.h"

// auto generated forward declare list
// clang-format off
class ActorDefinitionGroup;
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

    using DataFlagIdType = schar;

public:
    // prevent constructor by default
    Spider();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool canBeAffected(uint id) const /*override*/;

    virtual float getModelScale() const;

    virtual float getShadowRadius() const /*override*/;

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
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $canBeAffected(uint id) const;

    MCFOLD float $getModelScale() const;

    MCFOLD float $getShadowRadius() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
