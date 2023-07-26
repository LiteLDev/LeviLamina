#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class WeakLifetimeScope; }
struct ChatEvent;
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptChatSendAfterEvent {

public:
    // prevent constructor by default
    ScriptChatSendAfterEvent(ScriptChatSendAfterEvent const&) = delete;
    ScriptChatSendAfterEvent()                                = delete;

public:
    /**
     * @symbol ??0ScriptChatSendAfterEvent\@ScriptModuleMinecraft\@\@QEAA\@$$QEAU01\@\@Z
     */
    MCAPI ScriptChatSendAfterEvent(struct ScriptModuleMinecraft::ScriptChatSendAfterEvent&&); // NOLINT
    /**
     * @symbol
     * ??0ScriptChatSendAfterEvent\@ScriptModuleMinecraft\@\@QEAA\@AEBUChatEvent\@\@AEBVWeakLifetimeScope\@Scripting\@\@\@Z
     */
    MCAPI ScriptChatSendAfterEvent(struct ChatEvent const&, class Scripting::WeakLifetimeScope const&); // NOLINT
    /**
     * @symbol
     * ?copyTo\@ScriptChatSendAfterEvent\@ScriptModuleMinecraft\@\@QEBAXAEAUChatEvent\@\@AEBVWeakLifetimeScope\@Scripting\@\@\@Z
     */
    MCAPI void copyTo(struct ChatEvent&, class Scripting::WeakLifetimeScope const&) const; // NOLINT
    /**
     * @symbol ??4ScriptChatSendAfterEvent\@ScriptModuleMinecraft\@\@QEAAAEAU01\@AEBU01\@\@Z
     */
    MCAPI struct ScriptModuleMinecraft::ScriptChatSendAfterEvent&
    operator=(struct ScriptModuleMinecraft::ScriptChatSendAfterEvent const&); // NOLINT
    /**
     * @symbol ??4ScriptChatSendAfterEvent\@ScriptModuleMinecraft\@\@QEAAAEAU01\@$$QEAU01\@\@Z
     */
    MCAPI struct ScriptModuleMinecraft::ScriptChatSendAfterEvent&
    operator=(struct ScriptModuleMinecraft::ScriptChatSendAfterEvent&&); // NOLINT
    /**
     * @symbol ??1ScriptChatSendAfterEvent\@ScriptModuleMinecraft\@\@QEAA\@XZ
     */
    MCAPI ~ScriptChatSendAfterEvent(); // NOLINT
    /**
     * @symbol
     * ?bind\@ScriptChatSendAfterEvent\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@UScriptChatSendAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptChatSendAfterEvent>
    bind(); // NOLINT
    /**
     * @symbol
     * ?bindV010\@ScriptChatSendAfterEvent\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@UScriptChatSendAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptChatSendAfterEvent>
    bindV010(); // NOLINT
};

}; // namespace ScriptModuleMinecraft
