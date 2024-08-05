#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft::ScriptPropertyComponents {

struct PropertyComponentRegistration {
public:
    // prevent constructor by default
    PropertyComponentRegistration& operator=(PropertyComponentRegistration const&);
    PropertyComponentRegistration(PropertyComponentRegistration const&);
    PropertyComponentRegistration();

public:
    // NOLINTBEGIN
    MCAPI ~PropertyComponentRegistration();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft::ScriptPropertyComponents
