#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

class IComponentFactory {
public:
    // prevent constructor by default
    IComponentFactory& operator=(IComponentFactory const&);
    IComponentFactory(IComponentFactory const&);
    IComponentFactory();
};

}; // namespace ScriptModuleMinecraft
