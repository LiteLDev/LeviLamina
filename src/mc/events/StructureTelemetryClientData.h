#pragma once

#include "mc/_HeaderOutputPredefine.h"

class StructureTelemetryClientData {

public:
    // prevent constructor by default
    StructureTelemetryClientData& operator=(StructureTelemetryClientData const&) = delete;
    StructureTelemetryClientData(StructureTelemetryClientData const&)            = delete;
    StructureTelemetryClientData()                                               = delete;

public:
    /**
     * @symbol ?getMirrorEditCount\@StructureTelemetryClientData\@\@QEBAIXZ
     */
    MCAPI unsigned int getMirrorEditCount() const; // NOLINT
    /**
     * @symbol ?getOffsetEditCount\@StructureTelemetryClientData\@\@QEBAIXZ
     */
    MCAPI unsigned int getOffsetEditCount() const; // NOLINT
    /**
     * @symbol ?getRotationEditCount\@StructureTelemetryClientData\@\@QEBAIXZ
     */
    MCAPI unsigned int getRotationEditCount() const; // NOLINT
    /**
     * @symbol ?getSizeEditCount\@StructureTelemetryClientData\@\@QEBAIXZ
     */
    MCAPI unsigned int getSizeEditCount() const; // NOLINT
};
