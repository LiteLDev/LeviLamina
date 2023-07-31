#pragma once

#include "mc/_HeaderOutputPredefine.h"

class AdmireItemGoal {

public:
    // prevent constructor by default
    AdmireItemGoal& operator=(AdmireItemGoal const&) = delete;
    AdmireItemGoal(AdmireItemGoal const&)            = delete;
    AdmireItemGoal()                                 = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?canUse\@AdmireItemGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@AdmireItemGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl 4
     * @symbol ?start\@AdmireItemGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl 5
     * @symbol ?stop\@AdmireItemGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @vftbl 6
     * @symbol ?tick\@AdmireItemGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@AdmireItemGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const;
    /**
     * @symbol
     * ??0AdmireItemGoal\@\@QEAA\@AEAVMob\@\@W4LevelSoundEvent\@\@UFloatRange\@\@AEBVActorDefinitionTrigger\@\@3\@Z
     */
    MCAPI
    AdmireItemGoal(class Mob&, enum class LevelSoundEvent, struct FloatRange, class ActorDefinitionTrigger const&, class ActorDefinitionTrigger const&);
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol ?_tryPlaceItemInInventory\@AdmireItemGoal\@\@AEAAXAEAVContainerComponent\@\@AEBVShareableComponent\@\@\@Z
     */
    MCAPI void _tryPlaceItemInInventory(class ContainerComponent&, class ShareableComponent const&);
    // NOLINTEND
};
