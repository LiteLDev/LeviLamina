#pragma once

#include "mc/_HeaderOutputPredefine.h"

class StructureTelemetryClientData {

public:
    // prevent constructor by default
    StructureTelemetryClientData& operator=(StructureTelemetryClientData const&) = delete;
    StructureTelemetryClientData(StructureTelemetryClientData const&)            = delete;
    StructureTelemetryClientData()                                               = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?getMirrorEditCount\@StructureTelemetryClientData\@\@QEBAIXZ
     */
    MCAPI uint32_t getMirrorEditCount() const;
    /**
     * @symbol ?getOffsetEditCount\@StructureTelemetryClientData\@\@QEBAIXZ
     */
    MCAPI uint32_t getOffsetEditCount() const;
    /**
     * @symbol ?getRotationEditCount\@StructureTelemetryClientData\@\@QEBAIXZ
     */
    MCAPI uint32_t getRotationEditCount() const;
    /**
     * @symbol ?getSizeEditCount\@StructureTelemetryClientData\@\@QEBAIXZ
     */
    MCAPI uint32_t getSizeEditCount() const;
    // NOLINTEND
};
