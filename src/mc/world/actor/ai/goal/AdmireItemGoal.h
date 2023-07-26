#pragma once

#include "mc/_HeaderOutputPredefine.h"

class AdmireItemGoal {

public:
    // prevent constructor by default
    AdmireItemGoal& operator=(AdmireItemGoal const&) = delete;
    AdmireItemGoal(AdmireItemGoal const&)            = delete;
    AdmireItemGoal()                                 = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?canUse\@AdmireItemGoal\@\@UEAA_NXZ
     */
    virtual bool canUse(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@AdmireItemGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse(); // NOLINT
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3(); // NOLINT
    /**
     * @vftbl 4
     * @symbol ?start\@AdmireItemGoal\@\@UEAAXXZ
     */
    virtual void start(); // NOLINT
    /**
     * @vftbl 5
     * @symbol ?stop\@AdmireItemGoal\@\@UEAAXXZ
     */
    virtual void stop(); // NOLINT
    /**
     * @vftbl 6
     * @symbol ?tick\@AdmireItemGoal\@\@UEAAXXZ
     */
    virtual void tick(); // NOLINT
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@AdmireItemGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const; // NOLINT
    /**
     * @symbol
     * ??0AdmireItemGoal\@\@QEAA\@AEAVMob\@\@W4LevelSoundEvent\@\@UFloatRange\@\@AEBVActorDefinitionTrigger\@\@3\@Z
     */
    MCAPI
    AdmireItemGoal(class Mob&, enum class LevelSoundEvent, struct FloatRange, class ActorDefinitionTrigger const&, class ActorDefinitionTrigger const&); // NOLINT

    // private:
    /**
     * @symbol ?_tryPlaceItemInInventory\@AdmireItemGoal\@\@AEAAXAEAVContainerComponent\@\@AEBVShareableComponent\@\@\@Z
     */
    MCAPI void _tryPlaceItemInInventory(class ContainerComponent&, class ShareableComponent const&); // NOLINT

private:
};
