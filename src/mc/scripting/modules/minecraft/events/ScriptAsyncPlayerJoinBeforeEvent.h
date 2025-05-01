#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/deps/scripting/runtime/Result.h"

// auto generated forward declare list
// clang-format off
struct ClientJoinedEvent;
namespace ScriptModuleMinecraft { struct DisconnectedError; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptAsyncPlayerJoinBeforeEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkc299e3;
    ::ll::UntypedStorage<8, 32> mUnke1d028;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptAsyncPlayerJoinBeforeEvent& operator=(ScriptAsyncPlayerJoinBeforeEvent const&);
    ScriptAsyncPlayerJoinBeforeEvent(ScriptAsyncPlayerJoinBeforeEvent const&);
    ScriptAsyncPlayerJoinBeforeEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ScriptAsyncPlayerJoinBeforeEvent(::ClientJoinedEvent const& evtData);

    MCNAPI ::Scripting::Result<void, ::ScriptModuleMinecraft::DisconnectedError>
    disconnect(::std::optional<::std::string> message);

    MCNAPI bool isValid();

    MCNAPI ::ScriptModuleMinecraft::ScriptAsyncPlayerJoinBeforeEvent&
    operator=(::ScriptModuleMinecraft::ScriptAsyncPlayerJoinBeforeEvent&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptAsyncPlayerJoinBeforeEvent> bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ClientJoinedEvent const& evtData);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
