#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/IItemComponentLegacyFactoryData.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

class ItemComponent : public ::IItemComponentLegacyFactoryData {
public:
    // prevent constructor by default
    ItemComponent& operator=(ItemComponent const&);
    ItemComponent(ItemComponent const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?checkComponentDataForContentErrors@ItemComponent@@UEBA_NXZ
    virtual bool checkComponentDataForContentErrors() const;

    // vIndex: 2, symbol: ?writeSettings@ItemComponent@@UEAAXXZ
    virtual void writeSettings();

    // vIndex: 3, symbol: ?isNetworkComponent@ItemComponent@@UEBA_NXZ
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

    // vIndex: 9, symbol: ?_initializeComponent@ItemComponent@@MEBAXXZ
    virtual void _initializeComponent() const;

    // symbol: ??1ItemComponent@@UEAA@XZ
    MCVAPI ~ItemComponent();

    // symbol: ??0ItemComponent@@QEAA@XZ
    MCAPI ItemComponent();

    // symbol: ?bindItemComponentType@ItemComponent@@SAXAEAUReflectionCtx@cereal@@@Z
    MCAPI static void bindItemComponentType(struct cereal::ReflectionCtx&);

    // NOLINTEND
};
