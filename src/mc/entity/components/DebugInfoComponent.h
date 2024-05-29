#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/SubClientId.h"
#include "mc/world/events/EventResult.h"

class DebugInfoComponent {
public:
    // DebugInfoComponent inner types declare
    // clang-format off
    struct Listener;
    // clang-format on

    // DebugInfoComponent inner types define
    struct Listener {
    public:
        // prevent constructor by default
        Listener& operator=(Listener const&);
        Listener(Listener const&);
        Listener();

    public:
        // NOLINTBEGIN
        // symbol: ??1Listener@DebugInfoComponent@@QEAA@XZ
        MCAPI ~Listener();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    DebugInfoComponent& operator=(DebugInfoComponent const&);
    DebugInfoComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1DebugInfoComponent@@UEAA@XZ
    virtual ~DebugInfoComponent() = default;

    // vIndex: 1, symbol:
    // ?onEvent@?$EventListenerDispatcher@VActorEventListener@@@@MEAA?AW4EventResult@@AEBUActorNotificationEvent@@@Z
    virtual ::EventResult onEvent(struct ActorNotificationEvent const& event);

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

    // vIndex: 37, symbol: ?onEvent@DebugInfoComponent@@UEAA?AW4EventResult@@AEBUActorDefinitionTriggeredEvent@@@Z
    virtual ::EventResult onEvent(struct ActorDefinitionTriggeredEvent const& actorDefinitionEvent);

    // symbol: ??0DebugInfoComponent@@QEAA@$$QEAV0@@Z
    MCAPI DebugInfoComponent(class DebugInfoComponent&&);

    // symbol: ??0DebugInfoComponent@@QEAA@AEBV0@@Z
    MCAPI DebugInfoComponent(class DebugInfoComponent const&);

    // symbol: ?addListener@DebugInfoComponent@@QEAAXAEBVHashedString@@VNetworkIdentifier@@W4SubClientId@@@Z
    MCAPI void
    addListener(class HashedString const& messageType, class NetworkIdentifier source, ::SubClientId subClientId);

    // symbol: ?listenersEmpty@DebugInfoComponent@@QEBA_NXZ
    MCAPI bool listenersEmpty() const;

    // symbol: ??4DebugInfoComponent@@QEAAAEAV0@$$QEAV0@@Z
    MCAPI class DebugInfoComponent& operator=(class DebugInfoComponent&&);

    // symbol: ?removeListener@DebugInfoComponent@@QEAAXAEBVHashedString@@VNetworkIdentifier@@W4SubClientId@@@Z
    MCAPI void
    removeListener(class HashedString const&, class NetworkIdentifier networkIdentifier, ::SubClientId subClientId);

    // NOLINTEND
};
