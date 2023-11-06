#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/AllExperiments.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

class OnUseOnItemComponent {
public:
    // prevent constructor by default
    OnUseOnItemComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1OnUseOnItemComponent@@UEAA@XZ
    virtual ~OnUseOnItemComponent();

    // vIndex: 7, symbol: ?_canUseOn@OnUseOnItemComponent@@MEBA_NAEBVItemStack@@AEAVActor@@AEBVBlockPos@@E@Z
    virtual bool _canUseOn(class ItemStack const&, class Actor&, class BlockPos const&, uchar) const;

    // vIndex: 8, symbol: ?_useOn@OnUseOnItemComponent@@MEBA_NAEAVItemStack@@AEAVActor@@AEBVBlockPos@@EAEBVVec3@@@Z
    virtual bool _useOn(class ItemStack&, class Actor&, class BlockPos const&, uchar, class Vec3 const&) const;

    // symbol: ??0OnUseOnItemComponent@@QEAA@AEBV0@@Z
    MCAPI OnUseOnItemComponent(class OnUseOnItemComponent const&);

    // symbol: ??4OnUseOnItemComponent@@QEAAAEAV0@$$QEAV0@@Z
    MCAPI class OnUseOnItemComponent& operator=(class OnUseOnItemComponent&&);

    // symbol: ??4OnUseOnItemComponent@@QEAAAEAV0@AEBV0@@Z
    MCAPI class OnUseOnItemComponent& operator=(class OnUseOnItemComponent const&);

    // symbol:
    // ?bindType@OnUseOnItemComponent@@SAXAEAUReflectionCtx@cereal@@AEBV?$vector@W4AllExperiments@@V?$allocator@W4AllExperiments@@@std@@@std@@V?$optional@VSemVersion@@@5@@Z
    MCAPI static void
    bindType(struct cereal::ReflectionCtx&, std::vector<::AllExperiments> const&, std::optional<class SemVersion>);

    // symbol: ?getIdentifier@OnUseOnItemComponent@@SAAEBVHashedString@@XZ
    MCAPI static class HashedString const& getIdentifier();

    // NOLINTEND
};
