#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorType.h"
#include "mc/enums/AllExperiments.h"

// auto generated forward declare list
// clang-format off
namespace Puv::v1_20_50 { struct ProjectileItemComponent; }
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
    // vIndex: 0, symbol: ??1ProjectileItemComponent@@UEAA@XZ
    virtual ~ProjectileItemComponent();

    // vIndex: 1, symbol: ?checkComponentDataForContentErrors@ItemComponent@@UEBA_NXZ
    virtual bool checkComponentDataForContentErrors() const;

    // vIndex: 2, symbol: ?writeSettings@ItemComponent@@UEAAXXZ
    virtual void writeSettings();

    // vIndex: 3, symbol: ?isNetworkComponent@ItemComponent@@UEBA_NXZ
    virtual bool isNetworkComponent() const;

    // vIndex: 4, symbol:
    // ?buildNetworkTag@?$NetworkedItemComponent@VProjectileItemComponent@@@@UEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@AEBUReflectionCtx@cereal@@@Z
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag(struct cereal::ReflectionCtx const&) const;

    // vIndex: 5, symbol:
    // ?initializeFromNetwork@?$NetworkedItemComponent@VProjectileItemComponent@@@@UEAA_NAEBVCompoundTag@@AEBUReflectionCtx@cereal@@@Z
    virtual bool initializeFromNetwork(class CompoundTag const&, struct cereal::ReflectionCtx const&);

    // vIndex: 6, symbol: ?handleVersionBasedInitialization@ItemComponent@@UEAAXAEBVSemVersion@@@Z
    virtual void handleVersionBasedInitialization(class SemVersion const&);

    // vIndex: 7, symbol: ?_canUseOn@ItemComponent@@MEBA_NAEBVItemStack@@AEAVActor@@AEBVBlockPos@@E@Z
    virtual bool _canUseOn(class ItemStack const&, class Actor&, class BlockPos const&, uchar) const;

    // vIndex: 8, symbol: ?_useOn@ItemComponent@@MEBA_NAEAVItemStack@@AEAVActor@@AEBVBlockPos@@EAEBVVec3@@@Z
    virtual bool _useOn(class ItemStack&, class Actor&, class BlockPos const&, uchar, class Vec3 const&) const;

    // vIndex: 9, symbol: ?_initializeComponent@ItemComponent@@MEAAXXZ
    virtual void _initializeComponent();

    // symbol: ??0ProjectileItemComponent@@QEAA@U0v1_20_50@Puv@@@Z
    MCAPI explicit ProjectileItemComponent(struct Puv::v1_20_50::ProjectileItemComponent);

    // symbol: ??0ProjectileItemComponent@@QEAA@W4ActorType@@M@Z
    MCAPI ProjectileItemComponent(::ActorType, float);

    // symbol: ?dispense@ProjectileItemComponent@@QEBA_NAEAVBlockSource@@AEAVContainer@@HAEBVVec3@@E@Z
    MCAPI bool
    dispense(class BlockSource& region, class Container& container, int slot, class Vec3 const& pos, uchar face) const;

    // symbol: ?getShootDir@ProjectileItemComponent@@QEBA?AVVec3@@AEBVPlayer@@M@Z
    MCAPI class Vec3 getShootDir(class Player const& player, float angleOffset) const;

    // symbol: ?shootProjectile@ProjectileItemComponent@@QEBAPEAVActor@@AEAVBlockSource@@AEBVVec3@@1MPEAVPlayer@@@Z
    MCAPI class Actor* shootProjectile(
        class BlockSource& region,
        class Vec3 const&  aimPos,
        class Vec3 const&  aimDir,
        float              power,
        class Player*      player
    ) const;

    // symbol:
    // ?bindType@ProjectileItemComponent@@SAXAEAUReflectionCtx@cereal@@AEBV?$vector@W4AllExperiments@@V?$allocator@W4AllExperiments@@@std@@@std@@V?$optional@VSemVersion@@@5@@Z
    MCAPI static void
    bindType(struct cereal::ReflectionCtx&, std::vector<::AllExperiments> const&, std::optional<class SemVersion>);

    // symbol: ?getIdentifier@ProjectileItemComponent@@SAAEBVHashedString@@XZ
    MCAPI static class HashedString const& getIdentifier();

    // NOLINTEND
};
