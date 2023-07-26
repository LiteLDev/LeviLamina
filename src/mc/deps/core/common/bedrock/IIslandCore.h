#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

class IIslandCore {

public:
    // prevent constructor by default
    IIslandCore& operator=(IIslandCore const&) = delete;
    IIslandCore(IIslandCore const&)            = delete;
    IIslandCore()                              = delete;

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BEDROCK_IISLANDCORE
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~IIslandCore(); // NOLINT
#endif
};

}; // namespace Bedrock
