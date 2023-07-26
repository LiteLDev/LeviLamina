#pragma once

#include "mc/_HeaderOutputPredefine.h"

class StructureTelemetryServerData {

public:
    // prevent constructor by default
    StructureTelemetryServerData& operator=(StructureTelemetryServerData const&) = delete;
    StructureTelemetryServerData(StructureTelemetryServerData const&)            = delete;

public:
    /**
     * @symbol ??0StructureTelemetryServerData\@\@QEAA\@XZ
     */
    MCAPI StructureTelemetryServerData(); // NOLINT
    /**
     * @symbol ?hasBeenActivatedByRedstone\@StructureTelemetryServerData\@\@QEAA_NXZ
     */
    MCAPI bool hasBeenActivatedByRedstone(); // NOLINT
    /**
     * @symbol ?setHasBeenActivedByRedstone\@StructureTelemetryServerData\@\@QEAAXXZ
     */
    MCAPI void setHasBeenActivedByRedstone(); // NOLINT
};
