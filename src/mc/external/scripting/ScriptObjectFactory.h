#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

class ScriptObjectFactory {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTING_SCRIPTOBJECTFACTORY
public:
    ScriptObjectFactory& operator=(ScriptObjectFactory const&) = delete;
    ScriptObjectFactory(ScriptObjectFactory const&)            = delete;
    ScriptObjectFactory()                                      = delete;
#endif

public:
};

}; // namespace Scripting
