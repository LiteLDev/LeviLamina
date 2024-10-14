#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/ContainerEnumName.h"

struct ContainerValidationSlotData {
public:
    // prevent constructor by default
    ContainerValidationSlotData& operator=(ContainerValidationSlotData const&);
    ContainerValidationSlotData(ContainerValidationSlotData const&);
    ContainerValidationSlotData();

public:
    // NOLINTBEGIN
    MCAPI ContainerValidationSlotData(::ContainerEnumName containerEnumName, int slotIndex);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI static struct ContainerValidationSlotData const& AUTOPLACE();

    // NOLINTEND
};
