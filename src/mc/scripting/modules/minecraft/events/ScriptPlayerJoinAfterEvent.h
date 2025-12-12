#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptPlayer; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptPlayerJoinAfterEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayer>>
                                             mPlayerHandle;
    ::ll::TypedStorage<8, 32, ::std::string> mPlayerName;
    ::ll::TypedStorage<8, 32, ::std::string> mPlayerId;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPlayerJoinAfterEvent& operator=(ScriptPlayerJoinAfterEvent const&);
    ScriptPlayerJoinAfterEvent(ScriptPlayerJoinAfterEvent const&);
    ScriptPlayerJoinAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptPlayerJoinAfterEvent(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayer> playerHandle,
        ::std::string const&                                                        playerName,
        ::std::string const&                                                        playerId
    );

    MCAPI ::ScriptModuleMinecraft::ScriptPlayerJoinAfterEvent&
    operator=(::ScriptModuleMinecraft::ScriptPlayerJoinAfterEvent&&);

    MCAPI ~ScriptPlayerJoinAfterEvent();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();

    MCAPI static ::Scripting::ClassBinding bindV010();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayer> playerHandle,
        ::std::string const&                                                        playerName,
        ::std::string const&                                                        playerId
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
