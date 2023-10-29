#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/AllExperiments.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

class EntityPlacerItemComponent {
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

    // vIndex: 6, symbol: ?handleVersionBasedInitialization@EntityPlacerItemComponent@@UEAAXAEBVSemVersion@@@Z
    virtual void handleVersionBasedInitialization(class SemVersion const&);

    // vIndex: 7, symbol: ?_canUseOn@EntityPlacerItemComponent@@MEBA_NAEBVItemStack@@AEAVActor@@AEBVBlockPos@@E@Z
    virtual bool _canUseOn(class ItemStack const&, class Actor&, class BlockPos const&, uchar) const;

    // vIndex: 8, symbol: ?_useOn@EntityPlacerItemComponent@@MEBA_NAEAVItemStack@@AEAVActor@@AEBVBlockPos@@EAEBVVec3@@@Z
    virtual bool _useOn(class ItemStack&, class Actor&, class BlockPos const&, uchar, class Vec3 const&) const;

    // vIndex: 9, symbol: ?_initializeComponent@EntityPlacerItemComponent@@UEBAXXZ
    virtual void _initializeComponent() const;

    // symbol: ??1EntityPlacerItemComponent@@UEAA@XZ
    MCVAPI ~EntityPlacerItemComponent();

    // symbol: ??0EntityPlacerItemComponent@@QEAA@XZ
    MCAPI EntityPlacerItemComponent();

    // symbol: ??0EntityPlacerItemComponent@@QEAA@AEBV0@@Z
    MCAPI EntityPlacerItemComponent(class EntityPlacerItemComponent const&);

    // symbol: ?dispense@EntityPlacerItemComponent@@QEBA_NAEAVBlockSource@@AEAVContainer@@HAEBVVec3@@E@Z
    MCAPI bool dispense(class BlockSource&, class Container&, int, class Vec3 const&, uchar) const;

    // symbol: ??4EntityPlacerItemComponent@@QEAAAEAV0@$$QEAV0@@Z
    MCAPI class EntityPlacerItemComponent& operator=(class EntityPlacerItemComponent&&);

    // symbol: ??4EntityPlacerItemComponent@@QEAAAEAV0@AEBV0@@Z
    MCAPI class EntityPlacerItemComponent& operator=(class EntityPlacerItemComponent const&);

    // symbol:
    // ?bindType@EntityPlacerItemComponent@@SAXAEAUReflectionCtx@cereal@@AEBV?$vector@W4AllExperiments@@V?$allocator@W4AllExperiments@@@std@@@std@@V?$optional@VSemVersion@@@5@@Z
    MCAPI static void
    bindType(struct cereal::ReflectionCtx&, std::vector<::AllExperiments> const&, std::optional<class SemVersion>);

    // symbol: ?getIdentifier@EntityPlacerItemComponent@@SAAEBVHashedString@@XZ
    MCAPI static class HashedString const& getIdentifier();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_setActorCustomName@EntityPlacerItemComponent@@AEBAXAEAVActor@@AEBVItemStack@@@Z
    MCAPI void _setActorCustomName(class Actor&, class ItemStack const&) const;

    // symbol:
    // ?_validateBlocks@EntityPlacerItemComponent@@AEBAXAEBV?$vector@VBlockDescriptor@@V?$allocator@VBlockDescriptor@@@std@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@@Z
    MCAPI void _validateBlocks(std::vector<class BlockDescriptor> const&, std::string const&) const;

    // NOLINTEND
};
