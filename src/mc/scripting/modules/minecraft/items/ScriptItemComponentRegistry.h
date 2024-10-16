#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/runtime/Result.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class IScriptItemCustomComponentRegistry; }
namespace ScriptModuleMinecraft { struct ScriptItemCustomComponentAlreadyRegisteredError; }
namespace ScriptModuleMinecraft { struct ScriptItemCustomComponentClosures; }
namespace ScriptModuleMinecraft { struct ScriptItemCustomComponentNameError; }
namespace ScriptModuleMinecraft { struct ScriptItemCustomComponentReloadNewComponentError; }
namespace ScriptModuleMinecraft { struct ScriptItemCustomComponentReloadNewEventError; }
namespace ScriptModuleMinecraft { struct ScriptItemCustomComponentReloadVersionError; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptItemComponentRegistry {
public:
    // prevent constructor by default
    ScriptItemComponentRegistry& operator=(ScriptItemComponentRegistry const&);
    ScriptItemComponentRegistry(ScriptItemComponentRegistry const&);
    ScriptItemComponentRegistry();

public:
    // NOLINTBEGIN
    MCAPI explicit ScriptItemComponentRegistry(
        class ScriptModuleMinecraft::IScriptItemCustomComponentRegistry& customComponentRegistry
    );

    MCAPI class Scripting::Result<
        void,
        struct ScriptModuleMinecraft::ScriptItemCustomComponentNameError,
        struct ScriptModuleMinecraft::ScriptItemCustomComponentAlreadyRegisteredError,
        struct ScriptModuleMinecraft::ScriptItemCustomComponentReloadVersionError,
        struct ScriptModuleMinecraft::ScriptItemCustomComponentReloadNewEventError,
        struct ScriptModuleMinecraft::ScriptItemCustomComponentReloadNewComponentError>
    registerCustomComponent(
        class Scripting::WeakLifetimeScope&                              scope,
        std::string const&                                               componentName,
        struct ScriptModuleMinecraft::ScriptItemCustomComponentClosures& closures
    );

    MCAPI static struct Scripting::ClassBinding bind();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(class ScriptModuleMinecraft::IScriptItemCustomComponentRegistry& customComponentRegistry);

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
