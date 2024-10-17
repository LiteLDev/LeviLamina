#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/runtime/Result.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { struct ScriptBlockCustomComponentInterface; }
namespace Scripting { class DependencyLocator; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct EngineError; }
namespace Scripting { struct Error; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBlockComponentRegistry {
public:
    // prevent constructor by default
    ScriptBlockComponentRegistry& operator=(ScriptBlockComponentRegistry const&);
    ScriptBlockComponentRegistry(ScriptBlockComponentRegistry const&);
    ScriptBlockComponentRegistry();

public:
    // NOLINTBEGIN
    MCAPI class Scripting::Result<void, struct Scripting::EngineError, struct Scripting::Error> registerCustomComponent(
        class Scripting::WeakLifetimeScope&                               scope,
        class Scripting::DependencyLocator&                               locator,
        std::string const&                                                compName,
        struct ScriptModuleMinecraft::ScriptBlockCustomComponentInterface closures
    );

    MCAPI static struct Scripting::ClassBinding bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
