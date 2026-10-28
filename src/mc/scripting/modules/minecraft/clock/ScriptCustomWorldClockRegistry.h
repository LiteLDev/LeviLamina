#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/script_core/runtime/scripting/Result.h"
#include "mc/scripting/modules/minecraft/ScriptServerStateMonitor.h"

// auto generated forward declare list
// clang-format off
class WorldClockRegistryServer;
struct ServerScriptManagerEvents;
namespace ScriptModuleMinecraft { struct ScriptWorldClockInvalidRegistryError; }
namespace ScriptModuleMinecraft { struct ScriptWorldClockRegistrationError; }
namespace ScriptModuleMinecraft { struct ScriptWorldClockRegistrationOptions; }
namespace ScriptModuleMinecraft { struct ScriptWorldClockReloadNewWorldClockError; }
namespace ScriptModuleMinecraft { struct ScriptWorldClockReloadTimeMarkerError; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptCustomWorldClockRegistry : public ::ScriptModuleMinecraft::ScriptServerStateMonitor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::WorldClockRegistryServer> const> mRegistry;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptCustomWorldClockRegistry();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptCustomWorldClockRegistry(
        ::ServerScriptManagerEvents&                              events,
        ::Bedrock::NotNullNonOwnerPtr<::WorldClockRegistryServer> worldClockRegistry
    );

    MCAPI ::Scripting::Result<
        void,
        ::ScriptModuleMinecraft::ScriptWorldClockRegistrationError,
        ::ScriptModuleMinecraft::ScriptWorldClockReloadNewWorldClockError,
        ::ScriptModuleMinecraft::ScriptWorldClockReloadTimeMarkerError,
        ::ScriptModuleMinecraft::ScriptWorldClockInvalidRegistryError>
    tryRegisterClock(
        ::Scripting::WeakLifetimeScope&,
        ::std::string const&                                                          name,
        ::std::optional<::ScriptModuleMinecraft::ScriptWorldClockRegistrationOptions> registrationOptions
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::ServerScriptManagerEvents&                              events,
        ::Bedrock::NotNullNonOwnerPtr<::WorldClockRegistryServer> worldClockRegistry
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
