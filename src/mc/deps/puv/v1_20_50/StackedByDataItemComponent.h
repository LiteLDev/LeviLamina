#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Puv::v1_20_50 {

struct StackedByDataItemComponent {
public:
    // prevent constructor by default
    StackedByDataItemComponent& operator=(StackedByDataItemComponent const&);
    StackedByDataItemComponent(StackedByDataItemComponent const&);
    StackedByDataItemComponent();

public:
    // NOLINTBEGIN
    MCAPI static void bindType(struct cereal::ReflectionCtx& ctx);

    // NOLINTEND
};

}; // namespace Puv::v1_20_50
