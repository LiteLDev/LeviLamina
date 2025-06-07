#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorDefinitionIdentifier.h"
#include "mc/world/actor/ActorType.h"
#include "mc/world/item/components/NetworkedItemComponent.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockSource;
class Container;
class HashedString;
class Player;
class Vec3;
namespace SharedTypes::v1_20_50 { struct ProjectileItemComponent; }
// clang-format on

class ProjectileItemComponent : public ::NetworkedItemComponent<::ProjectileItemComponent> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                         mMinCriticalPower;
    ::ll::TypedStorage<8, 176, ::ActorDefinitionIdentifier> mActorIdentifier;
    // NOLINTEND

public:
    // prevent constructor by default
    ProjectileItemComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ProjectileItemComponent() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ProjectileItemComponent(::SharedTypes::v1_20_50::ProjectileItemComponent component);

    MCAPI ProjectileItemComponent(::ActorType actorType, float minCriticalPower);

    MCAPI bool dispense(::BlockSource& region, ::Container& container, int slot, ::Vec3 const& pos, uchar face) const;

    MCAPI ::Vec3 getShootDir(::Player const& player, float angleOffset) const;

    MCAPI ::Actor* shootProjectile(
        ::BlockSource& region,
        ::Vec3 const&  aimPos,
        ::Vec3 const&  aimDir,
        float          power,
        ::Player*      player
    ) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::HashedString const& getIdentifier();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SharedTypes::v1_20_50::ProjectileItemComponent component);

    MCAPI void* $ctor(::ActorType actorType, float minCriticalPower);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
