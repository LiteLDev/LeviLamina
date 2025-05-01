#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/deps/scripting/runtime/Result.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { struct ScriptInvalidActorError; }
namespace ScriptModuleMinecraft { struct ScriptNamespaceNameError; }
namespace ScriptModuleMinecraft { struct ScriptPlayerAimAssistSettings; }
namespace Scripting { struct ArgumentOutOfBoundsError; }
namespace Scripting { struct EngineError; }
namespace Scripting { struct Error; }
namespace Scripting { struct InvalidArgumentError; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptPlayerAimAssist {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkad4f3a;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPlayerAimAssist& operator=(ScriptPlayerAimAssist const&);
    ScriptPlayerAimAssist(ScriptPlayerAimAssist const&);
    ScriptPlayerAimAssist();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::optional<::ScriptModuleMinecraft::ScriptPlayerAimAssistSettings> _getAimAssistSettings() const;

    MCNAPI ::ScriptModuleMinecraft::ScriptPlayerAimAssist& operator=(::ScriptModuleMinecraft::ScriptPlayerAimAssist&&);

    MCNAPI ::Scripting::Result<
        void,
        ::ScriptModuleMinecraft::ScriptNamespaceNameError,
        ::Scripting::ArgumentOutOfBoundsError,
        ::Scripting::InvalidArgumentError,
        ::Scripting::EngineError,
        ::ScriptModuleMinecraft::ScriptInvalidActorError,
        ::Scripting::Error>
    setAimAssistSettings(::std::optional<::ScriptModuleMinecraft::ScriptPlayerAimAssistSettings> settings);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptPlayerAimAssist> bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
