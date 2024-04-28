#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Puv::v1_20_50 {

struct ShooterItemComponent {
public:
    // ShooterItemComponent inner types declare
    // clang-format off
    struct Ammunition;
    // clang-format on

    // ShooterItemComponent inner types define
    struct Ammunition {
    public:
        // prevent constructor by default
        Ammunition(Ammunition const&);

    public:
        // NOLINTBEGIN
        // symbol: ??0Ammunition@ShooterItemComponent@v1_20_50@Puv@@QEAA@XZ
        MCAPI Ammunition();

        // symbol: ??4Ammunition@ShooterItemComponent@v1_20_50@Puv@@QEAAAEAU0123@$$QEAU0123@@Z
        MCAPI struct Puv::v1_20_50::ShooterItemComponent::Ammunition&
        operator=(struct Puv::v1_20_50::ShooterItemComponent::Ammunition&&);

        // symbol: ??4Ammunition@ShooterItemComponent@v1_20_50@Puv@@QEAAAEAU0123@AEBU0123@@Z
        MCAPI struct Puv::v1_20_50::ShooterItemComponent::Ammunition&
        operator=(struct Puv::v1_20_50::ShooterItemComponent::Ammunition const&);

        // NOLINTEND
    };

public:
    // prevent constructor by default
    ShooterItemComponent();

public:
    // NOLINTBEGIN
    // symbol: ??0ShooterItemComponent@v1_20_50@Puv@@QEAA@AEBU012@@Z
    MCAPI ShooterItemComponent(struct Puv::v1_20_50::ShooterItemComponent const&);

    // symbol: ??4ShooterItemComponent@v1_20_50@Puv@@QEAAAEAU012@$$QEAU012@@Z
    MCAPI struct Puv::v1_20_50::ShooterItemComponent& operator=(struct Puv::v1_20_50::ShooterItemComponent&&);

    // symbol: ??4ShooterItemComponent@v1_20_50@Puv@@QEAAAEAU012@AEBU012@@Z
    MCAPI struct Puv::v1_20_50::ShooterItemComponent& operator=(struct Puv::v1_20_50::ShooterItemComponent const&);

    // symbol: ?bindType@ShooterItemComponent@v1_20_50@Puv@@SAXAEAUReflectionCtx@cereal@@@Z
    MCAPI static void bindType(struct cereal::ReflectionCtx&);

    // NOLINTEND
};

}; // namespace Puv::v1_20_50
