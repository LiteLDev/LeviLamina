#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting::QuickJS {

struct PropertyGetSet {
public:
    // prevent constructor by default
    PropertyGetSet& operator=(PropertyGetSet const&);
    PropertyGetSet(PropertyGetSet const&);
    PropertyGetSet();
};

}; // namespace Scripting::QuickJS
