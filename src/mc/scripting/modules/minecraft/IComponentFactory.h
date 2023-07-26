#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

class IComponentFactory {

public:
    // prevent constructor by default
    IComponentFactory& operator=(IComponentFactory const&) = delete;
    IComponentFactory(IComponentFactory const&)            = delete;
    IComponentFactory()                                    = delete;
};

}; // namespace ScriptModuleMinecraft
