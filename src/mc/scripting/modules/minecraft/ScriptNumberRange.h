#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"

// auto generated forward declare list
// clang-format off
struct FloatRange;
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptNumberRange {
public:
    // prevent constructor by default
    ScriptNumberRange& operator=(ScriptNumberRange const&);
    ScriptNumberRange(ScriptNumberRange const&);
    ScriptNumberRange();

public:
    // NOLINTBEGIN
    MCAPI static class Scripting::ClassBindingBuilder<struct FloatRange> bindV010();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
