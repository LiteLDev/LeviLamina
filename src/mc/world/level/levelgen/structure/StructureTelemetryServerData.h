#pragma once

#include "mc/_HeaderOutputPredefine.h"

class StructureTelemetryServerData {

public:
    // prevent constructor by default
    StructureTelemetryServerData& operator=(StructureTelemetryServerData const&) = delete;
    StructureTelemetryServerData(StructureTelemetryServerData const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0StructureTelemetryServerData\@\@QEAA\@XZ
     */
    MCAPI StructureTelemetryServerData();
    /**
     * @symbol ?hasBeenActivatedByRedstone\@StructureTelemetryServerData\@\@QEAA_NXZ
     */
    MCAPI bool hasBeenActivatedByRedstone();
    /**
     * @symbol ?setHasBeenActivedByRedstone\@StructureTelemetryServerData\@\@QEAAXXZ
     */
    MCAPI void setHasBeenActivedByRedstone();
    // NOLINTEND
};
