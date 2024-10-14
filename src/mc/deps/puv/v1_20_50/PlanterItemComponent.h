#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Puv::v1_20_50 {

struct PlanterItemComponent {
public:
    // prevent constructor by default
    PlanterItemComponent(PlanterItemComponent const&);
    PlanterItemComponent();

public:
    // NOLINTBEGIN
    MCAPI struct Puv::v1_20_50::PlanterItemComponent& operator=(struct Puv::v1_20_50::PlanterItemComponent&&);

    MCAPI struct Puv::v1_20_50::PlanterItemComponent& operator=(struct Puv::v1_20_50::PlanterItemComponent const&);

    MCAPI ~PlanterItemComponent();

    MCAPI static void bindType(struct cereal::ReflectionCtx& ctx);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace Puv::v1_20_50
