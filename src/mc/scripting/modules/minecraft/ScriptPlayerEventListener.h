#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/TypedObjectHandle.h"
#include "mc/world/events/EventResult.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class IScriptWorldAfterEvents; }
namespace Scripting { class WeakLifetimeScope; }
struct PlayerDimensionChangeAfterEvent;
struct PlayerInitialSpawnEvent;
struct PlayerInteractWithBlockEvent;
struct PlayerInteractWithEntityEvent;
struct PlayerNotificationEvent;
struct PlayerRespawnEvent;
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptPlayerEventListener {
public:
    // prevent constructor by default
    ScriptPlayerEventListener& operator=(ScriptPlayerEventListener const&);
    ScriptPlayerEventListener(ScriptPlayerEventListener const&);
    ScriptPlayerEventListener();

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

    // vIndex: 16, symbol: __unk_vfn_16
    virtual void __unk_vfn_16();

    // vIndex: 17, symbol: __unk_vfn_17
    virtual void __unk_vfn_17();

    // vIndex: 18, symbol: __unk_vfn_18
    virtual void __unk_vfn_18();

    // vIndex: 19, symbol: __unk_vfn_19
    virtual void __unk_vfn_19();

    // vIndex: 20, symbol: __unk_vfn_20
    virtual void __unk_vfn_20();

    // vIndex: 21, symbol: __unk_vfn_21
    virtual void __unk_vfn_21();

    // vIndex: 22, symbol: __unk_vfn_22
    virtual void __unk_vfn_22();

    // vIndex: 23, symbol: __unk_vfn_23
    virtual void __unk_vfn_23();

    // vIndex: 24, symbol: __unk_vfn_24
    virtual void __unk_vfn_24();

    // vIndex: 25, symbol: __unk_vfn_25
    virtual void __unk_vfn_25();

    // vIndex: 26, symbol: __unk_vfn_26
    virtual void __unk_vfn_26();

    // vIndex: 27, symbol: __unk_vfn_27
    virtual void __unk_vfn_27();

    // vIndex: 28, symbol: __unk_vfn_28
    virtual void __unk_vfn_28();

    // vIndex: 29, symbol: __unk_vfn_29
    virtual void __unk_vfn_29();

    // vIndex: 30, symbol: __unk_vfn_30
    virtual void __unk_vfn_30();

    // vIndex: 31, symbol: __unk_vfn_31
    virtual void __unk_vfn_31();

    // vIndex: 32, symbol: __unk_vfn_32
    virtual void __unk_vfn_32();

    // vIndex: 33, symbol: __unk_vfn_33
    virtual void __unk_vfn_33();

    // vIndex: 34, symbol: __unk_vfn_34
    virtual void __unk_vfn_34();

    // vIndex: 35, symbol: __unk_vfn_35
    virtual void __unk_vfn_35();

    // vIndex: 36, symbol: __unk_vfn_36
    virtual void __unk_vfn_36();

    // vIndex: 37, symbol: __unk_vfn_37
    virtual void __unk_vfn_37();

    // vIndex: 38, symbol: __unk_vfn_38
    virtual void __unk_vfn_38();

    // vIndex: 39, symbol: __unk_vfn_39
    virtual void __unk_vfn_39();

    // vIndex: 40, symbol: __unk_vfn_40
    virtual void __unk_vfn_40();

    // vIndex: 41, symbol: __unk_vfn_41
    virtual void __unk_vfn_41();

    // vIndex: 42, symbol: __unk_vfn_42
    virtual void __unk_vfn_42();

    // vIndex: 43, symbol:
    // ?onEvent@ScriptPlayerEventListener@ScriptModuleMinecraft@@UEAA?AW4EventResult@@AEBUPlayerInteractWithEntityEvent@@@Z
    virtual ::EventResult onEvent(struct PlayerInteractWithEntityEvent const&);

    // vIndex: 44, symbol:
    // ?onEvent@ScriptPlayerEventListener@ScriptModuleMinecraft@@UEAA?AW4EventResult@@AEBUPlayerInteractWithBlockEvent@@@Z
    virtual ::EventResult onEvent(struct PlayerInteractWithBlockEvent const&);

    // vIndex: 45, symbol:
    // ?onEvent@?$EventListenerDispatcher@VPlayerEventListener@@@@MEAA?AW4EventResult@@AEBUPlayerNotificationEvent@@@Z
    virtual ::EventResult onEvent(struct PlayerNotificationEvent const&);

    // vIndex: 46, symbol: __unk_vfn_46
    virtual void __unk_vfn_46();

    // vIndex: 47, symbol: __unk_vfn_47
    virtual void __unk_vfn_47();

    // vIndex: 48, symbol: __unk_vfn_48
    virtual void __unk_vfn_48();

    // vIndex: 49, symbol:
    // ?onEvent@ScriptPlayerEventListener@ScriptModuleMinecraft@@UEAA?AW4EventResult@@AEBUPlayerDimensionChangeAfterEvent@@@Z
    virtual ::EventResult onEvent(struct PlayerDimensionChangeAfterEvent const&);

    // vIndex: 50, symbol: __unk_vfn_50
    virtual void __unk_vfn_50();

    // vIndex: 51, symbol: __unk_vfn_51
    virtual void __unk_vfn_51();

    // vIndex: 52, symbol: __unk_vfn_52
    virtual void __unk_vfn_52();

    // vIndex: 53, symbol: __unk_vfn_53
    virtual void __unk_vfn_53();

    // vIndex: 54, symbol:
    // ?onEvent@ScriptPlayerEventListener@ScriptModuleMinecraft@@UEAA?AW4EventResult@@AEBUPlayerRespawnEvent@@@Z
    virtual ::EventResult onEvent(struct PlayerRespawnEvent const&);

    // vIndex: 55, symbol: __unk_vfn_55
    virtual void __unk_vfn_55();

    // vIndex: 56, symbol: __unk_vfn_56
    virtual void __unk_vfn_56();

    // vIndex: 57, symbol:
    // ?onEvent@ScriptPlayerEventListener@ScriptModuleMinecraft@@UEAA?AW4EventResult@@AEBUPlayerInitialSpawnEvent@@@Z
    virtual ::EventResult onEvent(struct PlayerInitialSpawnEvent const&);

    // symbol:
    // ??0ScriptPlayerEventListener@ScriptModuleMinecraft@@QEAA@AEBVWeakLifetimeScope@Scripting@@U?$TypedObjectHandle@VIScriptWorldAfterEvents@ScriptModuleMinecraft@@@3@@Z
    MCAPI
    ScriptPlayerEventListener(class Scripting::WeakLifetimeScope const&, struct Scripting::TypedObjectHandle<class ScriptModuleMinecraft::IScriptWorldAfterEvents>);

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
