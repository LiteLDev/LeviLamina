#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

class IObjectInspector {
public:
    // prevent constructor by default
    IObjectInspector& operator=(IObjectInspector const&);
    IObjectInspector(IObjectInspector const&);
    IObjectInspector();
};

}; // namespace Scripting
