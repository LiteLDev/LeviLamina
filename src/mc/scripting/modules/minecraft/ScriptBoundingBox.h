#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/InterfaceBindingBuilder.h"

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
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::InterfaceBindingBuilder<::BoundingBox> bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
