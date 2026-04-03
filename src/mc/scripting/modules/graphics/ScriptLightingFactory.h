#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class ServerLevel;
namespace ScriptModuleServerGraphics { class ScriptLighting; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleServerGraphics {

class ScriptLightingFactory {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::StrongTypedObjectHandle<::ScriptModuleServerGraphics::ScriptLighting>
    getHandle(::Scripting::WeakLifetimeScope& scope, ::ServerLevel& level);
    // NOLINTEND
};

} // namespace ScriptModuleServerGraphics
