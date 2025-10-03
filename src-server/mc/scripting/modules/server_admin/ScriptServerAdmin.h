#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptPlayer; }
namespace ScriptModuleServerAdmin { struct ScriptTransferPlayerIpPortOptions; }
namespace ScriptModuleServerAdmin { struct ScriptTransferPlayerNetherNetOptions; }
// clang-format on

namespace ScriptModuleServerAdmin {

class ScriptServerAdmin {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::Result_deprecated<void> transferPlayer(
        ::ScriptModuleMinecraft::ScriptPlayer& scriptPlayer,
        ::std::variant<
            ::ScriptModuleServerAdmin::ScriptTransferPlayerIpPortOptions,
            ::ScriptModuleServerAdmin::ScriptTransferPlayerNetherNetOptions> options
    );
    // NOLINTEND
};

} // namespace ScriptModuleServerAdmin
