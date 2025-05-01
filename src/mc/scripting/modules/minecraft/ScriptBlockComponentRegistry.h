#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/Result.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptBlockCustomComponentInterface; }
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
    ::ll::UntypedStorage<8, 8> mUnk7363f7;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBlockComponentRegistry& operator=(ScriptBlockComponentRegistry const&);
    ScriptBlockComponentRegistry(ScriptBlockComponentRegistry const&);
    ScriptBlockComponentRegistry();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result<
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

    MCNAPI ::Scripting::Result<
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
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
