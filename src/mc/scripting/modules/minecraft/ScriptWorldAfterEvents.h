#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class Level;
namespace Json { class Value; }
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
namespace Scripting { class ModuleBindingBuilder; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ModuleDescriptor; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptWorldAfterEvents {
public:
    // ScriptWorldAfterEvents inner types declare
    // clang-format off
    class ScriptWorldAfterEventsDeferredEventListener;
    struct SignalHandle;
    // clang-format on

    // ScriptWorldAfterEvents inner types define
    class ScriptWorldAfterEventsDeferredEventListener {

    public:
        // prevent constructor by default
        ScriptWorldAfterEventsDeferredEventListener&
        operator=(ScriptWorldAfterEventsDeferredEventListener const&)                                   = delete;
        ScriptWorldAfterEventsDeferredEventListener(ScriptWorldAfterEventsDeferredEventListener const&) = delete;
        ScriptWorldAfterEventsDeferredEventListener()                                                   = delete;

    public:
        /**
         * @vftbl 0
         * @symbol __unk_vfn_0
         */
        virtual void __unk_vfn_0(); // NOLINT
        /**
         * @vftbl 1
         * @symbol __unk_vfn_1
         */
        virtual void __unk_vfn_1(); // NOLINT
        /**
         * @vftbl 2
         * @symbol __unk_vfn_2
         */
        virtual void __unk_vfn_2(); // NOLINT
        /**
         * @vftbl 3
         * @symbol
         * ?onFlushWorldAfterEvents\@ScriptWorldAfterEventsDeferredEventListener\@ScriptWorldAfterEvents\@ScriptModuleMinecraft\@\@UEAA_NXZ
         */
        virtual bool onFlushWorldAfterEvents(); // NOLINT
        /**
         * @vftbl 4
         * @symbol __unk_vfn_4
         */
        virtual void __unk_vfn_4(); // NOLINT
    };

    struct SignalHandle {

    public:
        // prevent constructor by default
        SignalHandle& operator=(SignalHandle const&) = delete;
        SignalHandle(SignalHandle const&)            = delete;
        SignalHandle()                               = delete;

