#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/deps/script_core/runtime/scripting/Result.h"

// auto generated forward declare list
// clang-format off
class FogCommandComponent;
namespace ScriptModuleMinecraft { struct ScriptInvalidActorError; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptFogSettings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::WeakEntityRef> mEntityRef;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::FogCommandComponent* _getFogComponent() const;

    MCNAPI void _sendFogUpdatePacket() const;

    MCNAPI ::Scripting::Result<::std::vector<::std::string>, ::ScriptModuleMinecraft::ScriptInvalidActorError>
    getStack() const;

    MCNAPI ::Scripting::Result<::std::vector<::std::string>, ::ScriptModuleMinecraft::ScriptInvalidActorError>
    getTags() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
