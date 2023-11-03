#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/TypedObjectHandle.h"
#include "mc/world/events/EventResult.h"

// auto generated forward declare list
// clang-format off
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
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1();

    // vIndex: 2, symbol: __unk_vfn_2
    virtual void __unk_vfn_2();

    // vIndex: 3, symbol: __unk_vfn_3
    virtual void __unk_vfn_3();

    // vIndex: 4, symbol: __unk_vfn_4
    virtual void __unk_vfn_4();

    // vIndex: 5, symbol: __unk_vfn_5
    virtual void __unk_vfn_5();

    // vIndex: 6, symbol: __unk_vfn_6
    virtual void __unk_vfn_6();

    // vIndex: 7, symbol: __unk_vfn_7
    virtual void __unk_vfn_7();

    // vIndex: 8, symbol: __unk_vfn_8
    virtual void __unk_vfn_8();

    // vIndex: 9, symbol: __unk_vfn_9
    virtual void __unk_vfn_9();

    // vIndex: 10, symbol: __unk_vfn_10
    virtual void __unk_vfn_10();

    // vIndex: 11, symbol: __unk_vfn_11
    virtual void __unk_vfn_11();

    // vIndex: 12, symbol: __unk_vfn_12
    virtual void __unk_vfn_12();

    // vIndex: 13, symbol: __unk_vfn_13
    virtual void __unk_vfn_13();

    // vIndex: 14, symbol: __unk_vfn_14
    virtual void __unk_vfn_14();

    // vIndex: 15, symbol: __unk_vfn_15
    virtual void __unk_vfn_15();

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

    // vIndex: 24, symbol: ?onEvent@ItemEventListener@@UEAA?AW4EventResult@@AEBUItemNotificationEvent@@@Z
    virtual ::EventResult onEvent(struct ItemNotificationEvent const&);

    // vIndex: 25, symbol: __unk_vfn_25
    virtual void __unk_vfn_25();

    // vIndex: 26, symbol:
    // ?onEvent@ScriptItemEventListener@ScriptModuleMinecraft@@UEAA?AW4EventResult@@AEBUItemDefinitionEventTriggeredEvent@@@Z
    virtual ::EventResult onEvent(struct ItemDefinitionEventTriggeredEvent const&);

    // symbol:
    // ??0ScriptItemEventListener@ScriptModuleMinecraft@@QEAA@AEBVWeakLifetimeScope@Scripting@@U?$TypedObjectHandle@VIScriptWorldAfterEvents@ScriptModuleMinecraft@@@3@@Z
    MCAPI
    ScriptItemEventListener(class Scripting::WeakLifetimeScope const&, struct Scripting::TypedObjectHandle<class ScriptModuleMinecraft::IScriptWorldAfterEvents>);

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
