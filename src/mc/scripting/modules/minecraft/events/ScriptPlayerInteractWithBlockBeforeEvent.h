#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/events/ScriptPlayerInteractWithBlockEvent.h"

// auto generated forward declare list
// clang-format off
class Player;
struct PlayerInteractWithBlockBeforeEvent;
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptPlayerInteractWithBlockBeforeEvent : public ::ScriptModuleMinecraft::ScriptPlayerInteractWithBlockEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnk4835fb;
    ::ll::UntypedStorage<1, 1>  mUnk5e0c46;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPlayerInteractWithBlockBeforeEvent& operator=(ScriptPlayerInteractWithBlockBeforeEvent const&);
    ScriptPlayerInteractWithBlockBeforeEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI
    ScriptPlayerInteractWithBlockBeforeEvent(::ScriptModuleMinecraft::ScriptPlayerInteractWithBlockBeforeEvent&&);

    MCNAPI
    ScriptPlayerInteractWithBlockBeforeEvent(::ScriptModuleMinecraft::ScriptPlayerInteractWithBlockBeforeEvent const&);

    MCNAPI ScriptPlayerInteractWithBlockBeforeEvent(
        ::Player&                                   player,
        ::PlayerInteractWithBlockBeforeEvent const& eventData,
        ::Scripting::WeakLifetimeScope&             scope
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptPlayerInteractWithBlockBeforeEvent&&);

    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptPlayerInteractWithBlockBeforeEvent const&);

    MCNAPI void* $ctor(
        ::Player&                                   player,
        ::PlayerInteractWithBlockBeforeEvent const& eventData,
        ::Scripting::WeakLifetimeScope&             scope
    );
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
