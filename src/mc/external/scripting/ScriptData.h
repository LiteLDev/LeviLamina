#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct ScriptData {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTING_SCRIPTDATA
public:
    ScriptData& operator=(ScriptData const&) = delete;
    ScriptData(ScriptData const&)            = delete;
    ScriptData()                             = delete;
#endif

public:
};

}; // namespace Scripting
