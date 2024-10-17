#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Puv::v1_20_50 {

struct EntityPlacerItemComponent {
public:
    // prevent constructor by default
    EntityPlacerItemComponent(EntityPlacerItemComponent const&);
    EntityPlacerItemComponent();

public:
    // NOLINTBEGIN
    MCAPI struct Puv::v1_20_50::EntityPlacerItemComponent& operator=(struct Puv::v1_20_50::EntityPlacerItemComponent&&);

    MCAPI struct Puv::v1_20_50::EntityPlacerItemComponent&
    operator=(struct Puv::v1_20_50::EntityPlacerItemComponent const&);

    MCAPI ~EntityPlacerItemComponent();

    MCAPI static void bindType(struct cereal::ReflectionCtx& ctx);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace Puv::v1_20_50
