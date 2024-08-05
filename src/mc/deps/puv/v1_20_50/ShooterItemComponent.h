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
        MCAPI Ammunition();

        MCAPI struct Puv::v1_20_50::ShooterItemComponent::Ammunition&
        operator=(struct Puv::v1_20_50::ShooterItemComponent::Ammunition&&);

        MCAPI struct Puv::v1_20_50::ShooterItemComponent::Ammunition&
        operator=(struct Puv::v1_20_50::ShooterItemComponent::Ammunition const&);

        // NOLINTEND
    };

public:
    // prevent constructor by default
    ShooterItemComponent();

public:
    // NOLINTBEGIN
    MCAPI ShooterItemComponent(struct Puv::v1_20_50::ShooterItemComponent const&);

    MCAPI struct Puv::v1_20_50::ShooterItemComponent& operator=(struct Puv::v1_20_50::ShooterItemComponent&&);

    MCAPI struct Puv::v1_20_50::ShooterItemComponent& operator=(struct Puv::v1_20_50::ShooterItemComponent const&);

    MCAPI static void bindType(struct cereal::ReflectionCtx&);

    // NOLINTEND
};

}; // namespace Puv::v1_20_50
