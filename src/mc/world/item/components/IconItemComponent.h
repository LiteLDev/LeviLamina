#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IconItemComponent {
public:
    // prevent constructor by default
    IconItemComponent& operator=(IconItemComponent const&);
    IconItemComponent(IconItemComponent const&);
    IconItemComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?checkComponentDataForContentErrors@ItemComponent@@UEBA_NXZ
    virtual bool checkComponentDataForContentErrors() const;

    // vIndex: 2, symbol: __unk_vfn_2
    virtual void __unk_vfn_2();

    // vIndex: 3, symbol: ?isNetworkComponent@ChargeableItemComponent@@UEBA_NXZ
    virtual bool isNetworkComponent() const;

    // vIndex: 4, symbol:
    // ?buildNetworkTag@ChargeableItemComponent@@UEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@XZ
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;

    // vIndex: 5, symbol: ?initializeFromNetwork@ChargeableItemComponent@@UEAA_NAEBVCompoundTag@@@Z
    virtual bool initializeFromNetwork(class CompoundTag const&);

    // vIndex: 6, symbol: ?handleVersionBasedInitialization@ItemComponent@@UEAAXAEBVSemVersion@@@Z
    virtual void handleVersionBasedInitialization(class SemVersion const&);

    // vIndex: 7, symbol: ?initializeComponent@ItemComponent@@UEBAXXZ
    virtual void initializeComponent() const;

    // vIndex: 8, symbol: ?_canUseOn@ItemComponent@@MEBA_NAEBVItemStack@@AEAVActor@@AEBVBlockPos@@E@Z
    virtual bool _canUseOn(class ItemStack const&, class Actor&, class BlockPos const&, uchar) const;

    // vIndex: 9, symbol: ?_useOn@ItemComponent@@MEBA_NAEAVItemStack@@AEAVActor@@AEBVBlockPos@@EAEBVVec3@@@Z
    virtual bool _useOn(class ItemStack&, class Actor&, class BlockPos const&, uchar, class Vec3 const&) const;

    // symbol: ??0IconItemComponent@@QEAA@PEAVComponentItem@@@Z
    MCAPI explicit IconItemComponent(class ComponentItem*);

    // symbol: ?setOwnerIcon@IconItemComponent@@QEAAXXZ
    MCAPI void setOwnerIcon();

    // symbol:
    // ?setTexturePath@IconItemComponent@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void setTexturePath(std::string const&);

    // symbol: ?bindType@IconItemComponent@@SAXXZ
    MCAPI static void bindType();

    // symbol: ?getIdentifier@IconItemComponent@@SAAEBVHashedString@@XZ
    MCAPI static class HashedString const& getIdentifier();

    // NOLINTEND
};
