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
    ::ll::UntypedStorage<8, 32> mUnk57b25e;
    ::ll::UntypedStorage<8, 32> mUnkafb053;
    ::ll::UntypedStorage<8, 32> mUnk974a22;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPlayerJoinAfterEvent& operator=(ScriptPlayerJoinAfterEvent const&);
    ScriptPlayerJoinAfterEvent(ScriptPlayerJoinAfterEvent const&);
    ScriptPlayerJoinAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptPlayerJoinAfterEvent(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayer> playerHandle,
        ::std::string const&                                                        playerName,
        ::std::string const&                                                        playerId
    );

    MCNAPI ::ScriptModuleMinecraft::ScriptPlayerJoinAfterEvent&
    operator=(::ScriptModuleMinecraft::ScriptPlayerJoinAfterEvent&&);

    MCNAPI ~ScriptPlayerJoinAfterEvent();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();

    MCNAPI static ::Scripting::ClassBinding bindV010();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayer> playerHandle,
        ::std::string const&                                                        playerName,
        ::std::string const&                                                        playerId
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
