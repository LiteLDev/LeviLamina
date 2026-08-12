#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/Result.h"
#include "mc/scripting/modules/minecraft/block/components/BaseScriptBlockComponent.h"
#include "mc/scripting/modules/minecraft/block/components/ScriptMovementType.h"
#include "mc/scripting/modules/minecraft/block/components/ScriptStickyType.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { struct ScriptLocationInUnloadedChunkError; }
namespace ScriptModuleMinecraft { struct ScriptLocationOutOfWorldBoundsError; }
namespace Scripting { struct EnumBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBlockMovableComponent : public ::ScriptModuleMinecraft::BaseScriptBlockComponent {
public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::Scripting::Result<
        ::ScriptModuleMinecraft::ScriptMovementType,
        ::ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        ::ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    movementType() const;

    MCAPI ::Scripting::Result<
        ::ScriptModuleMinecraft::ScriptStickyType,
        ::ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        ::ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    stickyType() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::EnumBinding bindMovementType();

    MCAPI static ::Scripting::EnumBinding bindStickyType();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
