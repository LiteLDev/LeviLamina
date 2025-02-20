#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/world/level/GameType.h"

// auto generated forward declare list
// clang-format off
class Player;
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptPlayerGameModeChangeAfterEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk9bd5b7;
    ::ll::UntypedStorage<4, 4>  mUnkec4eba;
    ::ll::UntypedStorage<4, 4>  mUnke5adc4;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPlayerGameModeChangeAfterEvent& operator=(ScriptPlayerGameModeChangeAfterEvent const&);
    ScriptPlayerGameModeChangeAfterEvent(ScriptPlayerGameModeChangeAfterEvent const&);
    ScriptPlayerGameModeChangeAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptPlayerGameModeChangeAfterEvent(
        ::Player const&                       player,
        ::GameType                            fromGameMode,
        ::GameType                            toGameMode,
        ::Scripting::WeakLifetimeScope const& scope
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptPlayerGameModeChangeAfterEvent> bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Player const&                       player,
        ::GameType                            fromGameMode,
        ::GameType                            toGameMode,
        ::Scripting::WeakLifetimeScope const& scope
    );
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
