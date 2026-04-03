#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class ServerLevel;
namespace ScriptModuleServerGraphics { class ScriptColorGrading; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleServerGraphics {

class ScriptColorGradingFactory {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::StrongTypedObjectHandle<::ScriptModuleServerGraphics::ScriptColorGrading>
    getHandle(::Scripting::WeakLifetimeScope& scope, ::ServerLevel& level);
    // NOLINTEND
};

} // namespace ScriptModuleServerGraphics
