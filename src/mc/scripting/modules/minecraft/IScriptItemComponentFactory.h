#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

class IScriptItemComponentFactory {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMODULEMINECRAFT_ISCRIPTITEMCOMPONENTFACTORY
public:
    IScriptItemComponentFactory& operator=(IScriptItemComponentFactory const&) = delete;
    IScriptItemComponentFactory(IScriptItemComponentFactory const&)            = delete;
    IScriptItemComponentFactory()                                              = delete;
#endif

public:
};

}; // namespace ScriptModuleMinecraft
