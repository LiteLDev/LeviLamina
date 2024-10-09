#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Puv::v1_20_50 {

struct ProjectileItemComponent {
public:
    // prevent constructor by default
    ProjectileItemComponent(ProjectileItemComponent const&);
    ProjectileItemComponent();

public:
    // NOLINTBEGIN
    MCAPI struct Puv::v1_20_50::ProjectileItemComponent&
    operator=(struct Puv::v1_20_50::ProjectileItemComponent const&);

    MCAPI ~ProjectileItemComponent();

    MCAPI static void bindType(struct cereal::ReflectionCtx& ctx);

    // NOLINTEND
};

}; // namespace Puv::v1_20_50
