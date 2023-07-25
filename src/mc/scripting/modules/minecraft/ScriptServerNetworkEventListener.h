#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/TypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class IScriptAfterEvents; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptServerNetworkEventListener {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMODULEMINECRAFT_SCRIPTSERVERNETWORKEVENTLISTENER
public:
    ScriptServerNetworkEventListener& operator=(ScriptServerNetworkEventListener const&) = delete;
    ScriptServerNetworkEventListener(ScriptServerNetworkEventListener const&)            = delete;
    ScriptServerNetworkEventListener()                                                   = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol
     * ?onEvent\@?$EventListenerDispatcher\@VServerNetworkEventListener\@\@\@\@MEAA?AW4EventResult\@\@AEBUServerNetworkGameplayNotificationEvent\@\@\@Z
     */
    virtual enum class EventResult onEvent(struct ServerNetworkGameplayNotificationEvent const&);
    /**
     * @vftbl 2
     * @symbol
     * ?onMessage\@ScriptServerNetworkEventListener\@ScriptModuleMinecraft\@\@UEAA?AW4EventResult\@\@AEBUMessageEvent\@\@\@Z
     */
    virtual enum class EventResult onMessage(struct MessageEvent const&);
    /**
     * @vftbl 3
     * @symbol
     * ?onEvent\@ScriptServerNetworkEventListener\@ScriptModuleMinecraft\@\@UEAA?AW4EventResult\@\@AEBUChatEvent\@\@\@Z
     */
    virtual enum class EventResult onEvent(struct ChatEvent const&);
    /**
     * @symbol
     * ??0ScriptServerNetworkEventListener\@ScriptModuleMinecraft\@\@QEAA\@AEBVWeakLifetimeScope\@Scripting\@\@U?$TypedObjectHandle\@VIScriptAfterEvents\@ScriptModuleMinecraft\@\@\@3\@\@Z
     */
    MCAPI
    ScriptServerNetworkEventListener(class Scripting::WeakLifetimeScope const&, struct Scripting::TypedObjectHandle<class ScriptModuleMinecraft::IScriptAfterEvents>);
};

}; // namespace ScriptModuleMinecraft
