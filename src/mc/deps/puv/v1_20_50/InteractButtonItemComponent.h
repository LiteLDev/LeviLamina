#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Puv::v1_20_50 {

struct InteractButtonItemComponent {
public:
    // prevent constructor by default
    InteractButtonItemComponent(InteractButtonItemComponent const&);
    InteractButtonItemComponent();

public:
    // NOLINTBEGIN
    MCAPI struct Puv::v1_20_50::InteractButtonItemComponent&
    operator=(struct Puv::v1_20_50::InteractButtonItemComponent const&);

    MCAPI ~InteractButtonItemComponent();

    MCAPI static void bindType(struct cereal::ReflectionCtx&);

    // NOLINTEND
};

}; // namespace Puv::v1_20_50
