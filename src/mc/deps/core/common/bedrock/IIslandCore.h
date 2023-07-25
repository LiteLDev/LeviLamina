#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

class IIslandCore {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEDROCK_IISLANDCORE
public:
    IIslandCore& operator=(IIslandCore const&) = delete;
    IIslandCore(IIslandCore const&)            = delete;
    IIslandCore()                              = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BEDROCK_IISLANDCORE
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~IIslandCore();
#endif
};

}; // namespace Bedrock
