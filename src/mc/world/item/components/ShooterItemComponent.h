#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/AllExperiments.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

class ShooterItemComponent {
public:
    // ShooterItemComponent inner types declare
    // clang-format off
    class DrawDuration;
    struct ShooterAmmunitionEntry;
    // clang-format on

    // ShooterItemComponent inner types define
    class DrawDuration {
    public:
        // prevent constructor by default
        DrawDuration& operator=(DrawDuration const&);
        DrawDuration(DrawDuration const&);
        DrawDuration();

    public:
        // NOLINTBEGIN
        // symbol: ?setValue@DrawDuration@ShooterItemComponent@@QEAAXM@Z
        MCAPI void setValue(float);

        // NOLINTEND
    };

    struct ShooterAmmunitionEntry {
    public:
        // prevent constructor by default
        ShooterAmmunitionEntry(ShooterAmmunitionEntry const&);
        ShooterAmmunitionEntry();

    public:
        // NOLINTBEGIN
        // symbol: ??4ShooterAmmunitionEntry@ShooterItemComponent@@QEAAAEAU01@$$QEAU01@@Z
        MCAPI struct ShooterItemComponent::ShooterAmmunitionEntry&
        operator=(struct ShooterItemComponent::ShooterAmmunitionEntry&&);

        // symbol: ??4ShooterAmmunitionEntry@ShooterItemComponent@@QEAAAEAU01@AEBU01@@Z
        MCAPI struct ShooterItemComponent::ShooterAmmunitionEntry&
        operator=(struct ShooterItemComponent::ShooterAmmunitionEntry const&);

        // symbol: ??8ShooterAmmunitionEntry@ShooterItemComponent@@QEBA_NAEBU01@@Z
        MCAPI bool operator==(struct ShooterItemComponent::ShooterAmmunitionEntry const&) const;

        // NOLINTEND
    };

public:
    // prevent constructor by default
    ShooterItemComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ShooterItemComponent@@UEAA@XZ
    virtual ~ShooterItemComponent() = default;

    // vIndex: 1, symbol: ?checkComponentDataForContentErrors@ShooterItemComponent@@UEBA_NXZ
    virtual bool checkComponentDataForContentErrors() const;

    // vIndex: 2, symbol: ?writeSettings@ItemComponent@@UEAAXXZ
    virtual void writeSettings();

    // vIndex: 3, symbol: ?isNetworkComponent@InteractButtonItemComponent@@UEBA_NXZ
    virtual bool isNetworkComponent() const;

    // vIndex: 4, symbol:
    // ?buildNetworkTag@?$NetworkedItemComponent@VShooterItemComponent@@@@UEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@AEBUReflectionCtx@cereal@@@Z
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag(struct cereal::ReflectionCtx const&) const;

    // vIndex: 5, symbol:
    // ?initializeFromNetwork@?$NetworkedItemComponent@VShooterItemComponent@@@@UEAA_NAEBVCompoundTag@@AEBUReflectionCtx@cereal@@@Z
    virtual bool initializeFromNetwork(class CompoundTag const&, struct cereal::ReflectionCtx const&);

    // vIndex: 6, symbol: ?handleVersionBasedInitialization@ItemComponent@@UEAAXAEBVSemVersion@@@Z
    virtual void handleVersionBasedInitialization(class SemVersion const&);

    // vIndex: 7, symbol: ?_canUseOn@ItemComponent@@MEBA_NAEBVItemStack@@AEAVActor@@AEBVBlockPos@@E@Z
    virtual bool _canUseOn(class ItemStack const&, class Actor&, class BlockPos const&, uchar) const;

    // vIndex: 8, symbol: ?_useOn@ItemComponent@@MEBA_NAEAVItemStack@@AEAVActor@@AEBVBlockPos@@EAEBVVec3@@@Z
    virtual bool _useOn(class ItemStack&, class Actor&, class BlockPos const&, uchar, class Vec3 const&) const;

    // vIndex: 9, symbol: ?_initializeComponent@ItemComponent@@MEAAXXZ
    virtual void _initializeComponent();

    // symbol: ??0ShooterItemComponent@@QEAA@AEBV0@@Z
    MCAPI ShooterItemComponent(class ShooterItemComponent const&);

    // symbol: ??4ShooterItemComponent@@QEAAAEAV0@$$QEAV0@@Z
    MCAPI class ShooterItemComponent& operator=(class ShooterItemComponent&&);

    // symbol: ??4ShooterItemComponent@@QEAAAEAV0@AEBV0@@Z
    MCAPI class ShooterItemComponent& operator=(class ShooterItemComponent const&);

    // symbol: ?releaseUsing@ShooterItemComponent@@QEBA_NAEAVItemStack@@PEAVPlayer@@H@Z
    MCAPI bool releaseUsing(class ItemStack&, class Player*, int) const;

    // symbol:
    // ?bindType@ShooterItemComponent@@SAXAEAUReflectionCtx@cereal@@AEBV?$vector@W4AllExperiments@@V?$allocator@W4AllExperiments@@@std@@@std@@V?$optional@VSemVersion@@@5@@Z
    MCAPI static void
    bindType(struct cereal::ReflectionCtx&, std::vector<::AllExperiments> const&, std::optional<class SemVersion>);

    // symbol: ?getIdentifier@ShooterItemComponent@@SAAEBVHashedString@@XZ
    MCAPI static class HashedString const& getIdentifier();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_consumeAmmunition@ShooterItemComponent@@AEBAXPEAVPlayer@@AEBVItemStack@@H_N2@Z
    MCAPI void _consumeAmmunition(class Player*, class ItemStack const&, int, bool, bool) const;

    // symbol: ?_getAmmunition@ShooterItemComponent@@AEBAHPEBVPlayer@@_NAEAVItemStack@@AEA_N@Z
    MCAPI int _getAmmunition(class Player const*, bool, class ItemStack&, bool&) const;

    // symbol: ?_getMaxUseDuration@ShooterItemComponent@@AEBAHAEBVItemStack@@@Z
    MCAPI int _getMaxUseDuration(class ItemStack const&) const;

    // symbol: ?_shootProjectiles@ShooterItemComponent@@AEBAXAEAVItemStack@@PEAVPlayer@@H@Z
    MCAPI void _shootProjectiles(class ItemStack&, class Player*, int) const;

    // NOLINTEND
};
