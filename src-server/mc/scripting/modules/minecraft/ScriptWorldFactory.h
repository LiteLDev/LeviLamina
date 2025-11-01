#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class ServerLevel;
namespace ScriptModuleMinecraft { class ScriptWorld; }
namespace Scripting { class DependencyLocator; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ContextConfig; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptWorldFactory {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptWorld>> findHandle(::Scripting::WeakLifetimeScope& scope, ::ServerLevel& level);

    MCNAPI static ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptWorld> getHandle(::Scripting::WeakLifetimeScope& scope, ::ServerLevel& level, ::Scripting::DependencyLocator& locator, ::Scripting::ContextConfig const& config);
    // NOLINTEND

};

}
