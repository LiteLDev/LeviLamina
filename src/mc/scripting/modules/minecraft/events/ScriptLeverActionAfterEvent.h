#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/events/ScriptBlockEvent.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
struct LeverActionEvent;
namespace ScriptModuleMinecraft { class ScriptPlayer; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptLeverActionAfterEvent : public ::ScriptModuleMinecraft::ScriptBlockEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnk4a17dd;
    ::ll::UntypedStorage<8, 32> mUnk259794;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptLeverActionAfterEvent& operator=(ScriptLeverActionAfterEvent const&);
    ScriptLeverActionAfterEvent(ScriptLeverActionAfterEvent const&);
    ScriptLeverActionAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptLeverActionAfterEvent(
        ::LeverActionEvent const&                                                   leverActionEvent,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayer> player,
        ::BlockPos const&,
        ::Scripting::WeakLifetimeScope const& scope
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
    MCNAPI void* $ctor(
        ::LeverActionEvent const&                                                   leverActionEvent,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayer> player,
        ::BlockPos const&,
        ::Scripting::WeakLifetimeScope const& scope
    );
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
