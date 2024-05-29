#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/AllExperiments.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

class OnUseItemComponent {
public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1OnUseItemComponent@@UEAA@XZ
    virtual ~OnUseItemComponent();

    // symbol: ??0OnUseItemComponent@@QEAA@XZ
    MCAPI OnUseItemComponent();

    // symbol: ??0OnUseItemComponent@@QEAA@AEBV0@@Z
    MCAPI OnUseItemComponent(class OnUseItemComponent const&);

    // symbol: ??4OnUseItemComponent@@QEAAAEAV0@$$QEAV0@@Z
    MCAPI class OnUseItemComponent& operator=(class OnUseItemComponent&&);

    // symbol: ??4OnUseItemComponent@@QEAAAEAV0@AEBV0@@Z
    MCAPI class OnUseItemComponent& operator=(class OnUseItemComponent const&);

    // symbol:
    // ?bindType@OnUseItemComponent@@SAXAEAUReflectionCtx@cereal@@AEBV?$vector@W4AllExperiments@@V?$allocator@W4AllExperiments@@@std@@@std@@V?$optional@VSemVersion@@@5@@Z
    MCAPI static void
    bindType(struct cereal::ReflectionCtx&, std::vector<::AllExperiments> const&, std::optional<class SemVersion>);

    // symbol: ?getIdentifier@OnUseItemComponent@@SAAEBVHashedString@@XZ
    MCAPI static class HashedString const& getIdentifier();

    // NOLINTEND
};
