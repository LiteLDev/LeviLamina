#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/Result.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleServerAdmin { struct DisconnectedError; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleServerAdmin {

struct ScriptAsyncPlayerJoinBeforeEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk210079;
    ::ll::UntypedStorage<8, 32> mUnk1fb4c2;
    ::ll::UntypedStorage<8, 32> mUnkfb3ce5;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptAsyncPlayerJoinBeforeEvent& operator=(ScriptAsyncPlayerJoinBeforeEvent const&);
    ScriptAsyncPlayerJoinBeforeEvent(ScriptAsyncPlayerJoinBeforeEvent const&);
    ScriptAsyncPlayerJoinBeforeEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result<void, ::ScriptModuleServerAdmin::DisconnectedError>
    disallowJoin(::std::optional<::std::string> message);

    MCNAPI ::Scripting::Result<void, ::ScriptModuleServerAdmin::DisconnectedError>
    disconnect(::std::optional<::std::string> disconnectReason);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleServerAdmin
