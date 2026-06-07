#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/events/ScriptPlayerGameModeChangeAfterEvent.h"
#include "mc/world/level/GameType.h"

// auto generated forward declare list
// clang-format off
class Player;
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptPlayerGameModeChangeBeforeEvent : public ::ScriptModuleMinecraft::ScriptPlayerGameModeChangeAfterEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mCancel;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPlayerGameModeChangeBeforeEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptPlayerGameModeChangeBeforeEvent(
        ::Player const&                       player,
        ::GameType                            fromGameMode,
        ::GameType                            toGameMode,
        ::Scripting::WeakLifetimeScope const& scope
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();
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
