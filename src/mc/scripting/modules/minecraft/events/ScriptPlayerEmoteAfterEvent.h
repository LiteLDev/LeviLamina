#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Player;
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptPlayerEmoteAfterEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkd75600;
    ::ll::UntypedStorage<8, 32> mUnk646c8a;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPlayerEmoteAfterEvent& operator=(ScriptPlayerEmoteAfterEvent const&);
    ScriptPlayerEmoteAfterEvent(ScriptPlayerEmoteAfterEvent const&);
    ScriptPlayerEmoteAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptPlayerEmoteAfterEvent(
        ::Player const&                       player,
        ::std::string                         emotePieceId,
        ::Scripting::WeakLifetimeScope const& scope
    );

    MCNAPI ::ScriptModuleMinecraft::ScriptPlayerEmoteAfterEvent&
    operator=(::ScriptModuleMinecraft::ScriptPlayerEmoteAfterEvent&&);

    MCNAPI ~ScriptPlayerEmoteAfterEvent();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Player const& player, ::std::string emotePieceId, ::Scripting::WeakLifetimeScope const& scope);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
