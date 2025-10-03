#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/runtime/Result.h"
#include "mc/deps/scripting/script_engine/Closure.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptEntitySpawnCallbackArgs; }
namespace ScriptModuleMinecraft { class ScriptObstructionCallbackArgs; }
namespace ScriptModuleMinecraft { struct ScriptNamespaceNameError; }
namespace ScriptModuleMinecraft { struct ScriptSpawnRulesInvalidRegistryError; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct InvalidArgumentError; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptSpawnRulesRegistry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk19046f;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptSpawnRulesRegistry& operator=(ScriptSpawnRulesRegistry const&);
    ScriptSpawnRulesRegistry(ScriptSpawnRulesRegistry const&);
    ScriptSpawnRulesRegistry();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result<
        void,
        ::ScriptModuleMinecraft::ScriptSpawnRulesInvalidRegistryError,
        ::ScriptModuleMinecraft::ScriptNamespaceNameError,
        ::Scripting::InvalidArgumentError>
    registerEntitySpawnCallback(
        ::Scripting::WeakLifetimeScope scope,
        ::std::string const&           id,
        ::Scripting::Closure<
            bool(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptEntitySpawnCallbackArgs>)> callback
    );

    MCNAPI ::Scripting::Result<
        void,
        ::ScriptModuleMinecraft::ScriptSpawnRulesInvalidRegistryError,
        ::ScriptModuleMinecraft::ScriptNamespaceNameError,
        ::Scripting::InvalidArgumentError>
    registerObstructionCallback(
        ::Scripting::WeakLifetimeScope scope,
        ::std::string const&           id,
        ::Scripting::Closure<
            bool(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptObstructionCallbackArgs>)> callback
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
