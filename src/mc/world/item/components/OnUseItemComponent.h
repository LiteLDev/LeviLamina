#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/AllExperiments.h"

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

    MCAPI static void bindType(
        struct cereal::ReflectionCtx&        ctx,
        std::vector<::AllExperiments> const& requiredToggles,
        std::optional<class SemVersion>      releasedMinFormatVersion
    );

    MCAPI static class HashedString const& getIdentifier();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(class OnUseItemComponent const&);

    MCAPI void* ctor$();

    MCAPI void dtor$();

    // NOLINTEND
};
