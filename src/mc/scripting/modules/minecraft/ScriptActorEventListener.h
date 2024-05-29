#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorInitializationMethod.h"
#include "mc/external/scripting/TypedObjectHandle.h"
#include "mc/world/events/EventResult.h"

// auto generated forward declare list
// clang-format off
class Actor;
namespace ScriptModuleMinecraft { class IScriptWorldAfterEvents; }
namespace Scripting { class WeakLifetimeScope; }
struct ActorAddEffectEvent;
struct ActorAttackEvent;
struct ActorDefinitionEndedEvent;
struct ActorDiedEvent;
struct ActorHealthChangedEvent;
struct ActorHurtEvent;
struct ActorNotificationEvent;
struct ActorRemoveEffectEvent;
struct ActorRemovedEvent;
struct ProjectileHitEvent;
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptActorEventListener {
public:
    // prevent constructor by default
    ScriptActorEventListener& operator=(ScriptActorEventListener const&);
    ScriptActorEventListener(ScriptActorEventListener const&);
    ScriptActorEventListener();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ScriptActorEventListener@ScriptModuleMinecraft@@UEAA@XZ
    virtual ~ScriptActorEventListener() = default;

    // vIndex: 1, symbol:
    // ?onEvent@ScriptActorEventListener@ScriptModuleMinecraft@@UEAA?AW4EventResult@@AEBUActorRemoveEffectEvent@@@Z
    virtual ::EventResult onEvent(struct ActorRemoveEffectEvent const& actorRemoveEffectEvent);

    // vIndex: 2, symbol:
    // ?onEvent@?$EventListenerDispatcher@VActorEventListener@@@@MEAA?AW4EventResult@@AEBUActorNotificationEvent@@@Z
    virtual ::EventResult onEvent(struct ActorNotificationEvent const& event);

    // vIndex: 3, symbol: __unk_vfn_3
    virtual void __unk_vfn_3();

    // vIndex: 4, symbol: __unk_vfn_4
    virtual void __unk_vfn_4();

    // vIndex: 5, symbol: __unk_vfn_5
    virtual void __unk_vfn_5();

    // vIndex: 6, symbol: __unk_vfn_6
    virtual void __unk_vfn_6();

    // vIndex: 7, symbol:
    // ?onActorCreated@ScriptActorEventListener@ScriptModuleMinecraft@@UEAA?AW4EventResult@@AEAVActor@@W4ActorInitializationMethod@@@Z
    virtual ::EventResult onActorCreated(class Actor&, ::ActorInitializationMethod);

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

    // vIndex: 18, symbol:
    // ?onEvent@ScriptActorEventListener@ScriptModuleMinecraft@@UEAA?AW4EventResult@@AEBUActorAddEffectEvent@@@Z
    virtual ::EventResult onEvent(struct ActorAddEffectEvent const& actorAddEffectEvent);

    // vIndex: 19, symbol: __unk_vfn_19
    virtual void __unk_vfn_19();

    // vIndex: 20, symbol: __unk_vfn_20
    virtual void __unk_vfn_20();

    // vIndex: 21, symbol: __unk_vfn_21
    virtual void __unk_vfn_21();

    // vIndex: 22, symbol:
    // ?onEvent@ScriptActorEventListener@ScriptModuleMinecraft@@UEAA?AW4EventResult@@AEBUProjectileHitEvent@@@Z
    virtual ::EventResult onEvent(struct ProjectileHitEvent const& projectileHitEvent);

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

    // vIndex: 28, symbol:
    // ?onEvent@ScriptActorEventListener@ScriptModuleMinecraft@@UEAA?AW4EventResult@@AEBUActorRemovedEvent@@@Z
    virtual ::EventResult onEvent(struct ActorRemovedEvent const&);

    // vIndex: 29, symbol: __unk_vfn_29
    virtual void __unk_vfn_29();

    // vIndex: 30, symbol: __unk_vfn_30
    virtual void __unk_vfn_30();

    // vIndex: 31, symbol:
    // ?onEvent@ScriptActorEventListener@ScriptModuleMinecraft@@UEAA?AW4EventResult@@AEBUActorHurtEvent@@@Z
    virtual ::EventResult onEvent(struct ActorHurtEvent const& actorHurtEvent);

    // vIndex: 32, symbol:
    // ?onEvent@ScriptActorEventListener@ScriptModuleMinecraft@@UEAA?AW4EventResult@@AEBUActorHealthChangedEvent@@@Z
    virtual ::EventResult onEvent(struct ActorHealthChangedEvent const&);

    // vIndex: 33, symbol: __unk_vfn_33
    virtual void __unk_vfn_33();

    // vIndex: 34, symbol: __unk_vfn_34
    virtual void __unk_vfn_34();

    // vIndex: 35, symbol:
    // ?onEvent@ScriptActorEventListener@ScriptModuleMinecraft@@UEAA?AW4EventResult@@AEBUActorDefinitionEndedEvent@@@Z
    virtual ::EventResult onEvent(struct ActorDefinitionEndedEvent const&);

    // vIndex: 36, symbol:
    // ?onEvent@ScriptActorEventListener@ScriptModuleMinecraft@@UEAA?AW4EventResult@@AEBUActorDiedEvent@@@Z
    virtual ::EventResult onEvent(struct ActorDiedEvent const&);

    // vIndex: 37, symbol: __unk_vfn_37
    virtual void __unk_vfn_37();

    // vIndex: 38, symbol: __unk_vfn_38
    virtual void __unk_vfn_38();

    // vIndex: 39, symbol:
    // ?onEvent@ScriptActorEventListener@ScriptModuleMinecraft@@UEAA?AW4EventResult@@AEBUActorAttackEvent@@@Z
    virtual ::EventResult onEvent(struct ActorAttackEvent const&);

    // symbol:
    // ??0ScriptActorEventListener@ScriptModuleMinecraft@@QEAA@AEBVWeakLifetimeScope@Scripting@@U?$TypedObjectHandle@VIScriptWorldAfterEvents@ScriptModuleMinecraft@@@3@_N@Z
    MCAPI ScriptActorEventListener(
        class Scripting::WeakLifetimeScope const&,
        struct Scripting::TypedObjectHandle<class ScriptModuleMinecraft::IScriptWorldAfterEvents>,
        bool
    );

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
