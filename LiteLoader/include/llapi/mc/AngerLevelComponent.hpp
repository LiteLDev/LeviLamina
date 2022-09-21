/**
 * @file  MC/AngerLevelComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class AngerLevelComponent.
 *
 */
class AngerLevelComponent {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ANGERLEVELCOMPONENT
public:
    class AngerLevelComponent& operator=(class AngerLevelComponent const &) = delete;
    AngerLevelComponent() = delete;
#endif

public:
    /**
     * @hash   846510769
     * @symbol ??0AngerLevelComponent@@QEAA@AEBV0@@Z
     */
    MCAPI AngerLevelComponent(class AngerLevelComponent const &);
    /**
     * @hash   -1250324551
     * @symbol ??0AngerLevelComponent@@QEAA@$$QEAV0@@Z
     */
    MCAPI AngerLevelComponent(class AngerLevelComponent &&);
    /**
     * @hash   1139518696
     * @symbol ?addAdditionalSaveData@AngerLevelComponent@@QEBAXAEAVCompoundTag@@@Z
     */
    MCAPI void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @hash   -910991375
     * @symbol ?belowAngryThreshold@AngerLevelComponent@@QEBA_NUActorUniqueID@@@Z
     */
    MCAPI bool belowAngryThreshold(struct ActorUniqueID) const;
    /**
     * @hash   -543468719
     * @symbol ?canBeNuisance@AngerLevelComponent@@QEBA_NPEAVActor@@0@Z
     */
    MCAPI bool canBeNuisance(class Actor *, class Actor *) const;
    /**
     * @hash   -840293497
     * @symbol ?getAngerForAnimations@AngerLevelComponent@@QEBAHAEAVActor@@@Z
     */
    MCAPI int getAngerForAnimations(class Actor &) const;
    /**
     * @hash   -367934686
     * @symbol ?getTopActiveNuisance@AngerLevelComponent@@QEBA?AV?$optional@U?$pair@PEAVActor@@H@std@@@std@@PEAVActor@@AEBVILevel@@@Z
     */
    MCAPI class std::optional<struct std::pair<class Actor *, int>> getTopActiveNuisance(class Actor *, class ILevel const &) const;
    /**
     * @hash   -1363694306
     * @symbol ?isAngry@AngerLevelComponent@@QEBA_NXZ
     */
    MCAPI bool isAngry() const;
    /**
     * @hash   -1651511260
     * @symbol ??4AngerLevelComponent@@QEAAAEAV0@$$QEAV0@@Z
     */
    MCAPI class AngerLevelComponent & operator=(class AngerLevelComponent &&);
    /**
     * @hash   -222794112
     * @symbol ?readAdditionalSaveData@AngerLevelComponent@@QEAAXAEAVActor@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     */
    MCAPI void readAdditionalSaveData(class Actor &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   -1247309694
     * @symbol ?tick@AngerLevelComponent@@QEAAXPEAVActor@@AEBVILevel@@@Z
     */
    MCAPI void tick(class Actor *, class ILevel const &);
    /**
     * @hash   -830672041
     * @symbol ?tryIncreaseAngerAt@AngerLevelComponent@@QEAAXAEAVActor@@0H_N@Z
     */
    MCAPI void tryIncreaseAngerAt(class Actor &, class Actor &, int, bool);
    /**
     * @hash   -96298916
     * @symbol ??1AngerLevelComponent@@QEAA@XZ
     */
    MCAPI ~AngerLevelComponent();
    /**
     * @hash   154470757
     * @symbol ?DEFAULT_ANGER_DECREMENT_INTERVAL_SECONDS@AngerLevelComponent@@2MB
     */
    MCAPI static float const DEFAULT_ANGER_DECREMENT_INTERVAL_SECONDS;
    /**
     * @hash   -574596065
     * @symbol ?DEFAULT_ANGRY_BOOST@AngerLevelComponent@@2HB
     */
    MCAPI static int const DEFAULT_ANGRY_BOOST;
    /**
     * @hash   -1047599833
     * @symbol ?DEFAULT_ANGRY_THRESHOLD@AngerLevelComponent@@2HB
     */
    MCAPI static int const DEFAULT_ANGRY_THRESHOLD;
    /**
     * @hash   368758315
     * @symbol ?DEFAULT_MAX_ANGER_LEVEL@AngerLevelComponent@@2HB
     */
    MCAPI static int const DEFAULT_MAX_ANGER_LEVEL;
    /**
     * @hash   -26682211
     * @symbol ?DEFAULT_SHOULD_REMOVE_TARGET@AngerLevelComponent@@2_NB
     */
    MCAPI static bool const DEFAULT_SHOULD_REMOVE_TARGET;

//private:
    /**
     * @hash   528710248
     * @symbol ?_createOrModifyAngerLevel@AngerLevelComponent@@AEAAXAEBVActor@@AEBV?$function@$$A6AHH@Z@std@@@Z
     */
    MCAPI void _createOrModifyAngerLevel(class Actor const &, class std::function<int (int)> const &);
    /**
     * @hash   1672721975
     * @symbol ?_getListeningSoundEvent@AngerLevelComponent@@AEBA?AV?$optional@W4LevelSoundEvent@@@std@@AEAVActor@@@Z
     */
    MCAPI class std::optional<enum LevelSoundEvent> _getListeningSoundEvent(class Actor &) const;

private:

};