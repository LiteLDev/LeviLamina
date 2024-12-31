#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/animal/Animal.h"

// auto generated forward declare list
// clang-format off
class ActorDefinitionGroup;
class Block;
class BlockPos;
class EntityContext;
class ExpiringTick;
class Vec3;
struct ActorDefinitionIdentifier;
// clang-format on

class Camel : public ::Animal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnk3467c8;
    ::ll::UntypedStorage<8, 24> mUnk4d98f9;
    ::ll::UntypedStorage<1, 1>  mUnk1af48a;
    // NOLINTEND

public:
    // prevent constructor by default
    Camel& operator=(Camel const&);
    Camel(Camel const&);
    Camel();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 150
    virtual void aiStep() /*override*/;

    // vIndex: 24
    virtual void normalTick() /*override*/;

    // vIndex: 17
    virtual ::Vec3 getInterpolatedRidingOffset(float, int const) const /*override*/;

    // vIndex: 142
    virtual void _playStepSound(::BlockPos const& pos, ::Block const& onBlock) /*override*/;

    // vIndex: 8
    virtual ~Camel() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Camel(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );

    MCAPI void _monitorSitting();

    MCAPI ::std::optional<::ExpiringTick> getDashCooldown() const;
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
    MCAPI void $aiStep();

    MCAPI void $normalTick();

    MCAPI ::Vec3 $getInterpolatedRidingOffset(float, int const) const;

    MCAPI void $_playStepSound(::BlockPos const& pos, ::Block const& onBlock);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
