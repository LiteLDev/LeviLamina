#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/AllExperiments.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

class UseAnimationItemComponent {
public:
    // prevent constructor by default
    UseAnimationItemComponent& operator=(UseAnimationItemComponent const&);
    UseAnimationItemComponent(UseAnimationItemComponent const&);
    UseAnimationItemComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1UseAnimationItemComponent@@UEAA@XZ
    virtual ~UseAnimationItemComponent() = default;

    // vIndex: 9, symbol: ?_initializeComponent@UseAnimationItemComponent@@UEBAXXZ
    virtual void _initializeComponent() const;

    // symbol:
    // ?bindType@UseAnimationItemComponent@@SAXAEAUReflectionCtx@cereal@@AEBV?$vector@W4AllExperiments@@V?$allocator@W4AllExperiments@@@std@@@std@@V?$optional@VSemVersion@@@5@@Z
    MCAPI static void
    bindType(struct cereal::ReflectionCtx&, std::vector<::AllExperiments> const&, std::optional<class SemVersion>);

    // symbol: ?getIdentifier@UseAnimationItemComponent@@SAAEBVHashedString@@XZ
    MCAPI static class HashedString const& getIdentifier();

    // NOLINTEND
};
