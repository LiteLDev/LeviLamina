#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/deps/scripting/lifetime_registry/TypedObjectHandle.h"
#include "mc/deps/scripting/runtime/Result.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
class Player;
struct ChatEvent;
namespace ScriptModuleMinecraft { class ScriptPlayer; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptChatSendAfterEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkc7b3a4;
    ::ll::UntypedStorage<8, 32> mUnkf4fbea;
    ::ll::UntypedStorage<8, 32> mUnk550c3c;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptChatSendAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptChatSendAfterEvent(::ScriptModuleMinecraft::ScriptChatSendAfterEvent const&);

    MCNAPI ScriptChatSendAfterEvent(
        ::ChatEvent const&                    chatEvent,
        ::Player const&                       player,
        ::Scripting::WeakLifetimeScope const& scope
    );

    MCNAPI void copyTo(::ChatEvent& chatEvent, ::Scripting::WeakLifetimeScope const& scope) const;

    MCNAPI ::Scripting::Result_deprecated<bool> getSendToTargets_V010();

    MCNAPI ::Scripting::Result_deprecated<
        ::std::vector<::Scripting::TypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayer>>>
    getTargets_V010();

    MCNAPI ::ScriptModuleMinecraft::ScriptChatSendAfterEvent&
    operator=(::ScriptModuleMinecraft::ScriptChatSendAfterEvent&&);

    MCNAPI ::ScriptModuleMinecraft::ScriptChatSendAfterEvent&
    operator=(::ScriptModuleMinecraft::ScriptChatSendAfterEvent const&);

    MCNAPI ::Scripting::Result<void> setSendToTargets_V010(bool sendToTargets);

    MCNAPI ::Scripting::Result<void>
    setTargets_V010(::std::vector<::Scripting::TypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayer>> targets);

    MCNAPI ~ScriptChatSendAfterEvent();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptChatSendAfterEvent> bind();

    MCNAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptChatSendAfterEvent> bindV010();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptChatSendAfterEvent const&);

    MCNAPI void*
    $ctor(::ChatEvent const& chatEvent, ::Player const& player, ::Scripting::WeakLifetimeScope const& scope);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
