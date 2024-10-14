#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/EventResult.h"

class NetheriteArmorEquippedListener {
public:
    // prevent constructor by default
    NetheriteArmorEquippedListener& operator=(NetheriteArmorEquippedListener const&);
    NetheriteArmorEquippedListener(NetheriteArmorEquippedListener const&);
    NetheriteArmorEquippedListener();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~NetheriteArmorEquippedListener();

    // vIndex: 1
    virtual ::EventResult onEvent(struct ActorNotificationEvent const& event);

    // vIndex: 2
    virtual void __unk_vfn_2();

    // vIndex: 3
    virtual void __unk_vfn_3();

    // vIndex: 4
    virtual void __unk_vfn_4();

    // vIndex: 5
    virtual void __unk_vfn_5();

    // vIndex: 6
    virtual void __unk_vfn_6();

    // vIndex: 7
    virtual void __unk_vfn_7();

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
    virtual void __unk_vfn_18();

    // vIndex: 19
    virtual void __unk_vfn_19();

    // vIndex: 20
    virtual void __unk_vfn_20();

    // vIndex: 21
    virtual void __unk_vfn_21();

    // vIndex: 22
    virtual void __unk_vfn_22();

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
    virtual void __unk_vfn_28();

    // vIndex: 29
    virtual void __unk_vfn_29();

    // vIndex: 30
    virtual void __unk_vfn_30();

    // vIndex: 31
    virtual void __unk_vfn_31();

    // vIndex: 32
    virtual void __unk_vfn_32();

    // vIndex: 33
    virtual ::EventResult onEvent(struct ActorEquippedArmorEvent const& actorEquippedArmorEvent);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void dtor$();

    MCAPI ::EventResult onEvent$(struct ActorNotificationEvent const& event);

    MCAPI ::EventResult onEvent$(struct ActorEquippedArmorEvent const& actorEquippedArmorEvent);

    // NOLINTEND
};
