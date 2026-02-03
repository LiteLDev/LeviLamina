#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/Result.h"
#include "mc/deps/scripting/script_engine/ClosureGeneric.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class CustomCommandRegistry; }
namespace ScriptModuleMinecraft { struct ScriptCustomCommandError; }
namespace ScriptModuleMinecraft { struct ScriptCustomCommandInterface; }
namespace ScriptModuleMinecraft { struct ScriptCustomCommandResult; }
namespace ScriptModuleMinecraft { struct ScriptNamespaceNameError; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct ContextConfig; }
namespace Scripting { struct EngineError; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptCustomCommandRegistry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ScriptModuleMinecraft::CustomCommandRegistry&> mCustomCommandRegistry;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptCustomCommandRegistry& operator=(ScriptCustomCommandRegistry const&);
    ScriptCustomCommandRegistry(ScriptCustomCommandRegistry const&);
    ScriptCustomCommandRegistry();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::Scripting::Result<
        void,
        ::ScriptModuleMinecraft::ScriptNamespaceNameError,
        ::ScriptModuleMinecraft::ScriptCustomCommandError,
        ::Scripting::EngineError>
    registerCommand(
        ::Scripting::ContextConfig const&                            config,
        ::ScriptModuleMinecraft::ScriptCustomCommandInterface const& commandInterface,
        ::Scripting::ClosureGeneric<::std::optional<::ScriptModuleMinecraft::ScriptCustomCommandResult>> closure
    );

    MCAPI ::Scripting::Result<
        void,
        ::ScriptModuleMinecraft::ScriptNamespaceNameError,
        ::ScriptModuleMinecraft::ScriptCustomCommandError,
        ::Scripting::EngineError>
    registerEnum(
        ::Scripting::ContextConfig const&   config,
        ::std::string const&                name,
        ::std::vector<::std::string> const& values
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
