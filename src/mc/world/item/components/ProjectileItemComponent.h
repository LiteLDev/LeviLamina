#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorType.h"
#include "mc/enums/AllExperiments.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

class ProjectileItemComponent {
public:
    // prevent constructor by default
    ProjectileItemComponent& operator=(ProjectileItemComponent const&);
    ProjectileItemComponent(ProjectileItemComponent const&);
    ProjectileItemComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ProjectileItemComponent();

    // vIndex: 1
    virtual bool checkComponentDataForContentErrors() const;

    // vIndex: 2
    virtual void writeSettings();

    // vIndex: 3
    virtual bool isNetworkComponent() const;

    // vIndex: 4
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag(struct cereal::ReflectionCtx const&) const;

    // vIndex: 5
    virtual bool initializeFromNetwork(class CompoundTag const&, struct cereal::ReflectionCtx const&);

    // vIndex: 6
    virtual void handleVersionBasedInitialization(class SemVersion const&);

    // vIndex: 7
    virtual bool _canUseOn(class ItemStack const&, class Actor&, class BlockPos const&, uchar) const;

    // vIndex: 8
    virtual bool _useOn(class ItemStack&, class Actor&, class BlockPos const&, uchar, class Vec3 const&) const;

    // vIndex: 9
    virtual void _initializeComponent();

    MCAPI ProjectileItemComponent(::ActorType, float);

    MCAPI class Actor*
    createProjectileActor(class BlockSource&, class ItemStack const&, class Vec3 const&, class Vec3 const&) const;

    MCAPI class Vec3 getShootDir(class Player const& player, float angleOffset) const;

    MCAPI class Actor* shootProjectile(
        class BlockSource& region,
        class Vec3 const&  aimPos,
        class Vec3 const&  aimDir,
        float              power,
        class Player*      player
    ) const;

    MCAPI static void
    bindType(struct cereal::ReflectionCtx&, std::vector<::AllExperiments> const&, std::optional<class SemVersion>);

    MCAPI static class HashedString const& getIdentifier();

    // NOLINTEND
};
