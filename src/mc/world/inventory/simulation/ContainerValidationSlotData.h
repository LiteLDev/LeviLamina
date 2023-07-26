#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ContainerValidationSlotData {

public:
    // prevent constructor by default
    ContainerValidationSlotData& operator=(ContainerValidationSlotData const&) = delete;
    ContainerValidationSlotData(ContainerValidationSlotData const&)            = delete;
    ContainerValidationSlotData()                                              = delete;

public:
    /**
     * @symbol ??0ContainerValidationSlotData\@\@QEAA\@W4ContainerEnumName\@\@H\@Z
     */
    MCAPI ContainerValidationSlotData(enum class ContainerEnumName, int); // NOLINT
    /**
     * @symbol ?AUTOPLACE\@ContainerValidationSlotData\@\@2U1\@B
     */
    MCAPI static struct ContainerValidationSlotData const AUTOPLACE; // NOLINT
};
