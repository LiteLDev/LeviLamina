#pragma once

#include "mc/_HeaderOutputPredefine.h"

class AngerLevelComponent {
public:
    // AngerLevelComponent inner types declare
    // clang-format off
    struct ConditionalSound;
    // clang-format on

    // AngerLevelComponent inner types define
    struct ConditionalSound {

    public:
        // prevent constructor by default
        ConditionalSound& operator=(ConditionalSound const&) = delete;
        ConditionalSound(ConditionalSound const&)            = delete;
        ConditionalSound()                                   = delete;

    public:
        /**
         * @symbol ??1ConditionalSound\@AngerLevelComponent\@\@QEAA\@XZ
         */
        MCAPI ~ConditionalSound(); // NOLINT
    };

public:
    // prevent constructor by default
    AngerLevelComponent& operator=(AngerLevelComponent const&) = delete;
    AngerLevelComponent()                                      = delete;

public:
    /**
     * @symbol ??0AngerLevelComponent\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI AngerLevelComponent(class AngerLevelComponent const&); // NOLINT
    /**
     * @symbol ??0AngerLevelComponent\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI AngerLevelComponent(class AngerLevelComponent&&); // NOLINT
    /**
     * @symbol ?addAdditionalSaveData\@AngerLevelComponent\@\@QEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void addAdditionalSaveData(class CompoundTag&) const; // NOLINT
    /**
     * @symbol ?belowAngryThreshold\@AngerLevelComponent\@\@QEBA_NUActorUniqueID\@\@\@Z
     */
    MCAPI bool belowAngryThreshold(struct ActorUniqueID) const; // NOLINT
    /**
     * @symbol ?canBeNuisance\@AngerLevelComponent\@\@QEBA_NPEAVActor\@\@0\@Z
     */
    MCAPI bool canBeNuisance(class Actor*, class Actor*) const; // NOLINT
    /**
     * @symbol ?getAngerForAnimations\@AngerLevelComponent\@\@QEBAHAEAVActor\@\@\@Z
     */
    MCAPI int getAngerForAnimations(class Actor&) const; // NOLINT
    /**
     * @symbol
     * ?getTopActiveNuisance\@AngerLevelComponent\@\@QEBA?AV?$optional\@U?$pair\@PEAVActor\@\@H\@std\@\@\@std\@\@PEAVActor\@\@AEBVILevel\@\@\@Z
     */
    MCAPI class std::optional<struct std::pair<class Actor*, int>>
    getTopActiveNuisance(class Actor*, class ILevel const&) const; // NOLINT
    /**
     * @symbol ?isAngry\@AngerLevelComponent\@\@QEBA_NXZ
     */
    MCAPI bool isAngry() const; // NOLINT
    /**
     * @symbol ??4AngerLevelComponent\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class AngerLevelComponent& operator=(class AngerLevelComponent&&); // NOLINT
    /**
     * @symbol
     * ?readAdditionalSaveData\@AngerLevelComponent\@\@QEAAXAEAVActor\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCAPI void readAdditionalSaveData(class Actor&, class CompoundTag const&, class DataLoadHelper&); // NOLINT
    /**
     * @symbol ?tick\@AngerLevelComponent\@\@QEAAXPEAVActor\@\@AEBVILevel\@\@\@Z
     */
    MCAPI void tick(class Actor*, class ILevel const&); // NOLINT
    /**
     * @symbol ?tryIncreaseAngerAt\@AngerLevelComponent\@\@QEAAXAEAVActor\@\@0H_N\@Z
     */
    MCAPI void tryIncreaseAngerAt(class Actor&, class Actor&, int, bool); // NOLINT
    /**
     * @symbol ??1AngerLevelComponent\@\@QEAA\@XZ
     */
    MCAPI ~AngerLevelComponent(); // NOLINT
    /**
     * @symbol ?DEFAULT_ANGER_DECREMENT_INTERVAL_SECONDS\@AngerLevelComponent\@\@2MB
     */
    MCAPI static float const DEFAULT_ANGER_DECREMENT_INTERVAL_SECONDS; // NOLINT
    /**
     * @symbol ?DEFAULT_ANGRY_BOOST\@AngerLevelComponent\@\@2HB
     */
    MCAPI static int const DEFAULT_ANGRY_BOOST; // NOLINT
    /**
     * @symbol ?DEFAULT_ANGRY_THRESHOLD\@AngerLevelComponent\@\@2HB
     */
    MCAPI static int const DEFAULT_ANGRY_THRESHOLD; // NOLINT
    /**
     * @symbol ?DEFAULT_MAX_ANGER_LEVEL\@AngerLevelComponent\@\@2HB
     */
    MCAPI static int const DEFAULT_MAX_ANGER_LEVEL; // NOLINT
    /**
     * @symbol ?DEFAULT_SHOULD_REMOVE_TARGET\@AngerLevelComponent\@\@2_NB
     */
    MCAPI static bool const DEFAULT_SHOULD_REMOVE_TARGET; // NOLINT

    // private:
    /**
     * @symbol
     * ?_createOrModifyAngerLevel\@AngerLevelComponent\@\@AEAAXAEBVActor\@\@AEBV?$function\@$$A6AHH\@Z\@std\@\@\@Z
     */
    MCAPI void _createOrModifyAngerLevel(class Actor const&, class std::function<int(int)> const&); // NOLINT
    /**
     * @symbol
     * ?_getListeningSoundEvent\@AngerLevelComponent\@\@AEBA?AV?$optional\@W4LevelSoundEvent\@\@\@std\@\@AEAVActor\@\@\@Z
     */
    MCAPI class std::optional<enum class LevelSoundEvent> _getListeningSoundEvent(class Actor&) const; // NOLINT

private:
};
