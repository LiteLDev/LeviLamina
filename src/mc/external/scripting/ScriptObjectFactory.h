#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

class ScriptObjectFactory {

public:
    // prevent constructor by default
    ScriptObjectFactory& operator=(ScriptObjectFactory const&) = delete;
    ScriptObjectFactory(ScriptObjectFactory const&)            = delete;
    ScriptObjectFactory()                                      = delete;
};

}; // namespace Scripting
