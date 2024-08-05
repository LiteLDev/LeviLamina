#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Puv::v1_20_50 {

struct RepairableItemComponent {
public:
    // RepairableItemComponent inner types declare
    // clang-format off
    struct RepairItemEntry;
    // clang-format on

    // RepairableItemComponent inner types define
    struct RepairItemEntry {
    public:
        // prevent constructor by default
        RepairItemEntry(RepairItemEntry const&);
        RepairItemEntry();

    public:
        // NOLINTBEGIN
        MCAPI struct Puv::v1_20_50::RepairableItemComponent::RepairItemEntry&
        operator=(struct Puv::v1_20_50::RepairableItemComponent::RepairItemEntry&&);

        MCAPI struct Puv::v1_20_50::RepairableItemComponent::RepairItemEntry&
        operator=(struct Puv::v1_20_50::RepairableItemComponent::RepairItemEntry const&);

        MCAPI ~RepairItemEntry();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    RepairableItemComponent& operator=(RepairableItemComponent const&);
    RepairableItemComponent(RepairableItemComponent const&);
    RepairableItemComponent();

public:
    // NOLINTBEGIN
    MCAPI ~RepairableItemComponent();

    MCAPI static void bindType(struct cereal::ReflectionCtx&);

    // NOLINTEND
};

}; // namespace Puv::v1_20_50
