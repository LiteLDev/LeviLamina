#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Puv::v1_20_50 {

struct DamageItemComponent {
public:
    // prevent constructor by default
    DamageItemComponent& operator=(DamageItemComponent const&);
    DamageItemComponent(DamageItemComponent const&);
    DamageItemComponent();

public:
    // NOLINTBEGIN
    // symbol: ?bindType@DamageItemComponent@v1_20_50@Puv@@SAXAEAUReflectionCtx@cereal@@@Z
    MCAPI static void bindType(struct cereal::ReflectionCtx&);

    // NOLINTEND
};

}; // namespace Puv::v1_20_50
