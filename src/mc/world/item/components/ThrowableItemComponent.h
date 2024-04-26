#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/AllExperiments.h"

// auto generated forward declare list
// clang-format off
namespace Puv::v1_20_50 { struct ThrowableItemComponent; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class ThrowableItemComponent {
public:
    // prevent constructor by default
    ThrowableItemComponent& operator=(ThrowableItemComponent const&);
    ThrowableItemComponent(ThrowableItemComponent const&);
    ThrowableItemComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ThrowableItemComponent@@UEAA@XZ
    virtual ~ThrowableItemComponent() = default;

    // vIndex: 1, symbol: ?checkComponentDataForContentErrors@ItemComponent@@UEBA_NXZ
    virtual bool checkComponentDataForContentErrors() const;

    // vIndex: 2, symbol: ?writeSettings@ItemComponent@@UEAAXXZ
    virtual void writeSettings();

    // vIndex: 3, symbol: ?isNetworkComponent@ItemComponent@@UEBA_NXZ
    virtual bool isNetworkComponent() const;

    // vIndex: 4, symbol:
    // ?buildNetworkTag@?$NetworkedItemComponent@VThrowableItemComponent@@@@UEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@AEBUReflectionCtx@cereal@@@Z
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag(struct cereal::ReflectionCtx const&) const;

    // vIndex: 5, symbol:
    // ?initializeFromNetwork@?$NetworkedItemComponent@VThrowableItemComponent@@@@UEAA_NAEBVCompoundTag@@AEBUReflectionCtx@cereal@@@Z
    virtual bool initializeFromNetwork(class CompoundTag const&, struct cereal::ReflectionCtx const&);

    // vIndex: 6, symbol: ?handleVersionBasedInitialization@ThrowableItemComponent@@UEAAXAEBVSemVersion@@@Z
    virtual void handleVersionBasedInitialization(class SemVersion const&);

    // vIndex: 7, symbol: ?_canUseOn@ItemComponent@@MEBA_NAEBVItemStack@@AEAVActor@@AEBVBlockPos@@E@Z
    virtual bool _canUseOn(class ItemStack const&, class Actor&, class BlockPos const&, uchar) const;

    // vIndex: 8, symbol: ?_useOn@ItemComponent@@MEBA_NAEAVItemStack@@AEAVActor@@AEBVBlockPos@@EAEBVVec3@@@Z
    virtual bool _useOn(class ItemStack&, class Actor&, class BlockPos const&, uchar, class Vec3 const&) const;

    // vIndex: 9, symbol: ?_initializeComponent@ItemComponent@@MEAAXXZ
    virtual void _initializeComponent();

    // symbol: ??0ThrowableItemComponent@@QEAA@_N@Z
    MCAPI explicit ThrowableItemComponent(bool);

    // symbol: ??0ThrowableItemComponent@@QEAA@U0v1_20_50@Puv@@@Z
    MCAPI explicit ThrowableItemComponent(struct Puv::v1_20_50::ThrowableItemComponent);

    // symbol: ?releaseUsing@ThrowableItemComponent@@QEBA_NAEAVItemStack@@PEAVPlayer@@H@Z
    MCAPI bool releaseUsing(class ItemStack& item, class Player* player, int durationLeft) const;

    // symbol: ?use@ThrowableItemComponent@@QEBA_NAEAVItemStack@@AEAVPlayer@@@Z
    MCAPI bool use(class ItemStack& item, class Player& player) const;

    // symbol:
    // ?bindType@ThrowableItemComponent@@SAXAEAUReflectionCtx@cereal@@AEBV?$vector@W4AllExperiments@@V?$allocator@W4AllExperiments@@@std@@@std@@V?$optional@VSemVersion@@@5@@Z
    MCAPI static void
    bindType(struct cereal::ReflectionCtx&, std::vector<::AllExperiments> const&, std::optional<class SemVersion>);

    // symbol: ?getIdentifier@ThrowableItemComponent@@SAAEBVHashedString@@XZ
    MCAPI static class HashedString const& getIdentifier();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_doThrow@ThrowableItemComponent@@AEBAXAEAVItemStack@@AEAVPlayer@@AEBVProjectileItemComponent@@M@Z
    MCAPI void _doThrow(class ItemStack&, class Player&, class ProjectileItemComponent const&, float) const;

    // symbol: ?_getLaunchPower@ThrowableItemComponent@@AEBAMHHH@Z
    MCAPI float _getLaunchPower(int durationLeft, int maxDrawDuration, int maxUseDuration) const;

    // symbol: ?getAimPos@ThrowableItemComponent@@AEBA?AVVec3@@AEAVPlayer@@V2@@Z
    MCAPI class Vec3 getAimPos(class Player&, class Vec3) const;

    // NOLINTEND
};
