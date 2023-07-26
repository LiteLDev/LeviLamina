#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/MoveToPOIGoal.h"

class MingleGoal : public ::MoveToPOIGoal {

public:
    // prevent constructor by default
    MingleGoal& operator=(MingleGoal const&) = delete;
    MingleGoal(MingleGoal const&)            = delete;
    MingleGoal()                             = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?canUse\@MingleGoal\@\@UEAA_NXZ
     */
    virtual bool canUse(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@MingleGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse(); // NOLINT
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3(); // NOLINT
    /**
     * @vftbl 4
     * @symbol ?start\@MingleGoal\@\@UEAAXXZ
     */
    virtual void start(); // NOLINT
    /**
     * @vftbl 5
     * @symbol ?stop\@MingleGoal\@\@UEAAXXZ
     */
    virtual void stop(); // NOLINT
    /**
     * @vftbl 6
     * @symbol ?tick\@MingleGoal\@\@UEAAXXZ
     */
    virtual void tick(); // NOLINT
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@MingleGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const; // NOLINT
    /**
     * @vftbl 8
     * @symbol __unk_vfn_8
     */
    virtual void __unk_vfn_8(); // NOLINT
    /**
     * @vftbl 9
     * @symbol __unk_vfn_9
     */
    virtual void __unk_vfn_9(); // NOLINT
    /**
     * @symbol ??0MingleGoal\@\@QEAA\@AEAVMob\@\@MMMUActorDefinitionIdentifier\@\@M\@Z
     */
    MCAPI MingleGoal(class Mob&, float, float, float, struct ActorDefinitionIdentifier, float); // NOLINT

    // private:
    /**
     * @symbol ?_findNewPartner\@MingleGoal\@\@AEAAXUActorUniqueID\@\@\@Z
     */
    MCAPI void _findNewPartner(struct ActorUniqueID); // NOLINT
    /**
     * @symbol ?_getMingleComponent\@MingleGoal\@\@AEBAAEAVMingleComponent\@\@XZ
     */
    MCAPI class MingleComponent& _getMingleComponent() const; // NOLINT
    /**
     * @symbol ?_isWithinInteractRange\@MingleGoal\@\@AEBA_NAEAVActor\@\@\@Z
     */
    MCAPI bool _isWithinInteractRange(class Actor&) const; // NOLINT
    /**
     * @symbol ?_tryGetMingleComponent\@MingleGoal\@\@CAPEAVMingleComponent\@\@AEAVActor\@\@\@Z
     */
    MCAPI static class MingleComponent* _tryGetMingleComponent(class Actor&); // NOLINT

private:
    /**
     * @symbol ?FIND_PARTNER_INTERVAL_TICKS\@MingleGoal\@\@0HB
     */
    MCAPI static int const FIND_PARTNER_INTERVAL_TICKS; // NOLINT
    /**
     * @symbol ?SPEAK_INTERVAL_TICKS_MAX\@MingleGoal\@\@0HB
     */
    MCAPI static int const SPEAK_INTERVAL_TICKS_MAX; // NOLINT
    /**
     * @symbol ?SPEAK_INTERVAL_TICKS_MIN\@MingleGoal\@\@0HB
     */
    MCAPI static int const SPEAK_INTERVAL_TICKS_MIN; // NOLINT
};
