#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/AllExperiments.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

class DiggerItemComponent {
public:
    // DiggerItemComponent inner types declare
    // clang-format off
    struct BlockInfo;
    // clang-format on

    // DiggerItemComponent inner types define
    struct BlockInfo {
    public:
        // NOLINTBEGIN
        // symbol: ??0BlockInfo@DiggerItemComponent@@QEAA@XZ
        MCAPI BlockInfo();

        // symbol: ??0BlockInfo@DiggerItemComponent@@QEAA@AEBU01@@Z
        MCAPI BlockInfo(struct DiggerItemComponent::BlockInfo const&);

        // symbol: ??4BlockInfo@DiggerItemComponent@@QEAAAEAU01@$$QEAU01@@Z
        MCAPI struct DiggerItemComponent::BlockInfo& operator=(struct DiggerItemComponent::BlockInfo&&);

        // symbol: ??4BlockInfo@DiggerItemComponent@@QEAAAEAU01@AEBU01@@Z
        MCAPI struct DiggerItemComponent::BlockInfo& operator=(struct DiggerItemComponent::BlockInfo const&);

        // symbol: ??8BlockInfo@DiggerItemComponent@@QEBA_NAEBU01@@Z
        MCAPI bool operator==(struct DiggerItemComponent::BlockInfo const&) const;

        // symbol: ??1BlockInfo@DiggerItemComponent@@QEAA@XZ
        MCAPI ~BlockInfo();

        // NOLINTEND
    };

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

    // vIndex: 6, symbol: ?handleVersionBasedInitialization@DiggerItemComponent@@UEAAXAEBVSemVersion@@@Z
    virtual void handleVersionBasedInitialization(class SemVersion const&);

    // vIndex: 7, symbol: ?_canUseOn@ItemComponent@@MEBA_NAEBVItemStack@@AEAVActor@@AEBVBlockPos@@E@Z
    virtual bool _canUseOn(class ItemStack const&, class Actor&, class BlockPos const&, uchar) const;

    // vIndex: 8, symbol: ?_useOn@ItemComponent@@MEBA_NAEAVItemStack@@AEAVActor@@AEBVBlockPos@@EAEBVVec3@@@Z
    virtual bool _useOn(class ItemStack&, class Actor&, class BlockPos const&, uchar, class Vec3 const&) const;

    // vIndex: 9, symbol: ?_initializeComponent@ItemComponent@@MEBAXXZ
    virtual void _initializeComponent() const;

    // symbol: ??1DiggerItemComponent@@UEAA@XZ
    MCVAPI ~DiggerItemComponent();

    // symbol: ??0DiggerItemComponent@@QEAA@XZ
    MCAPI DiggerItemComponent();

    // symbol: ??0DiggerItemComponent@@QEAA@AEBV0@@Z
    MCAPI DiggerItemComponent(class DiggerItemComponent const&);

    // symbol: ??4DiggerItemComponent@@QEAAAEAV0@$$QEAV0@@Z
    MCAPI class DiggerItemComponent& operator=(class DiggerItemComponent&&);

    // symbol: ??4DiggerItemComponent@@QEAAAEAV0@AEBV0@@Z
    MCAPI class DiggerItemComponent& operator=(class DiggerItemComponent const&);

    // symbol:
    // ?bindType@DiggerItemComponent@@SAXAEAUReflectionCtx@cereal@@AEBV?$vector@W4AllExperiments@@V?$allocator@W4AllExperiments@@@std@@@std@@V?$optional@VSemVersion@@@5@@Z
    MCAPI static void
    bindType(struct cereal::ReflectionCtx&, std::vector<::AllExperiments> const&, std::optional<class SemVersion>);

    // symbol: ?getIdentifier@DiggerItemComponent@@SAAEBVHashedString@@XZ
    MCAPI static class HashedString const& getIdentifier();

    // NOLINTEND
};
