#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Http {

class HttpProblemSimulatorSettings {
public:
    // prevent constructor by default
    HttpProblemSimulatorSettings& operator=(HttpProblemSimulatorSettings const&);
    HttpProblemSimulatorSettings(HttpProblemSimulatorSettings const&);
    HttpProblemSimulatorSettings();
};

}; // namespace Bedrock::Http
