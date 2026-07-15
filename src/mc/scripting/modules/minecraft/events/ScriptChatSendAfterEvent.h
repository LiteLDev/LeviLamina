#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/lifetime_registry/scripting/TypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class Player;
struct ChatEvent;
namespace ScriptModuleMinecraft { class ScriptPlayer; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptChatSendAfterEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mMessage;
    ::ll::TypedStorage<
        8,
        32,
        ::std::optional<::std::vector<::Scripting::TypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayer>>>>
                                                                                                           mTargets;
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayer>> mSender;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptChatSendAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptChatSendAfterEvent(::ScriptModuleMinecraft::ScriptChatSendAfterEvent const&);

    MCAPI ScriptChatSendAfterEvent(
        ::ChatEvent const&                    chatEvent,
        ::Player const&                       player,
        ::Scripting::WeakLifetimeScope const& scope
    );

    MCAPI void copyTo(::ChatEvent& chatEvent, ::Scripting::WeakLifetimeScope const& scope) const;

    MCAPI ::ScriptModuleMinecraft::ScriptChatSendAfterEvent&
    operator=(::ScriptModuleMinecraft::ScriptChatSendAfterEvent const&);

    MCAPI ~ScriptChatSendAfterEvent();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();

    MCAPI static ::Scripting::ClassBinding bindV010();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptChatSendAfterEvent const&);

    MCAPI void*
    $ctor(::ChatEvent const& chatEvent, ::Player const& player, ::Scripting::WeakLifetimeScope const& scope);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
