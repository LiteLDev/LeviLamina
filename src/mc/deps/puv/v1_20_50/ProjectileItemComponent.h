#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Puv::v1_20_50 {

struct ProjectileItemComponent {
public:
    // prevent constructor by default
    ProjectileItemComponent(ProjectileItemComponent const&);
    ProjectileItemComponent();

public:
    // NOLINTBEGIN
    // symbol: ??4ProjectileItemComponent@v1_20_50@Puv@@QEAAAEAU012@AEBU012@@Z
    MCAPI struct Puv::v1_20_50::ProjectileItemComponent&
    operator=(struct Puv::v1_20_50::ProjectileItemComponent const&);

    // symbol: ??1ProjectileItemComponent@v1_20_50@Puv@@QEAA@XZ
    MCAPI ~ProjectileItemComponent();

    // symbol: ?bindType@ProjectileItemComponent@v1_20_50@Puv@@SAXAEAUReflectionCtx@cereal@@@Z
    MCAPI static void bindType(struct cereal::ReflectionCtx&);

    // NOLINTEND
};

}; // namespace Puv::v1_20_50
