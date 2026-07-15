#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/deps/script_core/runtime/scripting/Result.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { struct ScriptInvalidActorError; }
namespace ScriptModuleMinecraft { struct ScriptNamespaceNameError; }
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
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
