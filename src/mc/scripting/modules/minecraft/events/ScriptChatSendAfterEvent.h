#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/external/scripting/lifetime_registry/TypedObjectHandle.h"
#include "mc/external/scripting/runtime/Result.h"

// auto generated forward declare list
// clang-format off
class Player;
namespace ScriptModuleMinecraft { class ScriptPlayer; }
namespace Scripting { class WeakLifetimeScope; }
struct ChatEvent;
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptChatSendAfterEvent {
public:
    // prevent constructor by default
    ScriptChatSendAfterEvent();

public:
    // NOLINTBEGIN
    MCAPI ScriptChatSendAfterEvent(struct ScriptModuleMinecraft::ScriptChatSendAfterEvent&&);

    MCAPI ScriptChatSendAfterEvent(struct ScriptModuleMinecraft::ScriptChatSendAfterEvent const&);

    MCAPI ScriptChatSendAfterEvent(
        struct ChatEvent const&                   chatEvent,
        class Player const&                       player,
        class Scripting::WeakLifetimeScope const& scope
    );

    MCAPI void copyTo(struct ChatEvent& chatEvent, class Scripting::WeakLifetimeScope const& scope) const;

    MCAPI class Scripting::Result<bool> getSendToTargets_V010();

    MCAPI class Scripting::Result<
        std::vector<struct Scripting::TypedObjectHandle<class ScriptModuleMinecraft::ScriptPlayer>>>
    getTargets_V010();

    MCAPI struct ScriptModuleMinecraft::ScriptChatSendAfterEvent&
    operator=(struct ScriptModuleMinecraft::ScriptChatSendAfterEvent&&);

    MCAPI struct ScriptModuleMinecraft::ScriptChatSendAfterEvent&
    operator=(struct ScriptModuleMinecraft::ScriptChatSendAfterEvent const&);

    MCAPI class Scripting::Result<void> setSendToTargets_V010(bool sendToTargets);

    MCAPI class Scripting::Result<void>
    setTargets_V010(std::vector<struct Scripting::TypedObjectHandle<class ScriptModuleMinecraft::ScriptPlayer>> targets
    );

    MCAPI ~ScriptChatSendAfterEvent();

    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptChatSendAfterEvent> bind();

    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptChatSendAfterEvent>
    bindV010();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(struct ScriptModuleMinecraft::ScriptChatSendAfterEvent const&);

    MCAPI void* ctor$(struct ScriptModuleMinecraft::ScriptChatSendAfterEvent&&);

    MCAPI void* ctor$(
        struct ChatEvent const&                   chatEvent,
        class Player const&                       player,
        class Scripting::WeakLifetimeScope const& scope
    );

    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
