#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/InterfaceBindingBuilder.h"

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
    // symbol: ?bind@ScriptNumberRange@ScriptModuleMinecraft@@SA?AV?$InterfaceBindingBuilder@UFloatRange@@@Scripting@@XZ
    MCAPI static class Scripting::InterfaceBindingBuilder<struct FloatRange> bind();

    // symbol: ?bindV010@ScriptNumberRange@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@UFloatRange@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<struct FloatRange> bindV010();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
