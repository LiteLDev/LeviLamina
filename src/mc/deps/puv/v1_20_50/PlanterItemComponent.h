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
    // symbol: ??4PlanterItemComponent@v1_20_50@Puv@@QEAAAEAU012@$$QEAU012@@Z
    MCAPI struct Puv::v1_20_50::PlanterItemComponent& operator=(struct Puv::v1_20_50::PlanterItemComponent&&);

    // symbol: ??4PlanterItemComponent@v1_20_50@Puv@@QEAAAEAU012@AEBU012@@Z
    MCAPI struct Puv::v1_20_50::PlanterItemComponent& operator=(struct Puv::v1_20_50::PlanterItemComponent const&);

    // symbol: ??1PlanterItemComponent@v1_20_50@Puv@@QEAA@XZ
    MCAPI ~PlanterItemComponent();

    // symbol: ?bindType@PlanterItemComponent@v1_20_50@Puv@@SAXAEAUReflectionCtx@cereal@@@Z
    MCAPI static void bindType(struct cereal::ReflectionCtx&);

    // NOLINTEND
};

}; // namespace Puv::v1_20_50
