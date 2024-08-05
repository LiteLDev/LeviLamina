#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/EventResult.h"

// auto generated forward declare list
// clang-format off
struct PlayerDimensionChangeAfterEvent;
struct PlayerGameModeChangeEvent;
struct PlayerInitialSpawnEvent;
struct PlayerInputPermissionCategoryChangeEvent;
struct PlayerInteractWithBlockAfterEvent;
struct PlayerInteractWithEntityAfterEvent;
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
    // vIndex: 0
    virtual ~ScriptPlayerEventListener() = default;

    // vIndex: 1
    virtual void __unk_vfn_1();

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
    virtual void __unk_vfn_33();

    // vIndex: 34
    virtual void __unk_vfn_34();

    // vIndex: 35
    virtual void __unk_vfn_35();

    // vIndex: 36
    virtual void __unk_vfn_36();

    // vIndex: 37
    virtual void __unk_vfn_37();

    // vIndex: 38
    virtual ::EventResult onEvent(struct PlayerGameModeChangeEvent const&);

    // vIndex: 39
    virtual ::EventResult onEvent(struct PlayerNotificationEvent const& event);

    // vIndex: 40
    virtual void __unk_vfn_40();

    // vIndex: 41
    virtual void __unk_vfn_41();

    // vIndex: 42
    virtual void __unk_vfn_42();

    // vIndex: 43
    virtual void __unk_vfn_43();

    // vIndex: 44
    virtual void __unk_vfn_44();

    // vIndex: 45
    virtual ::EventResult onEvent(struct PlayerDimensionChangeAfterEvent const&);

    // vIndex: 46
    virtual ::EventResult onEvent(struct PlayerInteractWithEntityAfterEvent const&);

    // vIndex: 47
    virtual ::EventResult onEvent(struct PlayerInteractWithBlockAfterEvent const&);

    // vIndex: 48
    virtual ::EventResult onEvent(struct PlayerInputPermissionCategoryChangeEvent const&);

    // vIndex: 49
    virtual void __unk_vfn_49();

    // vIndex: 50
    virtual void __unk_vfn_50();

    // vIndex: 51
    virtual void __unk_vfn_51();

    // vIndex: 52
    virtual void __unk_vfn_52();

    // vIndex: 53
    virtual ::EventResult onEvent(struct PlayerRespawnEvent const&);

    // vIndex: 54
    virtual void __unk_vfn_54();

    // vIndex: 55
    virtual void __unk_vfn_55();

    // vIndex: 56
    virtual ::EventResult onEvent(struct PlayerInitialSpawnEvent const&);

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
