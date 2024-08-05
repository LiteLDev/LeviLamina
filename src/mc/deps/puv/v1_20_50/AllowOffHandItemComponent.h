#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Puv::v1_20_50 {

struct AllowOffHandItemComponent {
public:
    // prevent constructor by default
    AllowOffHandItemComponent& operator=(AllowOffHandItemComponent const&);
    AllowOffHandItemComponent(AllowOffHandItemComponent const&);
    AllowOffHandItemComponent();

public:
    // NOLINTBEGIN
    MCAPI static void bindType(struct cereal::ReflectionCtx&);

    // NOLINTEND
};

}; // namespace Puv::v1_20_50
