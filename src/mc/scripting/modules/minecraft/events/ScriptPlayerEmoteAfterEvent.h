#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/ClassBindingBuilder.h"

// auto generated forward declare list
// clang-format off
class Player;
namespace Scripting { class WeakLifetimeScope; }
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
    MCAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptPlayerEmoteAfterEvent> bind();
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
