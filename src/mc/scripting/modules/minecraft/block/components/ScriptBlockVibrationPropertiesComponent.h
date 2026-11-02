#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/Result.h"
#include "mc/scripting/modules/minecraft/block/components/BaseScriptBlockComponent.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { struct ScriptLocationInUnloadedChunkError; }
namespace ScriptModuleMinecraft { struct ScriptLocationOutOfWorldBoundsError; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBlockVibrationPropertiesComponent : public ::ScriptModuleMinecraft::BaseScriptBlockComponent {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result<
        bool,
        ::ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        ::ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    getCanDampenVibrations() const;

    MCNAPI ::Scripting::Result<
        bool,
        ::ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        ::ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    getCanOccludeVibrations() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static char const*& ComponentId();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
