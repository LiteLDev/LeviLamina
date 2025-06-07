#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/events/ScriptItemCompleteUseEvent.h"

// auto generated forward declare list
// clang-format off
class Player;
struct ItemCompleteUseEvent;
namespace ScriptModuleMinecraft { class ScriptItemStack; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptItemCompleteUseAfterEvent : public ::ScriptModuleMinecraft::ScriptItemCompleteUseEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk3a1231;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptItemCompleteUseAfterEvent& operator=(ScriptItemCompleteUseAfterEvent const&);
    ScriptItemCompleteUseAfterEvent(ScriptItemCompleteUseAfterEvent const&);
    ScriptItemCompleteUseAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptItemCompleteUseAfterEvent(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack> item,
        ::Player const&                                                                player,
        ::ItemCompleteUseEvent const&                                                  itemEvent,
        ::Scripting::WeakLifetimeScope const&                                          scope
    );
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
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack> item,
        ::Player const&                                                                player,
        ::ItemCompleteUseEvent const&                                                  itemEvent,
        ::Scripting::WeakLifetimeScope const&                                          scope
    );
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
