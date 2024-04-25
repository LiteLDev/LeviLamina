#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Puv::v1_20_80 {

struct CustomComponentsItemComponent {
public:
    // prevent constructor by default
    CustomComponentsItemComponent& operator=(CustomComponentsItemComponent const&);
    CustomComponentsItemComponent(CustomComponentsItemComponent const&);
    CustomComponentsItemComponent();

public:
    // NOLINTBEGIN
    // symbol: ??1CustomComponentsItemComponent@v1_20_80@Puv@@QEAA@XZ
    MCAPI ~CustomComponentsItemComponent();

    // symbol: ?bindType@CustomComponentsItemComponent@v1_20_80@Puv@@SAXAEAUReflectionCtx@cereal@@@Z
    MCAPI static void bindType(struct cereal::ReflectionCtx&);

    // NOLINTEND
};

}; // namespace Puv::v1_20_80
