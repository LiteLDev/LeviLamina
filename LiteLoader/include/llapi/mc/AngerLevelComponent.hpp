/**
 * @file  AngerLevelComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @hash   1004283905
     * @symbol  ??0AngerLevelComponent\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI AngerLevelComponent(class AngerLevelComponent const &);
    /**
     * @hash   -1092551415
     * @symbol  ??0AngerLevelComponent\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI AngerLevelComponent(class AngerLevelComponent &&);
    /**
     * @hash   186114440
     * @symbol  ?addAdditionalSaveData\@AngerLevelComponent\@\@QEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @hash   -1864457135
     * @symbol  ?belowAngryThreshold\@AngerLevelComponent\@\@QEBA_NUActorUniqueID\@\@\@Z
     */
    MCAPI bool belowAngryThreshold(struct ActorUniqueID) const;
    /**
     * @hash   -1496903727
     * @symbol  ?canBeNuisance\@AngerLevelComponent\@\@QEBA_NPEAVActor\@\@0\@Z
     */
    MCAPI bool canBeNuisance(class Actor *, class Actor *) const;
    /**
     * @hash   -1793697753
     * @symbol  ?getAngerForAnimations\@AngerLevelComponent\@\@QEBAHAEAVActor\@\@\@Z
     */
    MCAPI int getAngerForAnimations(class Actor &) const;
    /**
     * @hash   -1321338942
     * @symbol  ?getTopActiveNuisance\@AngerLevelComponent\@\@QEBA?AV?$optional\@U?$pair\@PEAVActor\@\@H\@std\@\@\@std\@\@PEAVActor\@\@AEBVILevel\@\@\@Z
     */
    MCAPI class std::optional<struct std::pair<class Actor *, int>> getTopActiveNuisance(class Actor *, class ILevel const &) const;
    /**
     * @hash   1977853358
     * @symbol  ?isAngry\@AngerLevelComponent\@\@QEBA_NXZ
     */
    MCAPI bool isAngry() const;
    /**
     * @hash   -1493707372
     * @symbol  ??4AngerLevelComponent\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class AngerLevelComponent & operator=(class AngerLevelComponent &&);
    /**
     * @hash   -1176198368
     * @symbol  ?readAdditionalSaveData\@AngerLevelComponent\@\@QEAAXAEAVActor\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCAPI void readAdditionalSaveData(class Actor &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   2094222594
     * @symbol  ?tick\@AngerLevelComponent\@\@QEAAXPEAVActor\@\@AEBVILevel\@\@\@Z
     */
    MCAPI void tick(class Actor *, class ILevel const &);
    /**
     * @hash   -1784091673
     * @symbol  ?tryIncreaseAngerAt\@AngerLevelComponent\@\@QEAAXAEAVActor\@\@0H_N\@Z
     */
    MCAPI void tryIncreaseAngerAt(class Actor &, class Actor &, int, bool);
    /**
     * @hash   61489596
     * @symbol  ??1AngerLevelComponent\@\@QEAA\@XZ
     */
    MCAPI ~AngerLevelComponent();
    /**
     * @hash   1120152749
     * @symbol  ?DEFAULT_ANGER_DECREMENT_INTERVAL_SECONDS\@AngerLevelComponent\@\@2MB
     */
    MCAPI static float const DEFAULT_ANGER_DECREMENT_INTERVAL_SECONDS;
    /**
     * @hash   391085927
     * @symbol  ?DEFAULT_ANGRY_BOOST\@AngerLevelComponent\@\@2HB
     */
    MCAPI static int const DEFAULT_ANGRY_BOOST;
    /**
     * @hash   -81917841
     * @symbol  ?DEFAULT_ANGRY_THRESHOLD\@AngerLevelComponent\@\@2HB
     */
    MCAPI static int const DEFAULT_ANGRY_THRESHOLD;
    /**
     * @hash   1334440307
     * @symbol  ?DEFAULT_MAX_ANGER_LEVEL\@AngerLevelComponent\@\@2HB
     */
    MCAPI static int const DEFAULT_MAX_ANGER_LEVEL;
    /**
     * @hash   938999781
     * @symbol  ?DEFAULT_SHOULD_REMOVE_TARGET\@AngerLevelComponent\@\@2_NB
     */
    MCAPI static bool const DEFAULT_SHOULD_REMOVE_TARGET;

//private:
    /**
     * @hash   -424755512
     * @symbol  ?_createOrModifyAngerLevel\@AngerLevelComponent\@\@AEAAXAEBVActor\@\@AEBV?$function\@$$A6AHH\@Z\@std\@\@\@Z
     */
    MCAPI void _createOrModifyAngerLevel(class Actor const &, class std::function<int (int)> const &);
    /**
     * @hash   719271591
     * @symbol  ?_getListeningSoundEvent\@AngerLevelComponent\@\@AEBA?AV?$optional\@W4LevelSoundEvent\@\@\@std\@\@AEAVActor\@\@\@Z
     */
    MCAPI class std::optional<enum class LevelSoundEvent> _getListeningSoundEvent(class Actor &) const;

private:

};