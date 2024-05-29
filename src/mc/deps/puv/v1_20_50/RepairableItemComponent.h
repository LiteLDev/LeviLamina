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
        // symbol: ??4RepairItemEntry@RepairableItemComponent@v1_20_50@Puv@@QEAAAEAU0123@$$QEAU0123@@Z
        MCAPI struct Puv::v1_20_50::RepairableItemComponent::RepairItemEntry&
        operator=(struct Puv::v1_20_50::RepairableItemComponent::RepairItemEntry&&);

        // symbol: ??4RepairItemEntry@RepairableItemComponent@v1_20_50@Puv@@QEAAAEAU0123@AEBU0123@@Z
        MCAPI struct Puv::v1_20_50::RepairableItemComponent::RepairItemEntry&
        operator=(struct Puv::v1_20_50::RepairableItemComponent::RepairItemEntry const&);

        // symbol: ??1RepairItemEntry@RepairableItemComponent@v1_20_50@Puv@@QEAA@XZ
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
    // symbol: ??1RepairableItemComponent@v1_20_50@Puv@@QEAA@XZ
    MCAPI ~RepairableItemComponent();

    // symbol: ?bindType@RepairableItemComponent@v1_20_50@Puv@@SAXAEAUReflectionCtx@cereal@@@Z
    MCAPI static void bindType(struct cereal::ReflectionCtx&);

    // NOLINTEND
};

}; // namespace Puv::v1_20_50
