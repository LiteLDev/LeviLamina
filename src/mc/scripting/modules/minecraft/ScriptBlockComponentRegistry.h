#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/Result.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptBlockCustomComponentInterface; }
namespace ScriptModuleMinecraft { class ScriptBlockCustomComponentsRegistry; }
namespace ScriptModuleMinecraft { struct ScriptBlockCustomComponentAlreadyRegisteredError; }
namespace ScriptModuleMinecraft { struct ScriptBlockCustomComponentReloadNewComponentError; }
namespace ScriptModuleMinecraft { struct ScriptBlockCustomComponentReloadNewEventError; }
namespace ScriptModuleMinecraft { struct ScriptBlockCustomComponentReloadVersionError; }
namespace ScriptModuleMinecraft { struct ScriptCustomComponentInvalidRegistryError; }
namespace ScriptModuleMinecraft { struct ScriptCustomComponentNameError; }
namespace ScriptModuleMinecraft { struct ScriptNamespaceNameError; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct EngineError; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBlockComponentRegistry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ScriptModuleMinecraft::ScriptBlockCustomComponentsRegistry&> mRegistry;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBlockComponentRegistry& operator=(ScriptBlockComponentRegistry const&);
    ScriptBlockComponentRegistry(ScriptBlockComponentRegistry const&);
    ScriptBlockComponentRegistry();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::Scripting::Result<
        void,
        ::ScriptModuleMinecraft::ScriptNamespaceNameError,
        ::ScriptModuleMinecraft::ScriptCustomComponentInvalidRegistryError,
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentAlreadyRegisteredError,
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentReloadVersionError,
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentReloadNewEventError,
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentReloadNewComponentError,
        ::Scripting::EngineError>
    registerCustomComponent(
        ::Scripting::WeakLifetimeScope&                              scope,
        ::std::string const&                                         compName,
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentInterface closures
    );

    MCAPI ::Scripting::Result<
        void,
        ::ScriptModuleMinecraft::ScriptCustomComponentNameError,
        ::ScriptModuleMinecraft::ScriptCustomComponentInvalidRegistryError,
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentAlreadyRegisteredError,
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentReloadVersionError,
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentReloadNewEventError,
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentReloadNewComponentError,
        ::Scripting::EngineError>
    registerCustomComponentV1(
        ::Scripting::WeakLifetimeScope&                              scope,
        ::std::string const&                                         compName,
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentInterface closures
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
