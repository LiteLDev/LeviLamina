#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/AllExperiments.h"

// auto generated forward declare list
// clang-format off
namespace Puv::v1_20_50 { struct PlanterItemComponent; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class PlanterItemComponent {
public:
    // prevent constructor by default
    PlanterItemComponent(PlanterItemComponent const&);
    PlanterItemComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1PlanterItemComponent@@UEAA@XZ
    virtual ~PlanterItemComponent() = default;

    // vIndex: 1, symbol: ?checkComponentDataForContentErrors@ItemComponent@@UEBA_NXZ
    virtual bool checkComponentDataForContentErrors() const;

    // vIndex: 2, symbol: ?writeSettings@ItemComponent@@UEAAXXZ
    virtual void writeSettings();

    // vIndex: 3, symbol: ?isNetworkComponent@ItemComponent@@UEBA_NXZ
    virtual bool isNetworkComponent() const;

    // vIndex: 4, symbol:
    // ?buildNetworkTag@?$NetworkedItemComponent@VPlanterItemComponent@@@@UEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@AEBUReflectionCtx@cereal@@@Z
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag(struct cereal::ReflectionCtx const&) const;

    // vIndex: 5, symbol:
    // ?initializeFromNetwork@?$NetworkedItemComponent@VPlanterItemComponent@@@@UEAA_NAEBVCompoundTag@@AEBUReflectionCtx@cereal@@@Z
    virtual bool initializeFromNetwork(class CompoundTag const&, struct cereal::ReflectionCtx const&);

    // vIndex: 6, symbol: ?handleVersionBasedInitialization@ItemComponent@@UEAAXAEBVSemVersion@@@Z
    virtual void handleVersionBasedInitialization(class SemVersion const&);

    // vIndex: 7, symbol: ?_canUseOn@PlanterItemComponent@@MEBA_NAEBVItemStack@@AEAVActor@@AEBVBlockPos@@E@Z
    virtual bool
    _canUseOn(class ItemStack const& instance, class Actor& entity, class BlockPos const& pos, uchar face) const;

    // vIndex: 8, symbol: ?_useOn@PlanterItemComponent@@MEBA_NAEAVItemStack@@AEAVActor@@AEBVBlockPos@@EAEBVVec3@@@Z
    virtual bool _useOn(
        class ItemStack&      item,
        class Actor&          entity,
        class BlockPos const& blockPos,
        uchar                 face,
        class Vec3 const&     clickPos
    ) const;

    // vIndex: 9, symbol: ?_initializeComponent@ItemComponent@@MEAAXXZ
    virtual void _initializeComponent();

    // symbol: ??0PlanterItemComponent@@QEAA@AEBVBlock@@@Z
    MCAPI explicit PlanterItemComponent(class Block const&);

    // symbol: ??0PlanterItemComponent@@QEAA@U0v1_20_50@Puv@@@Z
    MCAPI explicit PlanterItemComponent(struct Puv::v1_20_50::PlanterItemComponent);

    // symbol: ?calculatePlacePos@PlanterItemComponent@@QEBA_NAEBVItemStackBase@@AEAVActor@@AEAEAEAVBlockPos@@@Z
    MCAPI bool
    calculatePlacePos(class ItemStackBase const& instance, class Actor& entity, uchar& face, class BlockPos& pos) const;

    // symbol: ??4PlanterItemComponent@@QEAAAEAV0@$$QEAV0@@Z
    MCAPI class PlanterItemComponent& operator=(class PlanterItemComponent&&);

    // symbol: ??4PlanterItemComponent@@QEAAAEAV0@AEBV0@@Z
    MCAPI class PlanterItemComponent& operator=(class PlanterItemComponent const&);

    // symbol:
    // ?bindType@PlanterItemComponent@@SAXAEAUReflectionCtx@cereal@@AEBV?$vector@W4AllExperiments@@V?$allocator@W4AllExperiments@@@std@@@std@@V?$optional@VSemVersion@@@5@@Z
    MCAPI static void
    bindType(struct cereal::ReflectionCtx&, std::vector<::AllExperiments> const&, std::optional<class SemVersion>);

    // symbol: ?getIdentifier@PlanterItemComponent@@SAAEBVHashedString@@XZ
    MCAPI static class HashedString const& getIdentifier();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_placeBlock@PlanterItemComponent@@AEBA_NAEAVItemStack@@AEAVActor@@AEBVBlock@@AEBVBlockPos@@EAEBVVec3@@@Z
    MCAPI bool
    _placeBlock(class ItemStack&, class Actor&, class Block const&, class BlockPos const&, uchar, class Vec3 const&)
        const;

    // NOLINTEND
};
