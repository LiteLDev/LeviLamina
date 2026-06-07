#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/Result.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
class ScriptServerNetworkHandlerReference;
namespace ScriptModuleMinecraft { class ScriptPlayer; }
namespace ScriptModuleServerAdmin { class ScriptCannotDeopPlayerError; }
namespace ScriptModuleServerAdmin { class ScriptCannotKickPlayerError; }
namespace ScriptModuleServerAdmin { class ScriptPlayerAlreadyOpError; }
namespace ScriptModuleServerAdmin { struct ScriptTransferPlayerIpPortOptions; }
namespace ScriptModuleServerAdmin { struct ScriptTransferPlayerNetherNetOptions; }
namespace Scripting { class ModuleBindingBuilder; }
namespace Scripting { struct EngineError; }
namespace Scripting { struct InvalidArgumentError; }
// clang-format on

namespace ScriptModuleServerAdmin {

class ScriptServerAdmin {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void
    bind(::Scripting::ModuleBindingBuilder& moduleBuilder, ::ScriptServerNetworkHandlerReference* serverNetworkHandler);

    MCNAPI static ::Scripting::Result<
        void,
        ::Scripting::InvalidArgumentError,
        ::ScriptModuleServerAdmin::ScriptCannotDeopPlayerError,
        ::Scripting::EngineError>
    deopPlayer(
        ::ScriptServerNetworkHandlerReference&       serverNetworkHandlerRef,
        ::ScriptModuleMinecraft::ScriptPlayer const& scriptPlayer
    );

    MCNAPI static ::Scripting::Result<
        void,
        ::Scripting::InvalidArgumentError,
        ::ScriptModuleServerAdmin::ScriptCannotKickPlayerError,
        ::Scripting::EngineError>
    kickPlayer(
        ::ScriptServerNetworkHandlerReference&       serverNetworkHandlerRef,
        ::ScriptModuleMinecraft::ScriptPlayer const& scriptPlayer,
        ::std::optional<::std::string>               reason
    );

    MCNAPI static ::Scripting::Result<
        void,
        ::Scripting::InvalidArgumentError,
        ::ScriptModuleServerAdmin::ScriptPlayerAlreadyOpError,
        ::Scripting::EngineError>
    opPlayer(
        ::ScriptServerNetworkHandlerReference&       serverNetworkHandlerRef,
        ::ScriptModuleMinecraft::ScriptPlayer const& scriptPlayer
    );

    MCNAPI static ::Scripting::Result_deprecated<void> transferPlayer(
        ::ScriptModuleMinecraft::ScriptPlayer& scriptPlayer,
        ::std::variant<
            ::ScriptModuleServerAdmin::ScriptTransferPlayerIpPortOptions,
            ::ScriptModuleServerAdmin::ScriptTransferPlayerNetherNetOptions> options
    );
    // NOLINTEND
};

} // namespace ScriptModuleServerAdmin
