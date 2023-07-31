#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

class WorldRecoveryTelemetryHandler {

public:
    // prevent constructor by default
    WorldRecoveryTelemetryHandler& operator=(WorldRecoveryTelemetryHandler const&) = delete;
    WorldRecoveryTelemetryHandler(WorldRecoveryTelemetryHandler const&)            = delete;
    WorldRecoveryTelemetryHandler()                                                = delete;

public:
    // NOLINTBEGIN
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BEDROCK_WORLDRECOVERYTELEMETRYHANDLER
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~WorldRecoveryTelemetryHandler();
#endif
    // NOLINTEND
};

}; // namespace Bedrock
