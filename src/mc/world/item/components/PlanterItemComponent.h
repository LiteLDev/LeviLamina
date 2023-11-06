#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/AllExperiments.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

class PlanterItemComponent {
public:
    // prevent constructor by default
    PlanterItemComponent(PlanterItemComponent const&);
    PlanterItemComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~PlanterItemComponent() = default;

    // vIndex: 7, symbol: ?_canUseOn@PlanterItemComponent@@MEBA_NAEBVItemStack@@AEAVActor@@AEBVBlockPos@@E@Z
    virtual bool _canUseOn(class ItemStack const&, class Actor&, class BlockPos const&, uchar) const;

    // vIndex: 8, symbol: ?_useOn@PlanterItemComponent@@MEBA_NAEAVItemStack@@AEAVActor@@AEBVBlockPos@@EAEBVVec3@@@Z
    virtual bool _useOn(class ItemStack&, class Actor&, class BlockPos const&, uchar, class Vec3 const&) const;

    // symbol: ??0PlanterItemComponent@@QEAA@AEBVBlock@@@Z
    MCAPI explicit PlanterItemComponent(class Block const&);

    // symbol: ?calculatePlacePos@PlanterItemComponent@@QEBA_NAEBVItemStackBase@@AEAVActor@@AEAEAEAVBlockPos@@@Z
    MCAPI bool calculatePlacePos(class ItemStackBase const&, class Actor&, uchar&, class BlockPos&) const;

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
    // symbol: ?_placeBlock@PlanterItemComponent@@AEBA_NAEAVItemStack@@AEAVActor@@AEBVBlock@@AEBVBlockPos@@@Z
    MCAPI bool _placeBlock(class ItemStack&, class Actor&, class Block const&, class BlockPos const&) const;

    // NOLINTEND
};
