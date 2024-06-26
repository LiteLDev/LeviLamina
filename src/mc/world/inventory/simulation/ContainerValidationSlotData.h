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
    // symbol: ??0ContainerValidationSlotData@@QEAA@W4ContainerEnumName@@H@Z
    MCAPI ContainerValidationSlotData(::ContainerEnumName containerEnumName, int slotIndex);

    // symbol: ?AUTOPLACE@ContainerValidationSlotData@@2U1@B
    MCAPI static struct ContainerValidationSlotData const AUTOPLACE;

    // NOLINTEND
};
