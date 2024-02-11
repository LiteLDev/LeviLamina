#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/TypedObjectHandle.h"
#include "mc/world/events/EventResult.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ItemDescriptor;
class ItemStackBase;
class Player;
namespace ScriptModuleMinecraft { class IScriptWorldAfterEvents; }
namespace Scripting { class WeakLifetimeScope; }
struct ItemCompleteUseEvent;
struct ItemDefinitionEventTriggeredEvent;
struct ItemNotificationEvent;
struct ItemReleaseUseEvent;
struct ItemStartUseEvent;
struct ItemStartUseOnEvent;
struct ItemStopUseEvent;
struct ItemStopUseOnEvent;
struct ItemUseEvent;
struct ItemUsedOnEvent;
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptItemEventListener {
public:
    // prevent constructor by default
    ScriptItemEventListener& operator=(ScriptItemEventListener const&);
    ScriptItemEventListener(ScriptItemEventListener const&);
    ScriptItemEventListener();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ScriptItemEventListener@ScriptModuleMinecraft@@UEAA@XZ
    virtual ~ScriptItemEventListener() = default;

    // vIndex: 16, symbol:
    // ?onEvent@ScriptItemEventListener@ScriptModuleMinecraft@@UEAA?AW4EventResult@@AEBUItemUseEvent@@@Z
    virtual ::EventResult onEvent(struct ItemUseEvent const&);

    // vIndex: 17, symbol:
    // ?onEvent@ScriptItemEventListener@ScriptModuleMinecraft@@UEAA?AW4EventResult@@AEBUItemUsedOnEvent@@@Z
    virtual ::EventResult onEvent(struct ItemUsedOnEvent const&);

    // vIndex: 18, symbol:
    // ?onEvent@ScriptItemEventListener@ScriptModuleMinecraft@@UEAA?AW4EventResult@@AEBUItemStartUseOnEvent@@@Z
    virtual ::EventResult onEvent(struct ItemStartUseOnEvent const&);

    // vIndex: 19, symbol:
    // ?onEvent@ScriptItemEventListener@ScriptModuleMinecraft@@UEAA?AW4EventResult@@AEBUItemStopUseOnEvent@@@Z
    virtual ::EventResult onEvent(struct ItemStopUseOnEvent const&);

    // vIndex: 20, symbol:
    // ?onEvent@ScriptItemEventListener@ScriptModuleMinecraft@@UEAA?AW4EventResult@@AEBUItemStartUseEvent@@@Z
    virtual ::EventResult onEvent(struct ItemStartUseEvent const&);

    // vIndex: 21, symbol:
    // ?onEvent@ScriptItemEventListener@ScriptModuleMinecraft@@UEAA?AW4EventResult@@AEBUItemCompleteUseEvent@@@Z
    virtual ::EventResult onEvent(struct ItemCompleteUseEvent const&);

    // vIndex: 22, symbol:
    // ?onEvent@ScriptItemEventListener@ScriptModuleMinecraft@@UEAA?AW4EventResult@@AEBUItemReleaseUseEvent@@@Z
    virtual ::EventResult onEvent(struct ItemReleaseUseEvent const&);

    // vIndex: 23, symbol:
    // ?onEvent@ScriptItemEventListener@ScriptModuleMinecraft@@UEAA?AW4EventResult@@AEBUItemStopUseEvent@@@Z
    virtual ::EventResult onEvent(struct ItemStopUseEvent const&);

    // vIndex: 24, symbol:
    // ?onEvent@?$EventListenerDispatcher@VItemEventListener@@@@MEAA?AW4EventResult@@AEBUItemNotificationEvent@@@Z
    virtual ::EventResult onEvent(struct ItemNotificationEvent const& event);

    // vIndex: 25, symbol: __unk_vfn_25
    virtual void __unk_vfn_25();

    // vIndex: 26, symbol:
    // ?onEvent@ScriptItemEventListener@ScriptModuleMinecraft@@UEAA?AW4EventResult@@AEBUItemDefinitionEventTriggeredEvent@@@Z
    virtual ::EventResult onEvent(struct ItemDefinitionEventTriggeredEvent const&);

    // symbol:
    // ??0ScriptItemEventListener@ScriptModuleMinecraft@@QEAA@AEBVWeakLifetimeScope@Scripting@@U?$TypedObjectHandle@VIScriptWorldAfterEvents@ScriptModuleMinecraft@@@3@@Z
    MCAPI ScriptItemEventListener(
        class Scripting::WeakLifetimeScope const&                                                 scope,
        struct Scripting::TypedObjectHandle<class ScriptModuleMinecraft::IScriptWorldAfterEvents> handle
    );

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
