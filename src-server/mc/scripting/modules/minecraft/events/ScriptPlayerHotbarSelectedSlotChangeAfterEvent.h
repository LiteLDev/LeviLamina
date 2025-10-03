#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class Player;
namespace ScriptModuleMinecraft { class ScriptItemStack; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptPlayerHotbarSelectedSlotChangeAfterEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkc1be02;
    ::ll::UntypedStorage<4, 4>  mUnk487628;
    ::ll::UntypedStorage<4, 4>  mUnkc42cb2;
    ::ll::UntypedStorage<8, 40> mUnk39339d;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPlayerHotbarSelectedSlotChangeAfterEvent& operator=(ScriptPlayerHotbarSelectedSlotChangeAfterEvent const&);
    ScriptPlayerHotbarSelectedSlotChangeAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptPlayerHotbarSelectedSlotChangeAfterEvent(
        ::ScriptModuleMinecraft::ScriptPlayerHotbarSelectedSlotChangeAfterEvent const&
    );

    MCNAPI ScriptPlayerHotbarSelectedSlotChangeAfterEvent(
        ::Player const& player,
        int             previousSlotSelected,
        int             newSlotSelected,
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack>> item,
        ::Scripting::WeakLifetimeScope const&                                                           scope
    );

    MCNAPI ~ScriptPlayerHotbarSelectedSlotChangeAfterEvent();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptPlayerHotbarSelectedSlotChangeAfterEvent const&);

    MCNAPI void* $ctor(
        ::Player const& player,
        int             previousSlotSelected,
        int             newSlotSelected,
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack>> item,
        ::Scripting::WeakLifetimeScope const&                                                           scope
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
