#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/lifetime_registry/TypedObjectHandle.h"
#include "mc/world/actor/ActorInitializationMethod.h"
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
    // vIndex: 0
    virtual ~ScriptActorEventListener() = default;

    // vIndex: 1
    virtual ::EventResult onEvent(struct ActorRemoveEffectEvent const& actorRemoveEffectEvent);

    // vIndex: 2
    virtual ::EventResult onEvent(struct ActorNotificationEvent const& event);

    // vIndex: 3
    virtual void __unk_vfn_3();

    // vIndex: 4
    virtual void __unk_vfn_4();

    // vIndex: 5
    virtual void __unk_vfn_5();

    // vIndex: 6
    virtual void __unk_vfn_6();

    // vIndex: 7
    virtual ::EventResult onActorCreated(class Actor& actor, ::ActorInitializationMethod initializationMethod);

    // vIndex: 8
    virtual void __unk_vfn_8();

    // vIndex: 9
    virtual void __unk_vfn_9();

    // vIndex: 10
    virtual void __unk_vfn_10();

    // vIndex: 11
    virtual void __unk_vfn_11();

    // vIndex: 12
    virtual void __unk_vfn_12();

    // vIndex: 13
    virtual void __unk_vfn_13();

    // vIndex: 14
    virtual void __unk_vfn_14();

    // vIndex: 15
    virtual void __unk_vfn_15();

    // vIndex: 16
    virtual void __unk_vfn_16();

    // vIndex: 17
    virtual void __unk_vfn_17();

    // vIndex: 18
    virtual ::EventResult onEvent(struct ActorAddEffectEvent const& actorAddEffectEvent);

    // vIndex: 19
    virtual void __unk_vfn_19();

    // vIndex: 20
    virtual void __unk_vfn_20();

    // vIndex: 21
    virtual void __unk_vfn_21();

    // vIndex: 22
    virtual ::EventResult onEvent(struct ProjectileHitEvent const& projectileHitEvent);

    // vIndex: 23
    virtual void __unk_vfn_23();

    // vIndex: 24
    virtual void __unk_vfn_24();

    // vIndex: 25
    virtual void __unk_vfn_25();

    // vIndex: 26
    virtual void __unk_vfn_26();

    // vIndex: 27
    virtual void __unk_vfn_27();

    // vIndex: 28
    virtual ::EventResult onEvent(struct ActorRemovedEvent const& actorRemovedEvent);

    // vIndex: 29
    virtual void __unk_vfn_29();

    // vIndex: 30
    virtual void __unk_vfn_30();

    // vIndex: 31
    virtual ::EventResult onEvent(struct ActorHurtEvent const& actorHurtEvent);

    // vIndex: 32
    virtual ::EventResult onEvent(struct ActorHealthChangedEvent const& actorHealthChangedEvent);

    // vIndex: 33
    virtual void __unk_vfn_33();

    // vIndex: 34
    virtual void __unk_vfn_34();

    // vIndex: 35
    virtual ::EventResult onEvent(struct ActorDefinitionEndedEvent const& actorDefintionEvent);

    // vIndex: 36
    virtual ::EventResult onEvent(struct ActorDiedEvent const& actorDiedEvent);

    // vIndex: 37
    virtual void __unk_vfn_37();

    // vIndex: 38
    virtual void __unk_vfn_38();

    // vIndex: 39
    virtual ::EventResult onEvent(struct ActorAttackEvent const& actorAttackEvent);

    MCAPI ScriptActorEventListener(
        class Scripting::WeakLifetimeScope const&                                                 scope,
        struct Scripting::TypedObjectHandle<class ScriptModuleMinecraft::IScriptWorldAfterEvents> handle,
        bool                                                                                      afterListener
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(
        class Scripting::WeakLifetimeScope const&                                                 scope,
        struct Scripting::TypedObjectHandle<class ScriptModuleMinecraft::IScriptWorldAfterEvents> handle,
        bool                                                                                      afterListener
    );

    MCAPI ::EventResult onActorCreated$(class Actor& actor, ::ActorInitializationMethod initializationMethod);

    MCAPI ::EventResult onEvent$(struct ActorRemoveEffectEvent const& actorRemoveEffectEvent);

    MCAPI ::EventResult onEvent$(struct ActorNotificationEvent const& event);

    MCAPI ::EventResult onEvent$(struct ActorAddEffectEvent const& actorAddEffectEvent);

    MCAPI ::EventResult onEvent$(struct ProjectileHitEvent const& projectileHitEvent);

    MCAPI ::EventResult onEvent$(struct ActorRemovedEvent const& actorRemovedEvent);

    MCAPI ::EventResult onEvent$(struct ActorHurtEvent const& actorHurtEvent);

    MCAPI ::EventResult onEvent$(struct ActorHealthChangedEvent const& actorHealthChangedEvent);

    MCAPI ::EventResult onEvent$(struct ActorDefinitionEndedEvent const& actorDefintionEvent);

    MCAPI ::EventResult onEvent$(struct ActorDiedEvent const& actorDiedEvent);

    MCAPI ::EventResult onEvent$(struct ActorAttackEvent const& actorAttackEvent);

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
