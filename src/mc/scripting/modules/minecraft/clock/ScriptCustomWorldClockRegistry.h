#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/scripting/modules/minecraft/ScriptServerStateMonitor.h"

// auto generated forward declare list
// clang-format off
class WorldClockRegistryServer;
struct ServerScriptManagerEvents;
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
