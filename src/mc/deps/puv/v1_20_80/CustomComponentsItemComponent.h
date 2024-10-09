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
    MCAPI ~CustomComponentsItemComponent();

    MCAPI static void bindType(struct cereal::ReflectionCtx& ctx);

    // NOLINTEND
};

}; // namespace Puv::v1_20_80
