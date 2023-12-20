#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Puv::v1_20_50 {

struct ShouldDespawnItemComponent {
public:
    // prevent constructor by default
    ShouldDespawnItemComponent& operator=(ShouldDespawnItemComponent const&);
    ShouldDespawnItemComponent(ShouldDespawnItemComponent const&);
    ShouldDespawnItemComponent();

public:
    // NOLINTBEGIN
    // symbol: ?bindType@ShouldDespawnItemComponent@v1_20_50@Puv@@SAXAEAUReflectionCtx@cereal@@@Z
    MCAPI static void bindType(struct cereal::ReflectionCtx&);

    // NOLINTEND
};

}; // namespace Puv::v1_20_50
