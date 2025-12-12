#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class ServerLevel;
namespace ScriptModuleMinecraft { class ScriptSystem; }
namespace Scripting { class DependencyLocator; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptSystemFactory {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptSystem>
    getHandle(::Scripting::WeakLifetimeScope& scope, ::ServerLevel& level, ::Scripting::DependencyLocator& locator);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
