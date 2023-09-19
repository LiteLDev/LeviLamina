#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/InterfaceBindingBuilder.h"

// auto generated forward declare list
// clang-format off
class BoundingBox;
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBoundingBox {
public:
    // prevent constructor by default
    ScriptBoundingBox& operator=(ScriptBoundingBox const&);
    ScriptBoundingBox(ScriptBoundingBox const&);
    ScriptBoundingBox();

public:
    // NOLINTBEGIN
    // symbol:
    // ?bind@ScriptBoundingBox@ScriptModuleMinecraft@@SA?AV?$InterfaceBindingBuilder@VBoundingBox@@@Scripting@@XZ
    MCAPI static class Scripting::InterfaceBindingBuilder<class BoundingBox> bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
