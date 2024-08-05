#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"
#include "mc/external/scripting/TypedObjectHandle.h"

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

    MCAPI
    ScriptChatSendAfterEvent(struct ChatEvent const&, class Player const&, class Scripting::WeakLifetimeScope const&);

    MCAPI void copyTo(struct ChatEvent&, class Scripting::WeakLifetimeScope const& scope) const;

    MCAPI class Scripting::Result<bool> getSendToTargets_V010();

    MCAPI class Scripting::Result<
        std::vector<struct Scripting::TypedObjectHandle<class ScriptModuleMinecraft::ScriptPlayer>>>
    getTargets_V010();

    MCAPI struct ScriptModuleMinecraft::ScriptChatSendAfterEvent&
    operator=(struct ScriptModuleMinecraft::ScriptChatSendAfterEvent&&);

    MCAPI struct ScriptModuleMinecraft::ScriptChatSendAfterEvent&
    operator=(struct ScriptModuleMinecraft::ScriptChatSendAfterEvent const&);

    MCAPI class Scripting::Result<void> setSendToTargets_V010(bool);

    MCAPI class Scripting::Result<void>
        setTargets_V010(std::vector<struct Scripting::TypedObjectHandle<class ScriptModuleMinecraft::ScriptPlayer>>);

    MCAPI ~ScriptChatSendAfterEvent();

    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptChatSendAfterEvent> bind();

    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptChatSendAfterEvent>
    bindV010();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
