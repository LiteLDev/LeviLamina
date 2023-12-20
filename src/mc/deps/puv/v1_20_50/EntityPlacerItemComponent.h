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
    // symbol: ??4EntityPlacerItemComponent@v1_20_50@Puv@@QEAAAEAU012@$$QEAU012@@Z
    MCAPI struct Puv::v1_20_50::EntityPlacerItemComponent& operator=(struct Puv::v1_20_50::EntityPlacerItemComponent&&);

    // symbol: ??4EntityPlacerItemComponent@v1_20_50@Puv@@QEAAAEAU012@AEBU012@@Z
    MCAPI struct Puv::v1_20_50::EntityPlacerItemComponent&
    operator=(struct Puv::v1_20_50::EntityPlacerItemComponent const&);

    // symbol: ??1EntityPlacerItemComponent@v1_20_50@Puv@@QEAA@XZ
    MCAPI ~EntityPlacerItemComponent();

    // symbol: ?bindType@EntityPlacerItemComponent@v1_20_50@Puv@@SAXAEAUReflectionCtx@cereal@@@Z
    MCAPI static void bindType(struct cereal::ReflectionCtx&);

    // NOLINTEND
};

}; // namespace Puv::v1_20_50
