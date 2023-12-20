#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IScriptStatPublisher {
public:
    // prevent constructor by default
    IScriptStatPublisher& operator=(IScriptStatPublisher const&);
    IScriptStatPublisher(IScriptStatPublisher const&);
    IScriptStatPublisher();
};
