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
    // vIndex: 0
    virtual ~OnUseItemComponent();

    MCAPI OnUseItemComponent();

    MCAPI OnUseItemComponent(class OnUseItemComponent const&);

    MCAPI class OnUseItemComponent& operator=(class OnUseItemComponent&&);

    MCAPI class OnUseItemComponent& operator=(class OnUseItemComponent const&);

    MCAPI static void
    bindType(struct cereal::ReflectionCtx&, std::vector<::AllExperiments> const&, std::optional<class SemVersion>);

    MCAPI static class HashedString const& getIdentifier();

    // NOLINTEND
};
