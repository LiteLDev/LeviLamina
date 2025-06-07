#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class Player;
struct ItemReleaseUseEvent;
namespace ScriptModuleMinecraft { class ScriptItemStack; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptItemReleaseUseAfterEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnkcdbc04;
    ::ll::UntypedStorage<8, 32> mUnka6d463;
    ::ll::UntypedStorage<4, 4>  mUnk118490;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptItemReleaseUseAfterEvent& operator=(ScriptItemReleaseUseAfterEvent const&);
    ScriptItemReleaseUseAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptItemReleaseUseAfterEvent(::ScriptModuleMinecraft::ScriptItemReleaseUseAfterEvent const&);

    MCNAPI ScriptItemReleaseUseAfterEvent(
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack>> item,
        ::Player const&                                                                                 player,
        ::ItemReleaseUseEvent const&                                                                    itemEvent,
        ::Scripting::WeakLifetimeScope const&                                                           scope
    );

    MCNAPI ~ScriptItemReleaseUseAfterEvent();
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
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptItemReleaseUseAfterEvent const&);

    MCNAPI void* $ctor(
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack>> item,
        ::Player const&                                                                                 player,
        ::ItemReleaseUseEvent const&                                                                    itemEvent,
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
