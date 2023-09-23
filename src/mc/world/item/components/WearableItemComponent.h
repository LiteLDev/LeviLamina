#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/AllExperiments.h"
#include "mc/enums/EquipmentSlot.h"

// auto generated forward declare list
// clang-format off
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
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?checkComponentDataForContentErrors@ItemComponent@@UEBA_NXZ
    virtual bool checkComponentDataForContentErrors() const;

    // vIndex: 2, symbol: ?writeSettings@ItemComponent@@UEAAXXZ
    virtual void writeSettings();

    // vIndex: 3, symbol: ?isNetworkComponent@InteractButtonItemComponent@@UEBA_NXZ
    virtual bool isNetworkComponent() const;

    // vIndex: 4, symbol:
    // ?buildNetworkTag@ItemComponent@@UEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@AEAUReflectionCtx@cereal@@@Z
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag(struct cereal::ReflectionCtx&) const;

    // vIndex: 5, symbol: ?initializeFromNetwork@ItemComponent@@UEAA_NAEBVCompoundTag@@AEAUReflectionCtx@cereal@@@Z
    virtual bool initializeFromNetwork(class CompoundTag const&, struct cereal::ReflectionCtx&);

    // vIndex: 6, symbol: ?handleVersionBasedInitialization@ItemComponent@@UEAAXAEBVSemVersion@@@Z
    virtual void handleVersionBasedInitialization(class SemVersion const&);

    // vIndex: 7, symbol: ?_canUseOn@ItemComponent@@MEBA_NAEBVItemStack@@AEAVActor@@AEBVBlockPos@@E@Z
    virtual bool _canUseOn(class ItemStack const&, class Actor&, class BlockPos const&, uchar) const;

    // vIndex: 8, symbol: ?_useOn@ItemComponent@@MEBA_NAEAVItemStack@@AEAVActor@@AEBVBlockPos@@EAEBVVec3@@@Z
    virtual bool _useOn(class ItemStack&, class Actor&, class BlockPos const&, uchar, class Vec3 const&) const;

    // vIndex: 9, symbol: ?_initializeComponent@WearableItemComponent@@UEBAXXZ
    virtual void _initializeComponent() const;

    // symbol: ??0WearableItemComponent@@QEAA@W4EquipmentSlot@@H@Z
    MCAPI WearableItemComponent(::EquipmentSlot, int);

    // symbol: ?dispense@WearableItemComponent@@QEBA_NAEAVBlockSource@@AEAVContainer@@HAEBVVec3@@E@Z
    MCAPI bool dispense(class BlockSource&, class Container&, int, class Vec3 const&, uchar) const;

    // symbol: ?getSlot@WearableItemComponent@@QEBA?AW4EquipmentSlot@@XZ
    MCAPI ::EquipmentSlot getSlot() const;

    // symbol: ?use@WearableItemComponent@@QEBA_NAEAVItemStack@@AEAVPlayer@@@Z
    MCAPI bool use(class ItemStack&, class Player&) const;

    // symbol:
    // ?bindType@WearableItemComponent@@SAXAEAUReflectionCtx@cereal@@AEBV?$vector@W4AllExperiments@@V?$allocator@W4AllExperiments@@@std@@@std@@V?$optional@VSemVersion@@@5@@Z
    MCAPI static void
    bindType(struct cereal::ReflectionCtx&, std::vector<::AllExperiments> const&, std::optional<class SemVersion>);

    // symbol: ?getIdentifier@WearableItemComponent@@SAAEBVHashedString@@XZ
    MCAPI static class HashedString const& getIdentifier();

    // NOLINTEND
};
