#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/EquipmentSlot.h"
#include "mc/entity/utilities/ActorLocation.h"
#include "mc/enums/AllExperiments.h"

// auto generated forward declare list
// clang-format off
namespace Puv::v1_20_50 { struct WearableItemComponent; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class WearableItemComponent {
public:
    // prevent constructor by default
    WearableItemComponent& operator=(WearableItemComponent const&);
    WearableItemComponent(WearableItemComponent const&);
    WearableItemComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1WearableItemComponent@@UEAA@XZ
    virtual ~WearableItemComponent() = default;

    // vIndex: 1, symbol: ?checkComponentDataForContentErrors@ItemComponent@@UEBA_NXZ
    virtual bool checkComponentDataForContentErrors() const;

    // vIndex: 2, symbol: ?writeSettings@ItemComponent@@UEAAXXZ
    virtual void writeSettings();

    // vIndex: 3, symbol: ?isNetworkComponent@ItemComponent@@UEBA_NXZ
    virtual bool isNetworkComponent() const;

    // vIndex: 4, symbol:
    // ?buildNetworkTag@?$NetworkedItemComponent@VWearableItemComponent@@@@UEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@AEBUReflectionCtx@cereal@@@Z
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag(struct cereal::ReflectionCtx const&) const;

    // vIndex: 5, symbol:
    // ?initializeFromNetwork@?$NetworkedItemComponent@VWearableItemComponent@@@@UEAA_NAEBVCompoundTag@@AEBUReflectionCtx@cereal@@@Z
    virtual bool initializeFromNetwork(class CompoundTag const&, struct cereal::ReflectionCtx const&);

    // vIndex: 6, symbol: ?handleVersionBasedInitialization@ItemComponent@@UEAAXAEBVSemVersion@@@Z
    virtual void handleVersionBasedInitialization(class SemVersion const&);

    // vIndex: 7, symbol: ?_canUseOn@ItemComponent@@MEBA_NAEBVItemStack@@AEAVActor@@AEBVBlockPos@@E@Z
    virtual bool _canUseOn(class ItemStack const&, class Actor&, class BlockPos const&, uchar) const;

    // vIndex: 8, symbol: ?_useOn@ItemComponent@@MEBA_NAEAVItemStack@@AEAVActor@@AEBVBlockPos@@EAEBVVec3@@@Z
    virtual bool _useOn(class ItemStack&, class Actor&, class BlockPos const&, uchar, class Vec3 const&) const;

    // vIndex: 9, symbol: ?_initializeComponent@WearableItemComponent@@UEAAXXZ
    virtual void _initializeComponent();

    // symbol: ??0WearableItemComponent@@QEAA@U0v1_20_50@Puv@@@Z
    MCAPI explicit WearableItemComponent(struct Puv::v1_20_50::WearableItemComponent);

    // symbol: ??0WearableItemComponent@@QEAA@W4EquipmentSlot@Legacy@Puv@@H@Z
    MCAPI WearableItemComponent(::Puv::Legacy::EquipmentSlot, int);

    // symbol: ?dispense@WearableItemComponent@@QEBA_NAEAVBlockSource@@AEAVContainer@@HAEBVVec3@@E@Z
    MCAPI bool dispense(class BlockSource&, class Container&, int, class Vec3 const&, uchar) const;

    // symbol: ?getArmorValue@WearableItemComponent@@QEBAHXZ
    MCAPI int getArmorValue() const;

    // symbol: ?getEquipLocation@WearableItemComponent@@QEBA?AW4ActorLocation@@XZ
    MCAPI ::ActorLocation getEquipLocation() const;

    // symbol: ?getSlot@WearableItemComponent@@QEBA?AW4EquipmentSlot@Legacy@Puv@@XZ
    MCAPI ::Puv::Legacy::EquipmentSlot getSlot() const;

    // symbol: ?isArmor@WearableItemComponent@@QEBA_NXZ
    MCAPI bool isArmor() const;

    // symbol: ?shouldAllowStacking@WearableItemComponent@@QEBA_NXZ
    MCAPI bool shouldAllowStacking() const;

    // symbol: ?use@WearableItemComponent@@QEBA_NAEAVItemStack@@AEAVPlayer@@@Z
    MCAPI bool use(class ItemStack& instance, class Player& player) const;

    // symbol:
    // ?bindType@WearableItemComponent@@SAXAEAUReflectionCtx@cereal@@AEBV?$vector@W4AllExperiments@@V?$allocator@W4AllExperiments@@@std@@@std@@V?$optional@VSemVersion@@@5@@Z
    MCAPI static void
    bindType(struct cereal::ReflectionCtx&, std::vector<::AllExperiments> const&, std::optional<class SemVersion>);

    // symbol: ?getIdentifier@WearableItemComponent@@SAAEBVHashedString@@XZ
    MCAPI static class HashedString const& getIdentifier();

    // symbol: ?registerVersionUpgrades@WearableItemComponent@@SAXAEAVCerealSchemaUpgradeSet@@@Z
    MCAPI static void registerVersionUpgrades(class CerealSchemaUpgradeSet&);

    // NOLINTEND
};
