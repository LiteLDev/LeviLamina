#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/AllExperiments.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct WeaponItemComponent {
public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~WeaponItemComponent();

    MCAPI WeaponItemComponent();

    MCAPI WeaponItemComponent(struct WeaponItemComponent const&);

    MCAPI struct WeaponItemComponent& operator=(struct WeaponItemComponent&&);

    MCAPI struct WeaponItemComponent& operator=(struct WeaponItemComponent const&);

    MCAPI static void
    bindType(struct cereal::ReflectionCtx&, std::vector<::AllExperiments> const&, std::optional<class SemVersion>);

    MCAPI static class HashedString const& getIdentifier();

    // NOLINTEND
};
