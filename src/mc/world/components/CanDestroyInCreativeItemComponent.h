#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/AllExperiments.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

class CanDestroyInCreativeItemComponent {
public:
    // prevent constructor by default
    CanDestroyInCreativeItemComponent& operator=(CanDestroyInCreativeItemComponent const&);
    CanDestroyInCreativeItemComponent(CanDestroyInCreativeItemComponent const&);
    CanDestroyInCreativeItemComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~CanDestroyInCreativeItemComponent() = default;

    // vIndex: 9, symbol: ?_initializeComponent@CanDestroyInCreativeItemComponent@@UEBAXXZ
    virtual void _initializeComponent() const;

    // symbol:
    // ?bindType@CanDestroyInCreativeItemComponent@@SAXAEAUReflectionCtx@cereal@@AEBV?$vector@W4AllExperiments@@V?$allocator@W4AllExperiments@@@std@@@std@@V?$optional@VSemVersion@@@5@@Z
    MCAPI static void
    bindType(struct cereal::ReflectionCtx&, std::vector<::AllExperiments> const&, std::optional<class SemVersion>);

    // symbol: ?getIdentifier@CanDestroyInCreativeItemComponent@@SAAEBVHashedString@@XZ
    MCAPI static class HashedString const& getIdentifier();

    // NOLINTEND
};
