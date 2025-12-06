#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class Player;
namespace ScriptModuleMinecraft { struct ScriptPlayer; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptPlayerEmoteAfterEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayer>>
                                             mPlayerHandle;
    ::ll::TypedStorage<8, 32, ::std::string> mEmotePieceId;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPlayerEmoteAfterEvent& operator=(ScriptPlayerEmoteAfterEvent const&);
    ScriptPlayerEmoteAfterEvent(ScriptPlayerEmoteAfterEvent const&);
    ScriptPlayerEmoteAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptPlayerEmoteAfterEvent(
        ::Player const&                       player,
        ::std::string                         emotePieceId,
        ::Scripting::WeakLifetimeScope const& scope
    );

    MCAPI ::ScriptModuleMinecraft::ScriptPlayerEmoteAfterEvent&
    operator=(::ScriptModuleMinecraft::ScriptPlayerEmoteAfterEvent&&);

    MCAPI ~ScriptPlayerEmoteAfterEvent();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Player const& player, ::std::string emotePieceId, ::Scripting::WeakLifetimeScope const& scope);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
