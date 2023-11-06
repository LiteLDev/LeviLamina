#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/AllExperiments.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

class CooldownItemComponent {
public:
    // prevent constructor by default
    CooldownItemComponent& operator=(CooldownItemComponent const&);
    CooldownItemComponent(CooldownItemComponent const&);
    CooldownItemComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1CooldownItemComponent@@UEAA@XZ
    virtual ~CooldownItemComponent();

    // symbol:
    // ?bindType@CooldownItemComponent@@SAXAEAUReflectionCtx@cereal@@AEBV?$vector@W4AllExperiments@@V?$allocator@W4AllExperiments@@@std@@@std@@V?$optional@VSemVersion@@@5@@Z
    MCAPI static void
    bindType(struct cereal::ReflectionCtx&, std::vector<::AllExperiments> const&, std::optional<class SemVersion>);

    // symbol: ?getIdentifier@CooldownItemComponent@@SAAEBVHashedString@@XZ
    MCAPI static class HashedString const& getIdentifier();

    // NOLINTEND
};
