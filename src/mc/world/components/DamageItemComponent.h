#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/AllExperiments.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

class DamageItemComponent {
public:
    // prevent constructor by default
    DamageItemComponent& operator=(DamageItemComponent const&);
    DamageItemComponent(DamageItemComponent const&);
    DamageItemComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1DamageItemComponent@@UEAA@XZ
    virtual ~DamageItemComponent() = default;

    // vIndex: 9, symbol: ?_initializeComponent@DamageItemComponent@@UEBAXXZ
    virtual void _initializeComponent() const;

    // symbol:
    // ?bindType@DamageItemComponent@@SAXAEAUReflectionCtx@cereal@@AEBV?$vector@W4AllExperiments@@V?$allocator@W4AllExperiments@@@std@@@std@@V?$optional@VSemVersion@@@5@@Z
    MCAPI static void
    bindType(struct cereal::ReflectionCtx&, std::vector<::AllExperiments> const&, std::optional<class SemVersion>);

    // symbol: ?getIdentifier@DamageItemComponent@@SAAEBVHashedString@@XZ
    MCAPI static class HashedString const& getIdentifier();

    // NOLINTEND
};
