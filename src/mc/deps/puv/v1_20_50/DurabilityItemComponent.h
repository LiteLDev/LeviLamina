#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Puv::v1_20_50 {

struct DurabilityItemComponent {
public:
    // prevent constructor by default
    DurabilityItemComponent& operator=(DurabilityItemComponent const&);
    DurabilityItemComponent(DurabilityItemComponent const&);
    DurabilityItemComponent();

public:
    // NOLINTBEGIN
    MCAPI static void bindType(struct cereal::ReflectionCtx& ctx);

    // NOLINTEND
};

}; // namespace Puv::v1_20_50
