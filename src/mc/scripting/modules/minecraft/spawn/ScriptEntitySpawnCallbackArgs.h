#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/ScriptDimensionLocation.h"
#include "mc/world/level/chunk/EntitySpawnReason.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptEntitySpawnType; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptEntitySpawnCallbackArgs {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptEntitySpawnType>>
                                                                                mEntitySpawnType;
    ::ll::TypedStorage<2, 2, ::br::spawn::EntitySpawnReason>                    mEntitySpawnReason;
    ::ll::TypedStorage<8, 48, ::ScriptModuleMinecraft::ScriptDimensionLocation> mDimensionLocation;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
