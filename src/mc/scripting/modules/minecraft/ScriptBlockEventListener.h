#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/TypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockPos;
class Dimension;
class Player;
enum class EventResult;
namespace ScriptModuleMinecraft { class IScriptAfterEvents; }
namespace Scripting { class WeakLifetimeScope; }
struct BlockNotificationEvent;
struct ButtonPushEvent;
struct ExplosionStartedEvent;
struct LeverActionEvent;
struct PistonActionEvent;
struct PressurePlatePopEvent;
struct PressurePlatePushEvent;
struct TargetBlockHitEvent;
struct TripWireTripEvent;
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBlockEventListener {

public:
    // prevent constructor by default
    ScriptBlockEventListener& operator=(ScriptBlockEventListener const&) = delete;
    ScriptBlockEventListener(ScriptBlockEventListener const&)            = delete;
    ScriptBlockEventListener()                                           = delete;

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
     * ?onBlockPlacedByPlayer\@ScriptBlockEventListener\@ScriptModuleMinecraft\@\@UEAA?AW4EventResult\@\@AEAVPlayer\@\@AEBVBlock\@\@AEBVBlockPos\@\@_N\@Z
     */
    virtual enum class EventResult
    onBlockPlacedByPlayer(class Player&, class Block const&, class BlockPos const&, bool);
    /**
     * @vftbl 2
     * @symbol
     * ?onBlockDestroyedByPlayer\@ScriptBlockEventListener\@ScriptModuleMinecraft\@\@UEAA?AW4EventResult\@\@AEAVPlayer\@\@AEBVBlock\@\@AEBVBlockPos\@\@\@Z
     */
    virtual enum class EventResult onBlockDestroyedByPlayer(class Player&, class Block const&, class BlockPos const&);
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
     * @symbol
     * ?onBlockDestructionStarted\@ScriptBlockEventListener\@ScriptModuleMinecraft\@\@UEAA?AW4EventResult\@\@AEAVPlayer\@\@AEBVBlockPos\@\@E\@Z
     */
    virtual enum class EventResult onBlockDestructionStarted(class Player&, class BlockPos const&, unsigned char);
    /**
     * @vftbl 7
     * @symbol __unk_vfn_7
     */
    virtual void __unk_vfn_7();
    /**
     * @vftbl 8
     * @symbol
     * ?onBlockExploded\@ScriptBlockEventListener\@ScriptModuleMinecraft\@\@UEAA?AW4EventResult\@\@AEAVDimension\@\@AEBVBlockPos\@\@AEBVBlock\@\@PEAVActor\@\@\@Z
     */
    virtual enum class EventResult
    onBlockExploded(class Dimension&, class BlockPos const&, class Block const&, class Actor*);
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
     * @symbol
     * ?onEvent\@ScriptBlockEventListener\@ScriptModuleMinecraft\@\@UEAA?AW4EventResult\@\@AEBUExplosionStartedEvent\@\@\@Z
     */
    virtual enum class EventResult onEvent(struct ExplosionStartedEvent const&);
    /**
     * @vftbl 12
     * @symbol
     * ?onEvent\@?$EventListenerDispatcher\@VBlockEventListener\@\@\@\@MEAA?AW4EventResult\@\@AEBUBlockNotificationEvent\@\@\@Z
     */
    virtual enum class EventResult onEvent(struct BlockNotificationEvent const&);
    /**
     * @vftbl 13
     * @symbol __unk_vfn_13
     */
    virtual void __unk_vfn_13();
    /**
     * @vftbl 14
     * @symbol
     * ?onEvent\@ScriptBlockEventListener\@ScriptModuleMinecraft\@\@UEAA?AW4EventResult\@\@AEBUPistonActionEvent\@\@\@Z
     */
    virtual enum class EventResult onEvent(struct PistonActionEvent const&);
    /**
     * @vftbl 15
     * @symbol
     * ?onEvent\@ScriptBlockEventListener\@ScriptModuleMinecraft\@\@UEAA?AW4EventResult\@\@AEBULeverActionEvent\@\@\@Z
     */
    virtual enum class EventResult onEvent(struct LeverActionEvent const&);
    /**
     * @vftbl 16
     * @symbol
     * ?onEvent\@ScriptBlockEventListener\@ScriptModuleMinecraft\@\@UEAA?AW4EventResult\@\@AEBUButtonPushEvent\@\@\@Z
     */
    virtual enum class EventResult onEvent(struct ButtonPushEvent const&);
    /**
     * @vftbl 17
     * @symbol
     * ?onEvent\@ScriptBlockEventListener\@ScriptModuleMinecraft\@\@UEAA?AW4EventResult\@\@AEBUPressurePlatePushEvent\@\@\@Z
     */
    virtual enum class EventResult onEvent(struct PressurePlatePushEvent const&);
    /**
     * @vftbl 18
     * @symbol
     * ?onEvent\@ScriptBlockEventListener\@ScriptModuleMinecraft\@\@UEAA?AW4EventResult\@\@AEBUPressurePlatePopEvent\@\@\@Z
     */
    virtual enum class EventResult onEvent(struct PressurePlatePopEvent const&);
    /**
     * @vftbl 19
     * @symbol
     * ?onEvent\@ScriptBlockEventListener\@ScriptModuleMinecraft\@\@UEAA?AW4EventResult\@\@AEBUTargetBlockHitEvent\@\@\@Z
     */
    virtual enum class EventResult onEvent(struct TargetBlockHitEvent const&);
    /**
     * @vftbl 20
     * @symbol
     * ?onEvent\@ScriptBlockEventListener\@ScriptModuleMinecraft\@\@UEAA?AW4EventResult\@\@AEBUTripWireTripEvent\@\@\@Z
     */
    virtual enum class EventResult onEvent(struct TripWireTripEvent const&);
    /**
     * @symbol
     * ??0ScriptBlockEventListener\@ScriptModuleMinecraft\@\@QEAA\@AEBVWeakLifetimeScope\@Scripting\@\@U?$TypedObjectHandle\@VIScriptAfterEvents\@ScriptModuleMinecraft\@\@\@3\@\@Z
     */
    MCAPI
    ScriptBlockEventListener(class Scripting::WeakLifetimeScope const&, struct Scripting::TypedObjectHandle<class ScriptModuleMinecraft::IScriptAfterEvents>);
    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
