#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Puv::v1_20_50 {

struct CooldownItemComponent {
public:
    // prevent constructor by default
    CooldownItemComponent(CooldownItemComponent const&);
    CooldownItemComponent();

public:
    // NOLINTBEGIN
    MCAPI struct Puv::v1_20_50::CooldownItemComponent& operator=(struct Puv::v1_20_50::CooldownItemComponent const&);

    MCAPI ~CooldownItemComponent();

    MCAPI static void bindType(struct cereal::ReflectionCtx&);

    // NOLINTEND
};

}; // namespace Puv::v1_20_50
