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
    // symbol: ??4InteractButtonItemComponent@v1_20_50@Puv@@QEAAAEAU012@AEBU012@@Z
    MCAPI struct Puv::v1_20_50::InteractButtonItemComponent&
    operator=(struct Puv::v1_20_50::InteractButtonItemComponent const&);

    // symbol: ??1InteractButtonItemComponent@v1_20_50@Puv@@QEAA@XZ
    MCAPI ~InteractButtonItemComponent();

    // symbol: ?bindType@InteractButtonItemComponent@v1_20_50@Puv@@SAXAEAUReflectionCtx@cereal@@@Z
    MCAPI static void bindType(struct cereal::ReflectionCtx&);

    // NOLINTEND
};

}; // namespace Puv::v1_20_50
