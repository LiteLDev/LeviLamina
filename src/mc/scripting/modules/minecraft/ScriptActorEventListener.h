#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/TypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorEventListener;
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
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol
     * ?onEvent\@ScriptActorEventListener\@ScriptModuleMinecraft\@\@UEAA?AW4EventResult\@\@AEBUActorRemoveEffectEvent\@\@\@Z
     */
    virtual enum class EventResult onEvent(struct ActorRemoveEffectEvent const&); // NOLINT
    /**
     * @vftbl 2
     * @symbol
     * ?onEvent\@?$EventListenerDispatcher\@VActorEventListener\@\@\@\@MEAA?AW4EventResult\@\@AEBUActorNotificationEvent\@\@\@Z
     */
    virtual enum class EventResult onEvent(struct ActorNotificationEvent const&); // NOLINT
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3(); // NOLINT
    /**
     * @vftbl 4
     * @symbol __unk_vfn_4
     */
    virtual void __unk_vfn_4(); // NOLINT
    /**
     * @vftbl 5
     * @symbol __unk_vfn_5
     */
    virtual void __unk_vfn_5(); // NOLINT
    /**
     * @vftbl 6
     * @symbol __unk_vfn_6
     */
    virtual void __unk_vfn_6(); // NOLINT
    /**
     * @vftbl 7
     * @symbol __unk_vfn_7
     */
    virtual void __unk_vfn_7(); // NOLINT
    /**
     * @vftbl 8
     * @symbol
     * ?onActorCreated\@ScriptActorEventListener\@ScriptModuleMinecraft\@\@UEAA?AW4EventResult\@\@AEAVActor\@\@\@Z
     */
    virtual enum class EventResult onActorCreated(class Actor&); // NOLINT
    /**
     * @vftbl 9
     * @symbol __unk_vfn_9
     */
    virtual void __unk_vfn_9(); // NOLINT
    /**
     * @vftbl 10
     * @symbol __unk_vfn_10
     */
    virtual void __unk_vfn_10(); // NOLINT
    /**
     * @vftbl 11
     * @symbol __unk_vfn_11
     */
    virtual void __unk_vfn_11(); // NOLINT
    /**
     * @vftbl 12
     * @symbol __unk_vfn_12
     */
    virtual void __unk_vfn_12(); // NOLINT
    /**
     * @vftbl 13
     * @symbol __unk_vfn_13
     */
    virtual void __unk_vfn_13(); // NOLINT
    /**
     * @vftbl 14
     * @symbol __unk_vfn_14
     */
    virtual void __unk_vfn_14(); // NOLINT
    /**
     * @vftbl 15
     * @symbol __unk_vfn_15
     */
    virtual void __unk_vfn_15(); // NOLINT
    /**
     * @vftbl 16
     * @symbol __unk_vfn_16
     */
    virtual void __unk_vfn_16(); // NOLINT
    /**
     * @vftbl 17
     * @symbol
     * ?onEvent\@ScriptActorEventListener\@ScriptModuleMinecraft\@\@UEAA?AW4EventResult\@\@AEBUProjectileHitEvent\@\@\@Z
     */
    virtual enum class EventResult onEvent(struct ProjectileHitEvent const&); // NOLINT
    /**
     * @vftbl 18
     * @symbol __unk_vfn_18
     */
    virtual void __unk_vfn_18(); // NOLINT
    /**
     * @vftbl 19
     * @symbol __unk_vfn_19
     */
    virtual void __unk_vfn_19(); // NOLINT
    /**
     * @vftbl 20
     * @symbol __unk_vfn_20
     */
    virtual void __unk_vfn_20(); // NOLINT
    /**
     * @vftbl 21
     * @symbol __unk_vfn_21
     */
    virtual void __unk_vfn_21(); // NOLINT
    /**
     * @vftbl 22
     * @symbol __unk_vfn_22
     */
    virtual void __unk_vfn_22(); // NOLINT
    /**
     * @vftbl 23
     * @symbol
     * ?onEvent\@ScriptActorEventListener\@ScriptModuleMinecraft\@\@UEAA?AW4EventResult\@\@AEBUActorRemovedEvent\@\@\@Z
     */
    virtual enum class EventResult onEvent(struct ActorRemovedEvent const&); // NOLINT
    /**
     * @vftbl 24
     * @symbol __unk_vfn_24
     */
    virtual void __unk_vfn_24(); // NOLINT
    /**
     * @vftbl 25
     * @symbol __unk_vfn_25
     */
    virtual void __unk_vfn_25(); // NOLINT
    /**
     * @vftbl 26
     * @symbol
     * ?onEvent\@ScriptActorEventListener\@ScriptModuleMinecraft\@\@UEAA?AW4EventResult\@\@AEBUActorHurtEvent\@\@\@Z
     */
    virtual enum class EventResult onEvent(struct ActorHurtEvent const&); // NOLINT
    /**
     * @vftbl 27
     * @symbol
     * ?onEvent\@ScriptActorEventListener\@ScriptModuleMinecraft\@\@UEAA?AW4EventResult\@\@AEBUActorHealthChangedEvent\@\@\@Z
     */
    virtual enum class EventResult onEvent(struct ActorHealthChangedEvent const&); // NOLINT
    /**
     * @vftbl 28
     * @symbol __unk_vfn_28
     */
    virtual void __unk_vfn_28(); // NOLINT
    /**
     * @vftbl 29
     * @symbol __unk_vfn_29
     */
    virtual void __unk_vfn_29(); // NOLINT
    /**
     * @vftbl 30
     * @symbol
     * ?onEvent\@ScriptActorEventListener\@ScriptModuleMinecraft\@\@UEAA?AW4EventResult\@\@AEBUActorDefinitionEndedEvent\@\@\@Z
     */
    virtual enum class EventResult onEvent(struct ActorDefinitionEndedEvent const&); // NOLINT
    /**
     * @vftbl 31
     * @symbol
     * ?onEvent\@ScriptActorEventListener\@ScriptModuleMinecraft\@\@UEAA?AW4EventResult\@\@AEBUActorDiedEvent\@\@\@Z
     */
    virtual enum class EventResult onEvent(struct ActorDiedEvent const&); // NOLINT
    /**
     * @vftbl 32
     * @symbol __unk_vfn_32
     */
    virtual void __unk_vfn_32(); // NOLINT
    /**
     * @vftbl 33
     * @symbol __unk_vfn_33
     */
    virtual void __unk_vfn_33(); // NOLINT
    /**
     * @vftbl 34
     * @symbol
     * ?onEvent\@ScriptActorEventListener\@ScriptModuleMinecraft\@\@UEAA?AW4EventResult\@\@AEBUActorAttackEvent\@\@\@Z
     */
    virtual enum class EventResult onEvent(struct ActorAttackEvent const&); // NOLINT
    /**
     * @vftbl 35
     * @symbol __unk_vfn_35
     */
    virtual void __unk_vfn_35(); // NOLINT
    /**
     * @vftbl 36
     * @symbol
     * ?onEvent\@ScriptActorEventListener\@ScriptModuleMinecraft\@\@UEAA?AW4EventResult\@\@AEBUActorAddEffectEvent\@\@\@Z
     */
    virtual enum class EventResult onEvent(struct ActorAddEffectEvent const&); // NOLINT
    /**
     * @symbol
     * ??0ScriptActorEventListener\@ScriptModuleMinecraft\@\@QEAA\@AEBVWeakLifetimeScope\@Scripting\@\@U?$TypedObjectHandle\@VIScriptAfterEvents\@ScriptModuleMinecraft\@\@\@3\@_N\@Z
     */
    MCAPI ScriptActorEventListener(
        class Scripting::WeakLifetimeScope const&,
        struct Scripting::TypedObjectHandle<class ScriptModuleMinecraft::IScriptAfterEvents>,
        bool
    ); // NOLINT
};

}; // namespace ScriptModuleMinecraft
