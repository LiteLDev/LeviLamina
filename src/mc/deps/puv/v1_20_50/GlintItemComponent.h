#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Puv::v1_20_50 {

struct GlintItemComponent {
public:
    // prevent constructor by default
    GlintItemComponent& operator=(GlintItemComponent const&);
    GlintItemComponent(GlintItemComponent const&);
    GlintItemComponent();

public:
    // NOLINTBEGIN
    MCAPI static void bindType(struct cereal::ReflectionCtx&);

    // NOLINTEND
};

}; // namespace Puv::v1_20_50
