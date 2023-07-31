#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace ScriptModuleMinecraft { struct ScriptActorAddEffectAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptActorDieAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptActorHealthChangedAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptActorHitBlockAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptActorHitEntityAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptActorHurtAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptActorRemovedAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptActorSpawnAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptBlockBreakAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptBlockExplodedAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptBlockPlaceAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptButtonPushAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptChatSendAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptDataDrivenActorTriggerAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptExplosionStartedAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptItemCompleteUseAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptItemDefinitionAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptItemReleaseUseAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptItemStartUseAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptItemStartUseOnAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptItemStopUseAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptItemStopUseOnAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptItemUseAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptItemUseOnAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptLeverActionAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptPistonActionAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptPlayerJoinAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptPlayerLeaveAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptPlayerSpawnAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptPressurePlatePopAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptPressurePlatePushAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptProjectileHitAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptServerMessageAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptTargetBlockHitAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptTripWireTripAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptWeatherChangedAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptWorldInitializeAfterEvent; }
// clang-format on

namespace ScriptModuleMinecraft {

class IScriptAfterEvents {

public:
    // prevent constructor by default
    IScriptAfterEvents& operator=(IScriptAfterEvents const&) = delete;
    IScriptAfterEvents(IScriptAfterEvents const&)            = delete;
    IScriptAfterEvents()                                     = delete;

public:
    // NOLINTBEGIN
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTMODULEMINECRAFT_ISCRIPTAFTEREVENTS
    /**
     * @symbol
     * ?onActivateLever\@IScriptAfterEvents\@ScriptModuleMinecraft\@\@UEAAXAEAV?$StrongTypedObjectHandle\@UScriptLeverActionAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Z
     */
    MCVAPI void onActivateLever(class Scripting::StrongTypedObjectHandle<
                                struct ScriptModuleMinecraft::ScriptLeverActionAfterEvent>&);
    /**
     * @symbol
     * ?onActivatePiston\@IScriptAfterEvents\@ScriptModuleMinecraft\@\@UEAAXAEAV?$StrongTypedObjectHandle\@UScriptPistonActionAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Z
     */
    MCVAPI void onActivatePiston(class Scripting::StrongTypedObjectHandle<
                                 struct ScriptModuleMinecraft::ScriptPistonActionAfterEvent>&);
    /**
     * @symbol
     * ?onActorAddEffect\@IScriptAfterEvents\@ScriptModuleMinecraft\@\@UEAAXAEAV?$StrongTypedObjectHandle\@UScriptActorAddEffectAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Z
     */
    MCVAPI void onActorAddEffect(class Scripting::StrongTypedObjectHandle<
                                 struct ScriptModuleMinecraft::ScriptActorAddEffectAfterEvent>&);
    /**
     * @symbol
     * ?onActorDie\@IScriptAfterEvents\@ScriptModuleMinecraft\@\@UEAAXAEAV?$StrongTypedObjectHandle\@UScriptActorDieAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Z
     */
    MCVAPI void
    onActorDie(class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptActorDieAfterEvent>&);
    /**
     * @symbol
     * ?onActorHealthChanged\@IScriptAfterEvents\@ScriptModuleMinecraft\@\@UEAAXAEAV?$StrongTypedObjectHandle\@UScriptActorHealthChangedAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Z
     */
    MCVAPI void onActorHealthChanged(class Scripting::StrongTypedObjectHandle<
                                     struct ScriptModuleMinecraft::ScriptActorHealthChangedAfterEvent>&);
    /**
     * @symbol
     * ?onActorHitBlock\@IScriptAfterEvents\@ScriptModuleMinecraft\@\@UEAAXAEAV?$StrongTypedObjectHandle\@UScriptActorHitBlockAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Z
     */
    MCVAPI void onActorHitBlock(class Scripting::StrongTypedObjectHandle<
                                struct ScriptModuleMinecraft::ScriptActorHitBlockAfterEvent>&);
    /**
     * @symbol
     * ?onActorHitEntity\@IScriptAfterEvents\@ScriptModuleMinecraft\@\@UEAAXAEAV?$StrongTypedObjectHandle\@UScriptActorHitEntityAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Z
     */
    MCVAPI void onActorHitEntity(class Scripting::StrongTypedObjectHandle<
                                 struct ScriptModuleMinecraft::ScriptActorHitEntityAfterEvent>&);
    /**
     * @symbol
     * ?onActorHurt\@IScriptAfterEvents\@ScriptModuleMinecraft\@\@UEAAXAEAV?$StrongTypedObjectHandle\@UScriptActorHurtAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Z
     */
    MCVAPI void
    onActorHurt(class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptActorHurtAfterEvent>&);
    /**
     * @symbol
     * ?onActorRemoved\@IScriptAfterEvents\@ScriptModuleMinecraft\@\@UEAAXAEBV?$StrongTypedObjectHandle\@VScriptActor\@ScriptModuleMinecraft\@\@\@Scripting\@\@AEAV?$StrongTypedObjectHandle\@UScriptActorRemovedAfterEvent\@ScriptModuleMinecraft\@\@\@4\@\@Z
     */
    MCVAPI void
    onActorRemoved(class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptActor> const&, class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptActorRemovedAfterEvent>&);
    /**
     * @symbol
     * ?onActorSpawn\@IScriptAfterEvents\@ScriptModuleMinecraft\@\@UEAAXAEAV?$StrongTypedObjectHandle\@UScriptActorSpawnAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Z
     */
    MCVAPI void
    onActorSpawn(class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptActorSpawnAfterEvent>&);
    /**
     * @symbol
     * ?onBlockBreak\@IScriptAfterEvents\@ScriptModuleMinecraft\@\@UEAAXAEAV?$StrongTypedObjectHandle\@UScriptBlockBreakAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Z
     */
    MCVAPI void
    onBlockBreak(class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptBlockBreakAfterEvent>&);
    /**
     * @symbol
     * ?onBlockPlace\@IScriptAfterEvents\@ScriptModuleMinecraft\@\@UEAAXAEAV?$StrongTypedObjectHandle\@UScriptBlockPlaceAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Z
     */
    MCVAPI void
    onBlockPlace(class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptBlockPlaceAfterEvent>&);
    /**
     * @symbol
     * ?onChat\@IScriptAfterEvents\@ScriptModuleMinecraft\@\@UEAAXAEAV?$StrongTypedObjectHandle\@UScriptChatSendAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Z
     */
    MCVAPI void
    onChat(class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptChatSendAfterEvent>&);
    /**
     * @symbol
     * ?onDataDrivenActorEventSend\@IScriptAfterEvents\@ScriptModuleMinecraft\@\@UEAAXAEAV?$StrongTypedObjectHandle\@UScriptDataDrivenActorTriggerAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Z
     */
    MCVAPI void onDataDrivenActorEventSend(class Scripting::StrongTypedObjectHandle<
                                           struct ScriptModuleMinecraft::ScriptDataDrivenActorTriggerAfterEvent>&);
    /**
     * @symbol
     * ?onExplodeBlock\@IScriptAfterEvents\@ScriptModuleMinecraft\@\@UEAAXAEAV?$StrongTypedObjectHandle\@UScriptBlockExplodedAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Z
     */
    MCVAPI void onExplodeBlock(class Scripting::StrongTypedObjectHandle<
                               struct ScriptModuleMinecraft::ScriptBlockExplodedAfterEvent>&);
    /**
     * @symbol
     * ?onExplosion\@IScriptAfterEvents\@ScriptModuleMinecraft\@\@UEAAXAEAV?$StrongTypedObjectHandle\@UScriptExplosionStartedAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Z
     */
    MCVAPI void onExplosion(class Scripting::StrongTypedObjectHandle<
                            struct ScriptModuleMinecraft::ScriptExplosionStartedAfterEvent>&);
    /**
     * @symbol
     * ?onHitTargetBlock\@IScriptAfterEvents\@ScriptModuleMinecraft\@\@UEAAXAEAV?$StrongTypedObjectHandle\@UScriptTargetBlockHitAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Z
     */
    MCVAPI void onHitTargetBlock(class Scripting::StrongTypedObjectHandle<
                                 struct ScriptModuleMinecraft::ScriptTargetBlockHitAfterEvent>&);
    /**
     * @symbol
     * ?onItemCompleteUse\@IScriptAfterEvents\@ScriptModuleMinecraft\@\@UEAAXAEAV?$StrongTypedObjectHandle\@UScriptItemCompleteUseAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Z
     */
    MCVAPI void onItemCompleteUse(class Scripting::StrongTypedObjectHandle<
                                  struct ScriptModuleMinecraft::ScriptItemCompleteUseAfterEvent>&);
    /**
     * @symbol
     * ?onItemDefinitionEventTriggered\@IScriptAfterEvents\@ScriptModuleMinecraft\@\@UEAAXAEAV?$StrongTypedObjectHandle\@UScriptItemDefinitionAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Z
     */
    MCVAPI void onItemDefinitionEventTriggered(class Scripting::StrongTypedObjectHandle<
                                               struct ScriptModuleMinecraft::ScriptItemDefinitionAfterEvent>&);
    /**
     * @symbol
     * ?onItemReleaseUse\@IScriptAfterEvents\@ScriptModuleMinecraft\@\@UEAAXAEAV?$StrongTypedObjectHandle\@UScriptItemReleaseUseAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Z
     */
    MCVAPI void onItemReleaseUse(class Scripting::StrongTypedObjectHandle<
                                 struct ScriptModuleMinecraft::ScriptItemReleaseUseAfterEvent>&);
    /**
     * @symbol
     * ?onItemStartUse\@IScriptAfterEvents\@ScriptModuleMinecraft\@\@UEAAXAEAV?$StrongTypedObjectHandle\@UScriptItemStartUseAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Z
     */
    MCVAPI void onItemStartUse(class Scripting::StrongTypedObjectHandle<
                               struct ScriptModuleMinecraft::ScriptItemStartUseAfterEvent>&);
    /**
     * @symbol
     * ?onItemStartUseOn\@IScriptAfterEvents\@ScriptModuleMinecraft\@\@UEAAXAEAV?$StrongTypedObjectHandle\@UScriptItemStartUseOnAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Z
     */
    MCVAPI void onItemStartUseOn(class Scripting::StrongTypedObjectHandle<
                                 struct ScriptModuleMinecraft::ScriptItemStartUseOnAfterEvent>&);
    /**
     * @symbol
     * ?onItemStopUse\@IScriptAfterEvents\@ScriptModuleMinecraft\@\@UEAAXAEAV?$StrongTypedObjectHandle\@UScriptItemStopUseAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Z
     */
    MCVAPI void
    onItemStopUse(class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptItemStopUseAfterEvent>&);
    /**
     * @symbol
     * ?onItemStopUseOn\@IScriptAfterEvents\@ScriptModuleMinecraft\@\@UEAAXAEAV?$StrongTypedObjectHandle\@UScriptItemStopUseOnAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Z
     */
    MCVAPI void onItemStopUseOn(class Scripting::StrongTypedObjectHandle<
                                struct ScriptModuleMinecraft::ScriptItemStopUseOnAfterEvent>&);
    /**
     * @symbol
     * ?onItemUse\@IScriptAfterEvents\@ScriptModuleMinecraft\@\@UEAAXAEAV?$StrongTypedObjectHandle\@UScriptItemUseAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Z
     */
    MCVAPI void
    onItemUse(class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptItemUseAfterEvent>&);
    /**
     * @symbol
     * ?onItemUseOn\@IScriptAfterEvents\@ScriptModuleMinecraft\@\@UEAAXAEAV?$StrongTypedObjectHandle\@UScriptItemUseOnAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Z
     */
    MCVAPI void
    onItemUseOn(class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptItemUseOnAfterEvent>&);
    /**
     * @symbol
     * ?onPlayerJoin\@IScriptAfterEvents\@ScriptModuleMinecraft\@\@UEAAXAEAV?$StrongTypedObjectHandle\@UScriptPlayerJoinAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Z
     */
    MCVAPI void
    onPlayerJoin(class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptPlayerJoinAfterEvent>&);
    /**
     * @symbol
     * ?onPlayerLeave\@IScriptAfterEvents\@ScriptModuleMinecraft\@\@UEAAXAEAV?$StrongTypedObjectHandle\@UScriptPlayerLeaveAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Z
     */
    MCVAPI void
    onPlayerLeave(class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptPlayerLeaveAfterEvent>&);
    /**
     * @symbol
     * ?onPlayerSpawn\@IScriptAfterEvents\@ScriptModuleMinecraft\@\@UEAAXAEAV?$StrongTypedObjectHandle\@UScriptPlayerSpawnAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Z
     */
    MCVAPI void
    onPlayerSpawn(class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptPlayerSpawnAfterEvent>&);
    /**
     * @symbol
     * ?onPopPressurePlate\@IScriptAfterEvents\@ScriptModuleMinecraft\@\@UEAAXAEAV?$StrongTypedObjectHandle\@UScriptPressurePlatePopAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Z
     */
    MCVAPI void onPopPressurePlate(class Scripting::StrongTypedObjectHandle<
                                   struct ScriptModuleMinecraft::ScriptPressurePlatePopAfterEvent>&);
    /**
     * @symbol
     * ?onProjectileHit\@IScriptAfterEvents\@ScriptModuleMinecraft\@\@UEAAXAEAV?$StrongTypedObjectHandle\@UScriptProjectileHitAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Z
     */
    MCVAPI void onProjectileHit(class Scripting::StrongTypedObjectHandle<
                                struct ScriptModuleMinecraft::ScriptProjectileHitAfterEvent>&);
    /**
     * @symbol
     * ?onPushButton\@IScriptAfterEvents\@ScriptModuleMinecraft\@\@UEAAXAEAV?$StrongTypedObjectHandle\@UScriptButtonPushAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Z
     */
    MCVAPI void
    onPushButton(class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptButtonPushAfterEvent>&);
    /**
     * @symbol
     * ?onPushPressurePlate\@IScriptAfterEvents\@ScriptModuleMinecraft\@\@UEAAXAEAV?$StrongTypedObjectHandle\@UScriptPressurePlatePushAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Z
     */
    MCVAPI void onPushPressurePlate(class Scripting::StrongTypedObjectHandle<
                                    struct ScriptModuleMinecraft::ScriptPressurePlatePushAfterEvent>&);
    /**
     * @symbol
     * ?onServerMessage\@IScriptAfterEvents\@ScriptModuleMinecraft\@\@UEAAXAEAV?$StrongTypedObjectHandle\@UScriptServerMessageAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Z
     */
    MCVAPI void onServerMessage(class Scripting::StrongTypedObjectHandle<
                                struct ScriptModuleMinecraft::ScriptServerMessageAfterEvent>&);
    /**
     * @symbol
     * ?onTripTripWire\@IScriptAfterEvents\@ScriptModuleMinecraft\@\@UEAAXAEAV?$StrongTypedObjectHandle\@UScriptTripWireTripAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Z
     */
    MCVAPI void onTripTripWire(class Scripting::StrongTypedObjectHandle<
                               struct ScriptModuleMinecraft::ScriptTripWireTripAfterEvent>&);
    /**
     * @symbol
     * ?onWeatherChanged\@IScriptAfterEvents\@ScriptModuleMinecraft\@\@UEAAXAEAV?$StrongTypedObjectHandle\@UScriptWeatherChangedAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Z
     */
    MCVAPI void onWeatherChanged(class Scripting::StrongTypedObjectHandle<
                                 struct ScriptModuleMinecraft::ScriptWeatherChangedAfterEvent>&);
    /**
     * @symbol
     * ?onWorldInitialize\@IScriptAfterEvents\@ScriptModuleMinecraft\@\@UEAAXAEAV?$StrongTypedObjectHandle\@UScriptWorldInitializeAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Z
     */
    MCVAPI void onWorldInitialize(class Scripting::StrongTypedObjectHandle<
                                  struct ScriptModuleMinecraft::ScriptWorldInitializeAfterEvent>&);
#endif
    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
