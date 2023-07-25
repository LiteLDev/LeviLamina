#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ContainerValidationSlotData {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CONTAINERVALIDATIONSLOTDATA
public:
    ContainerValidationSlotData& operator=(ContainerValidationSlotData const&) = delete;
    ContainerValidationSlotData(ContainerValidationSlotData const&)            = delete;
    ContainerValidationSlotData()                                              = delete;
#endif

public:
    /**
     * @symbol ??0ContainerValidationSlotData\@\@QEAA\@W4ContainerEnumName\@\@H\@Z
     */
    MCAPI ContainerValidationSlotData(enum class ContainerEnumName, int);
    /**
     * @symbol ?AUTOPLACE\@ContainerValidationSlotData\@\@2U1\@B
     */
    MCAPI static struct ContainerValidationSlotData const AUTOPLACE;
};
