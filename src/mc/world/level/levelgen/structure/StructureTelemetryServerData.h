#pragma once

#include "mc/_HeaderOutputPredefine.h"

class StructureTelemetryServerData {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STRUCTURETELEMETRYSERVERDATA
public:
    StructureTelemetryServerData& operator=(StructureTelemetryServerData const&) = delete;
    StructureTelemetryServerData(StructureTelemetryServerData const&)            = delete;
#endif

public:
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
};
