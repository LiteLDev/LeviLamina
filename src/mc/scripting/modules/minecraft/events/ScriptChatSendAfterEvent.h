#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/external/scripting/lifetime_registry/TypedObjectHandle.h"
#include "mc/external/scripting/runtime/Result.h"
#include "mc/external/scripting/runtime/Result_deprecated.h"

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
    ScriptChatSendAfterEvent(ScriptChatSendAfterEvent const&);
    ScriptChatSendAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptChatSendAfterEvent(
        ::ChatEvent const&                    chatEvent,
        ::Player const&                       player,
        ::Scripting::WeakLifetimeScope const& scope
    );

    MCAPI void copyTo(::ChatEvent& chatEvent, ::Scripting::WeakLifetimeScope const& scope) const;

    MCAPI ::Scripting::Result_deprecated<bool> getSendToTargets_V010();

    MCAPI ::Scripting::Result_deprecated<
        ::std::vector<::Scripting::TypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayer>>>
    getTargets_V010();

    MCAPI ::ScriptModuleMinecraft::ScriptChatSendAfterEvent&
    operator=(::ScriptModuleMinecraft::ScriptChatSendAfterEvent&&);

    MCAPI ::ScriptModuleMinecraft::ScriptChatSendAfterEvent&
    operator=(::ScriptModuleMinecraft::ScriptChatSendAfterEvent const&);

    MCAPI ::Scripting::Result<void> setSendToTargets_V010(bool sendToTargets);

    MCAPI ::Scripting::Result<void>
    setTargets_V010(::std::vector<::Scripting::TypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayer>> targets);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptChatSendAfterEvent> bind();

    MCAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptChatSendAfterEvent> bindV010();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::ChatEvent const& chatEvent, ::Player const& player, ::Scripting::WeakLifetimeScope const& scope);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