    public:
        /**
         * @symbol ??1SignalHandle\@ScriptWorldAfterEvents\@ScriptModuleMinecraft\@\@QEAA\@XZ
         */
        MCAPI ~SignalHandle(); // NOLINT
    };

public:
    // prevent constructor by default
    ScriptWorldAfterEvents& operator=(ScriptWorldAfterEvents const&) = delete;
    ScriptWorldAfterEvents(ScriptWorldAfterEvents const&)            = delete;
    ScriptWorldAfterEvents()                                         = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?getLevel\@ScriptWorldAfterEvents\@ScriptModuleMinecraft\@\@UEBAAEAVLevel\@\@XZ
     */
    virtual class Level& getLevel() const; // NOLINT
    /**
     * @vftbl 2
     * @symbol
     * ?onWeatherChanged\@ScriptWorldAfterEvents\@ScriptModuleMinecraft\@\@UEAAXAEAV?$StrongTypedObjectHandle\@UScriptWeatherChangedAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Z
     */
    virtual void onWeatherChanged(class Scripting::StrongTypedObjectHandle<
                                  struct ScriptModuleMinecraft::ScriptWeatherChangedAfterEvent>&); // NOLINT
    /**
     * @vftbl 3
     * @symbol
     * ?onWorldInitialize\@ScriptWorldAfterEvents\@ScriptModuleMinecraft\@\@UEAAXAEAV?$StrongTypedObjectHandle\@UScriptWorldInitializeAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Z
     */
    virtual void onWorldInitialize(class Scripting::StrongTypedObjectHandle<
                                   struct ScriptModuleMinecraft::ScriptWorldInitializeAfterEvent>&); // NOLINT
    /**
     * @vftbl 4
     * @symbol
     * ?onPlayerJoin\@ScriptWorldAfterEvents\@ScriptModuleMinecraft\@\@UEAAXAEAV?$StrongTypedObjectHandle\@UScriptPlayerJoinAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Z
     */
    virtual void onPlayerJoin(class Scripting::StrongTypedObjectHandle<
                              struct ScriptModuleMinecraft::ScriptPlayerJoinAfterEvent>&); // NOLINT
    /**
     * @vftbl 5
     * @symbol
     * ?onPlayerLeave\@ScriptWorldAfterEvents\@ScriptModuleMinecraft\@\@UEAAXAEAV?$StrongTypedObjectHandle\@UScriptPlayerLeaveAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Z
     */
    virtual void onPlayerLeave(class Scripting::StrongTypedObjectHandle<
                               struct ScriptModuleMinecraft::ScriptPlayerLeaveAfterEvent>&); // NOLINT
    /**
     * @vftbl 6
     * @symbol
     * ?onActorAddEffect\@ScriptWorldAfterEvents\@ScriptModuleMinecraft\@\@UEAAXAEAV?$StrongTypedObjectHandle\@UScriptActorAddEffectAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Z
     */
    virtual void onActorAddEffect(class Scripting::StrongTypedObjectHandle<
                                  struct ScriptModuleMinecraft::ScriptActorAddEffectAfterEvent>&); // NOLINT
    /**
     * @vftbl 7
     * @symbol
     * ?onChat\@ScriptWorldAfterEvents\@ScriptModuleMinecraft\@\@UEAAXAEAV?$StrongTypedObjectHandle\@UScriptChatSendAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Z
     */
    virtual void
    onChat(class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptChatSendAfterEvent>&); // NOLINT
    /**
     * @vftbl 8
     * @symbol
     * ?onActorSpawn\@ScriptWorldAfterEvents\@ScriptModuleMinecraft\@\@UEAAXAEAV?$StrongTypedObjectHandle\@UScriptActorSpawnAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Z
     */
    virtual void onActorSpawn(class Scripting::StrongTypedObjectHandle<
                              struct ScriptModuleMinecraft::ScriptActorSpawnAfterEvent>&); // NOLINT
    /**
     * @vftbl 9
     * @symbol
     * ?onActorRemoved\@ScriptWorldAfterEvents\@ScriptModuleMinecraft\@\@UEAAXAEBV?$StrongTypedObjectHandle\@VScriptActor\@ScriptModuleMinecraft\@\@\@Scripting\@\@AEAV?$StrongTypedObjectHandle\@UScriptActorRemovedAfterEvent\@ScriptModuleMinecraft\@\@\@4\@\@Z
     */
    virtual void
    onActorRemoved(class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptActor> const&, class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptActorRemovedAfterEvent>&); // NOLINT
    /**
     * @vftbl 10
     * @symbol
     * ?onActorHitEntity\@ScriptWorldAfterEvents\@ScriptModuleMinecraft\@\@UEAAXAEAV?$StrongTypedObjectHandle\@UScriptActorHitEntityAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Z
     */
    virtual void onActorHitEntity(class Scripting::StrongTypedObjectHandle<
                                  struct ScriptModuleMinecraft::ScriptActorHitEntityAfterEvent>&); // NOLINT
    /**
     * @vftbl 11
     * @symbol
     * ?onActorHitBlock\@ScriptWorldAfterEvents\@ScriptModuleMinecraft\@\@UEAAXAEAV?$StrongTypedObjectHandle\@UScriptActorHitBlockAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Z
     */
    virtual void onActorHitBlock(class Scripting::StrongTypedObjectHandle<
                                 struct ScriptModuleMinecraft::ScriptActorHitBlockAfterEvent>&); // NOLINT
    /**
     * @vftbl 12
     * @symbol
     * ?onServerMessage\@ScriptWorldAfterEvents\@ScriptModuleMinecraft\@\@UEAAXAEAV?$StrongTypedObjectHandle\@UScriptServerMessageAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Z
     */
    virtual void onServerMessage(class Scripting::StrongTypedObjectHandle<
                                 struct ScriptModuleMinecraft::ScriptServerMessageAfterEvent>&); // NOLINT
    /**
     * @vftbl 13
     * @symbol
     * ?onDataDrivenActorEventSend\@ScriptWorldAfterEvents\@ScriptModuleMinecraft\@\@UEAAXAEAV?$StrongTypedObjectHandle\@UScriptDataDrivenActorTriggerAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Z
     */
    virtual void
    onDataDrivenActorEventSend(class Scripting::StrongTypedObjectHandle<
                               struct ScriptModuleMinecraft::ScriptDataDrivenActorTriggerAfterEvent>&); // NOLINT
    /**
     * @vftbl 14
     * @symbol
     * ?onActorHurt\@ScriptWorldAfterEvents\@ScriptModuleMinecraft\@\@UEAAXAEAV?$StrongTypedObjectHandle\@UScriptActorHurtAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Z
     */
    virtual void onActorHurt(class Scripting::StrongTypedObjectHandle<
                             struct ScriptModuleMinecraft::ScriptActorHurtAfterEvent>&); // NOLINT
    /**
     * @vftbl 15
     * @symbol
     * ?onActorHealthChanged\@ScriptWorldAfterEvents\@ScriptModuleMinecraft\@\@UEAAXAEAV?$StrongTypedObjectHandle\@UScriptActorHealthChangedAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Z
     */
    virtual void onActorHealthChanged(class Scripting::StrongTypedObjectHandle<
                                      struct ScriptModuleMinecraft::ScriptActorHealthChangedAfterEvent>&); // NOLINT
    /**
     * @vftbl 16
     * @symbol
     * ?onActorDie\@ScriptWorldAfterEvents\@ScriptModuleMinecraft\@\@UEAAXAEAV?$StrongTypedObjectHandle\@UScriptActorDieAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Z
     */
    virtual void onActorDie(class Scripting::StrongTypedObjectHandle<
                            struct ScriptModuleMinecraft::ScriptActorDieAfterEvent>&); // NOLINT
    /**
     * @vftbl 17
     * @symbol
     * ?onPlayerSpawn\@ScriptWorldAfterEvents\@ScriptModuleMinecraft\@\@UEAAXAEAV?$StrongTypedObjectHandle\@UScriptPlayerSpawnAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Z
     */
    virtual void onPlayerSpawn(class Scripting::StrongTypedObjectHandle<
                               struct ScriptModuleMinecraft::ScriptPlayerSpawnAfterEvent>&); // NOLINT
    /**
     * @vftbl 18
     * @symbol
     * ?onActivatePiston\@ScriptWorldAfterEvents\@ScriptModuleMinecraft\@\@UEAAXAEAV?$StrongTypedObjectHandle\@UScriptPistonActionAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Z
     */
    virtual void onActivatePiston(class Scripting::StrongTypedObjectHandle<
                                  struct ScriptModuleMinecraft::ScriptPistonActionAfterEvent>&); // NOLINT
    /**
     * @vftbl 19
     * @symbol
     * ?onActivateLever\@ScriptWorldAfterEvents\@ScriptModuleMinecraft\@\@UEAAXAEAV?$StrongTypedObjectHandle\@UScriptLeverActionAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Z
     */
    virtual void onActivateLever(class Scripting::StrongTypedObjectHandle<
                                 struct ScriptModuleMinecraft::ScriptLeverActionAfterEvent>&); // NOLINT
    /**
     * @vftbl 20
     * @symbol
     * ?onPushButton\@ScriptWorldAfterEvents\@ScriptModuleMinecraft\@\@UEAAXAEAV?$StrongTypedObjectHandle\@UScriptButtonPushAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Z
     */
    virtual void onPushButton(class Scripting::StrongTypedObjectHandle<
                              struct ScriptModuleMinecraft::ScriptButtonPushAfterEvent>&); // NOLINT
    /**
     * @vftbl 21
     * @symbol
     * ?onExplosion\@ScriptWorldAfterEvents\@ScriptModuleMinecraft\@\@UEAAXAEAV?$StrongTypedObjectHandle\@UScriptExplosionStartedAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Z
     */
    virtual void onExplosion(class Scripting::StrongTypedObjectHandle<
                             struct ScriptModuleMinecraft::ScriptExplosionStartedAfterEvent>&); // NOLINT
    /**
     * @vftbl 22
     * @symbol
     * ?onExplodeBlock\@ScriptWorldAfterEvents\@ScriptModuleMinecraft\@\@UEAAXAEAV?$StrongTypedObjectHandle\@UScriptBlockExplodedAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Z
     */
    virtual void onExplodeBlock(class Scripting::StrongTypedObjectHandle<
                                struct ScriptModuleMinecraft::ScriptBlockExplodedAfterEvent>&); // NOLINT
    /**
     * @vftbl 23
     * @symbol
     * ?onBlockPlace\@ScriptWorldAfterEvents\@ScriptModuleMinecraft\@\@UEAAXAEAV?$StrongTypedObjectHandle\@UScriptBlockPlaceAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Z
     */
    virtual void onBlockPlace(class Scripting::StrongTypedObjectHandle<
                              struct ScriptModuleMinecraft::ScriptBlockPlaceAfterEvent>&); // NOLINT
    /**
     * @vftbl 24
     * @symbol
     * ?onBlockBreak\@ScriptWorldAfterEvents\@ScriptModuleMinecraft\@\@UEAAXAEAV?$StrongTypedObjectHandle\@UScriptBlockBreakAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Z
     */
    virtual void onBlockBreak(class Scripting::StrongTypedObjectHandle<
                              struct ScriptModuleMinecraft::ScriptBlockBreakAfterEvent>&); // NOLINT
    /**
     * @vftbl 25
     * @symbol
     * ?onPushPressurePlate\@ScriptWorldAfterEvents\@ScriptModuleMinecraft\@\@UEAAXAEAV?$StrongTypedObjectHandle\@UScriptPressurePlatePushAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Z
     */
    virtual void onPushPressurePlate(class Scripting::StrongTypedObjectHandle<
                                     struct ScriptModuleMinecraft::ScriptPressurePlatePushAfterEvent>&); // NOLINT
    /**
     * @vftbl 26
     * @symbol
     * ?onPopPressurePlate\@ScriptWorldAfterEvents\@ScriptModuleMinecraft\@\@UEAAXAEAV?$StrongTypedObjectHandle\@UScriptPressurePlatePopAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Z
     */
    virtual void onPopPressurePlate(class Scripting::StrongTypedObjectHandle<
                                    struct ScriptModuleMinecraft::ScriptPressurePlatePopAfterEvent>&); // NOLINT
    /**
     * @vftbl 27
     * @symbol
     * ?onHitTargetBlock\@ScriptWorldAfterEvents\@ScriptModuleMinecraft\@\@UEAAXAEAV?$StrongTypedObjectHandle\@UScriptTargetBlockHitAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Z
     */
    virtual void onHitTargetBlock(class Scripting::StrongTypedObjectHandle<
                                  struct ScriptModuleMinecraft::ScriptTargetBlockHitAfterEvent>&); // NOLINT
    /**
     * @vftbl 28
     * @symbol
     * ?onTripTripWire\@ScriptWorldAfterEvents\@ScriptModuleMinecraft\@\@UEAAXAEAV?$StrongTypedObjectHandle\@UScriptTripWireTripAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Z
     */
    virtual void onTripTripWire(class Scripting::StrongTypedObjectHandle<
                                struct ScriptModuleMinecraft::ScriptTripWireTripAfterEvent>&); // NOLINT
    /**
     * @vftbl 29
     * @symbol
     * ?onItemDefinitionEventTriggered\@ScriptWorldAfterEvents\@ScriptModuleMinecraft\@\@UEAAXAEAV?$StrongTypedObjectHandle\@UScriptItemDefinitionAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Z
     */
    virtual void
    onItemDefinitionEventTriggered(class Scripting::StrongTypedObjectHandle<
                                   struct ScriptModuleMinecraft::ScriptItemDefinitionAfterEvent>&); // NOLINT
    /**
     * @vftbl 30
     * @symbol
     * ?onItemUse\@ScriptWorldAfterEvents\@ScriptModuleMinecraft\@\@UEAAXAEAV?$StrongTypedObjectHandle\@UScriptItemUseAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Z
     */
    virtual void onItemUse(class Scripting::StrongTypedObjectHandle<
                           struct ScriptModuleMinecraft::ScriptItemUseAfterEvent>&); // NOLINT
    /**
     * @vftbl 31
     * @symbol
     * ?onItemUseOn\@ScriptWorldAfterEvents\@ScriptModuleMinecraft\@\@UEAAXAEAV?$StrongTypedObjectHandle\@UScriptItemUseOnAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Z
     */
    virtual void onItemUseOn(class Scripting::StrongTypedObjectHandle<
                             struct ScriptModuleMinecraft::ScriptItemUseOnAfterEvent>&); // NOLINT
    /**
     * @vftbl 32
     * @symbol
     * ?onItemStartUseOn\@ScriptWorldAfterEvents\@ScriptModuleMinecraft\@\@UEAAXAEAV?$StrongTypedObjectHandle\@UScriptItemStartUseOnAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Z
     */
    virtual void onItemStartUseOn(class Scripting::StrongTypedObjectHandle<
                                  struct ScriptModuleMinecraft::ScriptItemStartUseOnAfterEvent>&); // NOLINT
    /**
     * @vftbl 33
     * @symbol
     * ?onItemStopUseOn\@ScriptWorldAfterEvents\@ScriptModuleMinecraft\@\@UEAAXAEAV?$StrongTypedObjectHandle\@UScriptItemStopUseOnAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Z
     */
    virtual void onItemStopUseOn(class Scripting::StrongTypedObjectHandle<
                                 struct ScriptModuleMinecraft::ScriptItemStopUseOnAfterEvent>&); // NOLINT
    /**
     * @vftbl 34
     * @symbol
     * ?onItemStartUse\@ScriptWorldAfterEvents\@ScriptModuleMinecraft\@\@UEAAXAEAV?$StrongTypedObjectHandle\@UScriptItemStartUseAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Z
     */
    virtual void onItemStartUse(class Scripting::StrongTypedObjectHandle<
                                struct ScriptModuleMinecraft::ScriptItemStartUseAfterEvent>&); // NOLINT
    /**
     * @vftbl 35
     * @symbol
     * ?onItemCompleteUse\@ScriptWorldAfterEvents\@ScriptModuleMinecraft\@\@UEAAXAEAV?$StrongTypedObjectHandle\@UScriptItemCompleteUseAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Z
     */
    virtual void onItemCompleteUse(class Scripting::StrongTypedObjectHandle<
                                   struct ScriptModuleMinecraft::ScriptItemCompleteUseAfterEvent>&); // NOLINT
    /**
     * @vftbl 36
     * @symbol
     * ?onItemReleaseUse\@ScriptWorldAfterEvents\@ScriptModuleMinecraft\@\@UEAAXAEAV?$StrongTypedObjectHandle\@UScriptItemReleaseUseAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Z
     */
    virtual void onItemReleaseUse(class Scripting::StrongTypedObjectHandle<
                                  struct ScriptModuleMinecraft::ScriptItemReleaseUseAfterEvent>&); // NOLINT
    /**
     * @vftbl 37
     * @symbol
     * ?onItemStopUse\@ScriptWorldAfterEvents\@ScriptModuleMinecraft\@\@UEAAXAEAV?$StrongTypedObjectHandle\@UScriptItemStopUseAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Z
     */
    virtual void onItemStopUse(class Scripting::StrongTypedObjectHandle<
                               struct ScriptModuleMinecraft::ScriptItemStopUseAfterEvent>&); // NOLINT
    /**
     * @vftbl 38
     * @symbol
     * ?onProjectileHit\@ScriptWorldAfterEvents\@ScriptModuleMinecraft\@\@UEAAXAEAV?$StrongTypedObjectHandle\@UScriptProjectileHitAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Z
     */
    virtual void onProjectileHit(class Scripting::StrongTypedObjectHandle<
                                 struct ScriptModuleMinecraft::ScriptProjectileHitAfterEvent>&); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTMODULEMINECRAFT_SCRIPTWORLDAFTEREVENTS
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ScriptWorldAfterEvents(); // NOLINT
#endif
    /**
     * @symbol
     * ??0ScriptWorldAfterEvents\@ScriptModuleMinecraft\@\@QEAA\@AEBVWeakLifetimeScope\@Scripting\@\@V?$not_null\@PEAVLevel\@\@\@gsl\@\@\@Z
     */
    MCAPI
    ScriptWorldAfterEvents(class Scripting::WeakLifetimeScope const&, class gsl::not_null<class Level*>); // NOLINT
    /**
     * @symbol ??0ScriptWorldAfterEvents\@ScriptModuleMinecraft\@\@QEAA\@$$QEAV01\@\@Z
     */
    MCAPI ScriptWorldAfterEvents(class ScriptModuleMinecraft::ScriptWorldAfterEvents&&); // NOLINT
    /**
     * @symbol ??4ScriptWorldAfterEvents\@ScriptModuleMinecraft\@\@QEAAAEAV01\@$$QEAV01\@\@Z
     */
    MCAPI class ScriptModuleMinecraft::ScriptWorldAfterEvents&
    operator=(class ScriptModuleMinecraft::ScriptWorldAfterEvents&&); // NOLINT
    /**
     * @symbol ?registerListeners\@ScriptWorldAfterEvents\@ScriptModuleMinecraft\@\@QEAAX_N\@Z
     */
    MCAPI void registerListeners(bool); // NOLINT
    /**
     * @symbol ?bind\@ScriptWorldAfterEvents\@ScriptModuleMinecraft\@\@SAXAEAVModuleBindingBuilder\@Scripting\@\@\@Z
     */
    MCAPI static void bind(class Scripting::ModuleBindingBuilder&); // NOLINT
    /**
     * @symbol
     * ?generateOrderDocumentationForVersion\@ScriptWorldAfterEvents\@ScriptModuleMinecraft\@\@SAXAEBUModuleDescriptor\@Scripting\@\@AEAVValue\@Json\@\@\@Z
     */
    MCAPI static void
    generateOrderDocumentationForVersion(struct Scripting::ModuleDescriptor const&, class Json::Value&); // NOLINT
    /**
     * @symbol ?bindingName\@ScriptWorldAfterEvents\@ScriptModuleMinecraft\@\@2PEBDEB
     */
    MCAPI static char const* bindingName; // NOLINT

    // private:
    /**
     * @symbol
     * ?_bindSignals\@ScriptWorldAfterEvents\@ScriptModuleMinecraft\@\@CAXAEAV?$ClassBindingBuilder\@VScriptWorldAfterEvents\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Z
     */
    MCAPI static void
    _bindSignals(class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptWorldAfterEvents>&); // NOLINT
    /**
     * @symbol
     * ?_createSignals\@ScriptWorldAfterEvents\@ScriptModuleMinecraft\@\@CA?AV?$vector\@USignalHandle\@ScriptWorldAfterEvents\@ScriptModuleMinecraft\@\@V?$allocator\@USignalHandle\@ScriptWorldAfterEvents\@ScriptModuleMinecraft\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI static std::vector<struct ScriptModuleMinecraft::ScriptWorldAfterEvents::SignalHandle>
    _createSignals(); // NOLINT

private:
};

}; // namespace ScriptModuleMinecraft
