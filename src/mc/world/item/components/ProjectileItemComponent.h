#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorType.h"
#include "mc/world/item/components/NetworkedItemComponent.h"
#include "mc/world/level/storage/AllExperiments.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockSource;
class Container;
class HashedString;
class Player;
class SemVersion;
class Vec3;
namespace SharedTypes::v1_20_50 { struct ProjectileItemComponent; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class ProjectileItemComponent : public ::NetworkedItemComponent<::ProjectileItemComponent> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>   mUnk6c13ef;
    ::ll::UntypedStorage<8, 176> mUnk23fa74;
    // NOLINTEND

public:
    // prevent constructor by default
    ProjectileItemComponent& operator=(ProjectileItemComponent const&);
    ProjectileItemComponent(ProjectileItemComponent const&);
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

    MCAPI ::Actor*
    shootProjectile(::BlockSource& region, ::Vec3 const& aimPos, ::Vec3 const& aimDir, float power, ::Player* player)
        const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(
        ::cereal::ReflectionCtx&               ctx,
        ::std::vector<::AllExperiments> const& releasedMinFormatVersion,
        ::std::optional<::SemVersion>          requiredToggles
    );

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
    MCAPI static void** $vftable();
    // NOLINTEND
};
