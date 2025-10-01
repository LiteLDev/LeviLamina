#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/Result.h"

// auto generated forward declare list
// clang-format off
class AsyncVerdictPromise;
namespace ScriptModuleServerAdmin { struct DisconnectedError; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleServerAdmin {

struct ScriptAsyncPlayerJoinBeforeEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk210079;
    ::ll::UntypedStorage<8, 32> mUnk7775e8;
    ::ll::UntypedStorage<8, 32> mUnkc3e4e0;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptAsyncPlayerJoinBeforeEvent& operator=(ScriptAsyncPlayerJoinBeforeEvent const&);
    ScriptAsyncPlayerJoinBeforeEvent(ScriptAsyncPlayerJoinBeforeEvent const&);
    ScriptAsyncPlayerJoinBeforeEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptAsyncPlayerJoinBeforeEvent(
        ::std::shared_ptr<::AsyncVerdictPromise>& promise,
        ::std::string                             playerId,
        ::std::string                             playerName
    );

    MCNAPI ::Scripting::Result<void, ::ScriptModuleServerAdmin::DisconnectedError>
    disconnect(::std::optional<::std::string> disconnectReason);

    MCNAPI bool isValid() const;

    MCNAPI ::ScriptModuleServerAdmin::ScriptAsyncPlayerJoinBeforeEvent&
    operator=(::ScriptModuleServerAdmin::ScriptAsyncPlayerJoinBeforeEvent&&);

    MCNAPI ~ScriptAsyncPlayerJoinBeforeEvent();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
    $ctor(::std::shared_ptr<::AsyncVerdictPromise>& promise, ::std::string playerId, ::std::string playerName);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleServerAdmin
