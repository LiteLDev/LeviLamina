#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Puv::v1_20_50 {

struct MaxStackSizeItemComponent {
public:
    // prevent constructor by default
    MaxStackSizeItemComponent& operator=(MaxStackSizeItemComponent const&);
    MaxStackSizeItemComponent(MaxStackSizeItemComponent const&);
    MaxStackSizeItemComponent();

public:
    // NOLINTBEGIN
    MCAPI static void bindType(struct cereal::ReflectionCtx& ctx);

    // NOLINTEND
};

}; // namespace Puv::v1_20_50
