#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/deps/scripting/runtime/Result.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { struct ScriptInvalidActorError; }
namespace ScriptModuleMinecraft { struct ScriptNamespaceNameError; }
namespace ScriptModuleMinecraft { struct ScriptPlayerAimAssistSettings; }
namespace Scripting { struct ArgumentOutOfBoundsError; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct EngineError; }
namespace Scripting { struct Error; }
namespace Scripting { struct InvalidArgumentError; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptPlayerAimAssist {
public:
    // ScriptPlayerAimAssist inner types define
    using SetMethodResultType = ::Scripting::Result<
        void,
        ::ScriptModuleMinecraft::ScriptNamespaceNameError,
        ::Scripting::ArgumentOutOfBoundsError,
        ::Scripting::InvalidArgumentError,
        ::Scripting::EngineError,
        ::ScriptModuleMinecraft::ScriptInvalidActorError,
        ::Scripting::Error>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::WeakEntityRef> mPlayer;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPlayerAimAssist& operator=(ScriptPlayerAimAssist const&);
    ScriptPlayerAimAssist(ScriptPlayerAimAssist const&);
    ScriptPlayerAimAssist();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::optional<::ScriptModuleMinecraft::ScriptPlayerAimAssistSettings> _getAimAssistSettings() const;

    MCFOLD ::ScriptModuleMinecraft::ScriptPlayerAimAssist& operator=(::ScriptModuleMinecraft::ScriptPlayerAimAssist&&);

    MCAPI ::Scripting::Result<
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
    MCAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
