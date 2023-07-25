#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

class IComponentFactory {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMODULEMINECRAFT_ICOMPONENTFACTORY
public:
    IComponentFactory& operator=(IComponentFactory const&) = delete;
    IComponentFactory(IComponentFactory const&)            = delete;
    IComponentFactory()                                    = delete;
#endif

public:
};

}; // namespace ScriptModuleMinecraft
