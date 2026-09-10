#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/Result.h"
#include "mc/scripting/modules/minecraft/block/components/BaseScriptBlockComponent.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { struct ScriptBlockInvalidComponentError; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBlockRedstoneProducerComponent : public ::ScriptModuleMinecraft::BaseScriptBlockComponent {
public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::Scripting::Result<int, ::ScriptModuleMinecraft::ScriptBlockInvalidComponentError> getPower() const;
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
