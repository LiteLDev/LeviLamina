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
    // symbol: ??4CooldownItemComponent@v1_20_50@Puv@@QEAAAEAU012@AEBU012@@Z
    MCAPI struct Puv::v1_20_50::CooldownItemComponent& operator=(struct Puv::v1_20_50::CooldownItemComponent const&);

    // symbol: ??1CooldownItemComponent@v1_20_50@Puv@@QEAA@XZ
    MCAPI ~CooldownItemComponent();

    // symbol: ?bindType@CooldownItemComponent@v1_20_50@Puv@@SAXAEAUReflectionCtx@cereal@@@Z
    MCAPI static void bindType(struct cereal::ReflectionCtx&);

    // NOLINTEND
};

}; // namespace Puv::v1_20_50
