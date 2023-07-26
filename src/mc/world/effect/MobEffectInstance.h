#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class MobEffectInstance {

public:
    // prevent constructor by default
    MobEffectInstance() = delete;

public:
    /**
     * @symbol ??0MobEffectInstance\@\@QEAA\@IHHHHH_N00\@Z
     */
    MCAPI MobEffectInstance(unsigned int, int, int, int, int, int, bool, bool, bool); // NOLINT
    /**
     * @symbol ??0MobEffectInstance\@\@QEAA\@IHH_N00\@Z
     */
    MCAPI MobEffectInstance(unsigned int, int, int, bool, bool, bool); // NOLINT
    /**
     * @symbol ??0MobEffectInstance\@\@QEAA\@IH\@Z
     */
    MCAPI MobEffectInstance(unsigned int, int); // NOLINT
    /**
     * @symbol ??0MobEffectInstance\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI MobEffectInstance(class MobEffectInstance&&); // NOLINT
    /**
     * @symbol ??0MobEffectInstance\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI MobEffectInstance(class MobEffectInstance const&); // NOLINT
    /**
     * @symbol ??0MobEffectInstance\@\@QEAA\@IHH\@Z
     */
    MCAPI MobEffectInstance(unsigned int, int, int); // NOLINT
    /**
     * @symbol ??0MobEffectInstance\@\@QEAA\@I\@Z
     */
    MCAPI MobEffectInstance(unsigned int); // NOLINT
    /**
     * @symbol ?applyEffects\@MobEffectInstance\@\@QEAAXPEAVActor\@\@\@Z
     */
    MCAPI void applyEffects(class Actor*); // NOLINT
    /**
     * @symbol ?displaysOnScreenTextureAnimation\@MobEffectInstance\@\@QEBA_NXZ
     */
    MCAPI bool displaysOnScreenTextureAnimation() const; // NOLINT
    /**
     * @symbol ?getAmplifier\@MobEffectInstance\@\@QEBAHXZ
     */
    MCAPI int getAmplifier() const; // NOLINT
    /**
     * @symbol ?getComponentName\@MobEffectInstance\@\@QEBAAEBVHashedString\@\@XZ
     */
    MCAPI class HashedString const& getComponentName() const; // NOLINT
    /**
     * @symbol
     * ?getDescriptionId\@MobEffectInstance\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getDescriptionId() const; // NOLINT
    /**
     * @symbol ?getDifficulityDuration\@MobEffectInstance\@\@QEBAHW4Difficulty\@\@\@Z
     */
    MCAPI int getDifficulityDuration(enum class Difficulty) const; // NOLINT
    /**
     * @symbol
     * ?getDisplayName\@MobEffectInstance\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getDisplayName() const; // NOLINT
    /**
     * @symbol ?getDuration\@MobEffectInstance\@\@QEBAHXZ
     */
    MCAPI int getDuration() const; // NOLINT
    /**
     * @symbol ?getId\@MobEffectInstance\@\@QEBAIXZ
     */
    MCAPI unsigned int getId() const; // NOLINT
    /**
     * @symbol ?getLingerDuration\@MobEffectInstance\@\@QEBAHXZ
     */
    MCAPI int getLingerDuration() const; // NOLINT
    /**
     * @symbol ?getSplashDuration\@MobEffectInstance\@\@QEBAHXZ
     */
    MCAPI int getSplashDuration() const; // NOLINT
    /**
     * @symbol ?getSplashEffect\@MobEffectInstance\@\@QEBA?AV1\@XZ
     */
    MCAPI class MobEffectInstance getSplashEffect() const; // NOLINT
    /**
     * @symbol ?isAmbient\@MobEffectInstance\@\@QEBA_NXZ
     */
    MCAPI bool isAmbient() const; // NOLINT
    /**
     * @symbol ?isEffectVisible\@MobEffectInstance\@\@QEBA_NXZ
     */
    MCAPI bool isEffectVisible() const; // NOLINT
    /**
     * @symbol ??9MobEffectInstance\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator!=(class MobEffectInstance const&) const; // NOLINT
    /**
     * @symbol ??4MobEffectInstance\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class MobEffectInstance& operator=(class MobEffectInstance&&); // NOLINT
    /**
     * @symbol ??4MobEffectInstance\@\@QEAAAEAV0\@AEBV0\@\@Z
     */
    MCAPI class MobEffectInstance& operator=(class MobEffectInstance const&); // NOLINT
    /**
     * @symbol ??8MobEffectInstance\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator==(class MobEffectInstance const&) const; // NOLINT
    /**
     * @symbol ?removeEffects\@MobEffectInstance\@\@QEBAXPEAVActor\@\@\@Z
     */
    MCAPI void removeEffects(class Actor*) const; // NOLINT
    /**
     * @symbol
     * ?save\@MobEffectInstance\@\@QEBA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::unique_ptr<class CompoundTag> save() const; // NOLINT
    /**
     * @symbol ?setDifficulityDuration\@MobEffectInstance\@\@QEAAXW4Difficulty\@\@H\@Z
     */
    MCAPI void setDifficulityDuration(enum class Difficulty, int); // NOLINT
    /**
     * @symbol ?setDuration\@MobEffectInstance\@\@QEAAXH\@Z
     */
    MCAPI void setDuration(int); // NOLINT
    /**
     * @symbol ?tick\@MobEffectInstance\@\@QEAA_NPEAVActor\@\@\@Z
     */
    MCAPI bool tick(class Actor*); // NOLINT
    /**
     * @symbol ?tryInitializeMobEffectData\@MobEffectInstance\@\@QEAAXXZ
     */
    MCAPI void tryInitializeMobEffectData(); // NOLINT
    /**
     * @symbol ?update\@MobEffectInstance\@\@QEAAXAEBV1\@\@Z
     */
    MCAPI void update(class MobEffectInstance const&); // NOLINT
    /**
     * @symbol ?updateEffects\@MobEffectInstance\@\@QEBAXPEAVActor\@\@\@Z
     */
    MCAPI void updateEffects(class Actor*) const; // NOLINT
    /**
     * @symbol ??1MobEffectInstance\@\@QEAA\@XZ
     */
    MCAPI ~MobEffectInstance(); // NOLINT
    /**
     * @symbol
     * ?areAllEffectsAmbientOrInvisible\@MobEffectInstance\@\@SA_NAEBV?$vector\@VMobEffectInstance\@\@V?$allocator\@VMobEffectInstance\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI static bool areAllEffectsAmbientOrInvisible(std::vector<class MobEffectInstance> const&); // NOLINT
    /**
     * @symbol
     * ?getColorValue\@MobEffectInstance\@\@SA?AVColor\@mce\@\@AEBV?$vector\@VMobEffectInstance\@\@V?$allocator\@VMobEffectInstance\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI static class mce::Color getColorValue(std::vector<class MobEffectInstance> const&); // NOLINT
    /**
     * @symbol ?load\@MobEffectInstance\@\@SA?AV1\@AEBVCompoundTag\@\@\@Z
     */
    MCAPI static class MobEffectInstance load(class CompoundTag const&); // NOLINT
    /**
     * @symbol ?MAX_AMPLIFIER_COUNT\@MobEffectInstance\@\@2HB
     */
    MCAPI static int const MAX_AMPLIFIER_COUNT; // NOLINT
    /**
     * @symbol ?NO_EFFECT\@MobEffectInstance\@\@2V1\@B
     */
    MCAPI static class MobEffectInstance const NO_EFFECT; // NOLINT
};
