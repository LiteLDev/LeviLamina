#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#include "mc/scripting/modules/minecraft/block/ScriptTintMethod.h"
#include "mc/scripting/modules/minecraft/block/components/BaseScriptBlockComponent.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptRGBA; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBlockMapColorComponent : public ::ScriptModuleMinecraft::BaseScriptBlockComponent {
public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::Scripting::Result_deprecated<::ScriptModuleMinecraft::ScriptRGBA> color() const;

    MCAPI ::Scripting::Result_deprecated<::ScriptModuleMinecraft::ScriptTintMethod> tintMethod() const;
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
