#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting::QuickJS {

class RuntimeUserData {
public:
    // prevent constructor by default
    RuntimeUserData& operator=(RuntimeUserData const&);
    RuntimeUserData(RuntimeUserData const&);
    RuntimeUserData();
};

}; // namespace Scripting::QuickJS
