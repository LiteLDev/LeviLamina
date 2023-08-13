#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/TypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class Actor;
enum class EventResult;
namespace ScriptModuleMinecraft { class IScriptAfterEvents; }
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
    ScriptActorEventListener& operator=(ScriptActorEventListener const&) = delete;
    ScriptActorEventListener(ScriptActorEventListener const&)            = delete;
    ScriptActorEventListener()                                           = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol
     * ?onEvent\@ScriptActorEventListener\@ScriptModuleMinecraft\@\@UEAA?AW4EventResult\@\@AEBUActorRemoveEffectEvent\@\@\@Z
     */
    virtual enum class EventResult onEvent(struct ActorRemoveEffectEvent const&);
    /**
     * @vftbl 2
     * @symbol
     * ?onEvent\@?$EventListenerDispatcher\@VActorEventListener\@\@\@\@MEAA?AW4EventResult\@\@AEBUActorNotificationEvent\@\@\@Z
     */
    virtual enum class EventResult onEvent(struct ActorNotificationEvent const&);
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl 4
     * @symbol __unk_vfn_4
     */
    virtual void __unk_vfn_4();
    /**
     * @vftbl 5
     * @symbol __unk_vfn_5
     */
    virtual void __unk_vfn_5();
    /**
     * @vftbl 6
     * @symbol __unk_vfn_6
     */
    virtual void __unk_vfn_6();
    /**
     * @vftbl 7
     * @symbol __unk_vfn_7
     */
    virtual void __unk_vfn_7();
    /**
     * @vftbl 8
     * @symbol
     * ?onActorCreated\@ScriptActorEventListener\@ScriptModuleMinecraft\@\@UEAA?AW4EventResult\@\@AEAVActor\@\@\@Z
     */
    virtual enum class EventResult onActorCreated(class Actor&);
    /**
     * @vftbl 9
     * @symbol __unk_vfn_9
     */
    virtual void __unk_vfn_9();
    /**
     * @vftbl 10
     * @symbol __unk_vfn_10
     */
    virtual void __unk_vfn_10();
    /**
     * @vftbl 11
     * @symbol __unk_vfn_11
     */
    virtual void __unk_vfn_11();
    /**
     * @vftbl 12
     * @symbol __unk_vfn_12
     */
    virtual void __unk_vfn_12();
    /**
     * @vftbl 13
     * @symbol __unk_vfn_13
     */
    virtual void __unk_vfn_13();
    /**
     * @vftbl 14
     * @symbol __unk_vfn_14
     */
    virtual void __unk_vfn_14();
    /**
     * @vftbl 15
     * @symbol __unk_vfn_15
     */
    virtual void __unk_vfn_15();
    /**
     * @vftbl 16
     * @symbol __unk_vfn_16
     */
    virtual void __unk_vfn_16();
    /**
     * @vftbl 17
     * @symbol
     * ?onEvent\@ScriptActorEventListener\@ScriptModuleMinecraft\@\@UEAA?AW4EventResult\@\@AEBUProjectileHitEvent\@\@\@Z
     */
    virtual enum class EventResult onEvent(struct ProjectileHitEvent const&);
    /**
     * @vftbl 18
     * @symbol __unk_vfn_18
     */
    virtual void __unk_vfn_18();
    /**
     * @vftbl 19
     * @symbol __unk_vfn_19
     */
    virtual void __unk_vfn_19();
    /**
     * @vftbl 20
     * @symbol __unk_vfn_20
     */
    virtual void __unk_vfn_20();
    /**
     * @vftbl 21
     * @symbol __unk_vfn_21
     */
    virtual void __unk_vfn_21();
    /**
     * @vftbl 22
     * @symbol __unk_vfn_22
     */
    virtual void __unk_vfn_22();
    /**
     * @vftbl 23
     * @symbol
     * ?onEvent\@ScriptActorEventListener\@ScriptModuleMinecraft\@\@UEAA?AW4EventResult\@\@AEBUActorRemovedEvent\@\@\@Z
     */
    virtual enum class EventResult onEvent(struct ActorRemovedEvent const&);
    /**
     * @vftbl 24
     * @symbol __unk_vfn_24
     */
    virtual void __unk_vfn_24();
    /**
     * @vftbl 25
     * @symbol __unk_vfn_25
     */
    virtual void __unk_vfn_25();
    /**
     * @vftbl 26
     * @symbol
     * ?onEvent\@ScriptActorEventListener\@ScriptModuleMinecraft\@\@UEAA?AW4EventResult\@\@AEBUActorHurtEvent\@\@\@Z
     */
    virtual enum class EventResult onEvent(struct ActorHurtEvent const&);
    /**
     * @vftbl 27
     * @symbol
     * ?onEvent\@ScriptActorEventListener\@ScriptModuleMinecraft\@\@UEAA?AW4EventResult\@\@AEBUActorHealthChangedEvent\@\@\@Z
     */
    virtual enum class EventResult onEvent(struct ActorHealthChangedEvent const&);
    /**
     * @vftbl 28
     * @symbol __unk_vfn_28
     */
    virtual void __unk_vfn_28();
    /**
     * @vftbl 29
     * @symbol __unk_vfn_29
     */
    virtual void __unk_vfn_29();
    /**
     * @vftbl 30
     * @symbol
     * ?onEvent\@ScriptActorEventListener\@ScriptModuleMinecraft\@\@UEAA?AW4EventResult\@\@AEBUActorDefinitionEndedEvent\@\@\@Z
     */
    virtual enum class EventResult onEvent(struct ActorDefinitionEndedEvent const&);
    /**
     * @vftbl 31
     * @symbol
     * ?onEvent\@ScriptActorEventListener\@ScriptModuleMinecraft\@\@UEAA?AW4EventResult\@\@AEBUActorDiedEvent\@\@\@Z
     */
    virtual enum class EventResult onEvent(struct ActorDiedEvent const&);
    /**
     * @vftbl 32
     * @symbol __unk_vfn_32
     */
    virtual void __unk_vfn_32();
    /**
     * @vftbl 33
     * @symbol __unk_vfn_33
     */
    virtual void __unk_vfn_33();
    /**
     * @vftbl 34
     * @symbol
     * ?onEvent\@ScriptActorEventListener\@ScriptModuleMinecraft\@\@UEAA?AW4EventResult\@\@AEBUActorAttackEvent\@\@\@Z
     */
    virtual enum class EventResult onEvent(struct ActorAttackEvent const&);
    /**
     * @vftbl 35
     * @symbol __unk_vfn_35
     */
    virtual void __unk_vfn_35();
    /**
     * @vftbl 36
     * @symbol
     * ?onEvent\@ScriptActorEventListener\@ScriptModuleMinecraft\@\@UEAA?AW4EventResult\@\@AEBUActorAddEffectEvent\@\@\@Z
     */
    virtual enum class EventResult onEvent(struct ActorAddEffectEvent const&);
    /**
     * @symbol
     * ??0ScriptActorEventListener\@ScriptModuleMinecraft\@\@QEAA\@AEBVWeakLifetimeScope\@Scripting\@\@U?$TypedObjectHandle\@VIScriptAfterEvents\@ScriptModuleMinecraft\@\@\@3\@_N\@Z
     */
    MCAPI ScriptActorEventListener(
        class Scripting::WeakLifetimeScope const&,
        struct Scripting::TypedObjectHandle<class ScriptModuleMinecraft::IScriptAfterEvents>,
        bool
    );
    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
