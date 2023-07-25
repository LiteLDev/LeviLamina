#pragma once

#include "mc/_HeaderOutputPredefine.h"

class StructureTelemetryClientData {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STRUCTURETELEMETRYCLIENTDATA
public:
    StructureTelemetryClientData& operator=(StructureTelemetryClientData const&) = delete;
    StructureTelemetryClientData(StructureTelemetryClientData const&)            = delete;
    StructureTelemetryClientData()                                               = delete;
#endif

public:
    /**
     * @symbol ?getMirrorEditCount\@StructureTelemetryClientData\@\@QEBAIXZ
     */
    MCAPI unsigned int getMirrorEditCount() const;
    /**
     * @symbol ?getOffsetEditCount\@StructureTelemetryClientData\@\@QEBAIXZ
     */
    MCAPI unsigned int getOffsetEditCount() const;
    /**
     * @symbol ?getRotationEditCount\@StructureTelemetryClientData\@\@QEBAIXZ
     */
    MCAPI unsigned int getRotationEditCount() const;
    /**
     * @symbol ?getSizeEditCount\@StructureTelemetryClientData\@\@QEBAIXZ
     */
    MCAPI unsigned int getSizeEditCount() const;
};
