#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/block/components/BaseScriptBlockComponent.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct EnumBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBlockMovableComponent : public ::ScriptModuleMinecraft::BaseScriptBlockComponent {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::EnumBinding bindMovementType();

    MCAPI static ::Scripting::EnumBinding bindStickyType();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
