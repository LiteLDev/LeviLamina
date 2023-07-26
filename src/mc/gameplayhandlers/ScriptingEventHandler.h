#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ScriptingEventHandler {

public:
    // prevent constructor by default
    ScriptingEventHandler& operator=(ScriptingEventHandler const&) = delete;
    ScriptingEventHandler(ScriptingEventHandler const&)            = delete;
    ScriptingEventHandler()                                        = delete;
};
