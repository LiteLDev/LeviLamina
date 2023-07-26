/**
 * @file  MobEffectInstance.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
#include "MobEffect.hpp"

#undef BEFORE_EXTRA

/**
 * @brief MC class MobEffectInstance.
 *
 */
class MobEffectInstance {

#define AFTER_EXTRA
// Add Member There
public:
char filler[122];

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOBEFFECTINSTANCE
public:
    MobEffectInstance() = delete;
#endif

public:
    /**
     * @symbol  ??0MobEffectInstance\@\@QEAA\@IHH_N00\@Z
     */
    MCAPI MobEffectInstance(unsigned int, int, int, bool, bool, bool);
    /**
     * @symbol  ??0MobEffectInstance\@\@QEAA\@IHHHHH_N00\@Z
     */
    MCAPI MobEffectInstance(unsigned int, int, int, int, int, int, bool, bool, bool);
    /**
     * @symbol  ??0MobEffectInstance\@\@QEAA\@IHH\@Z
     */
    MCAPI MobEffectInstance(unsigned int, int, int);
    /**
     * @symbol  ??0MobEffectInstance\@\@QEAA\@IH\@Z
     */
    MCAPI MobEffectInstance(unsigned int, int);
    /**
     * @symbol  ??0MobEffectInstance\@\@QEAA\@I\@Z
     */
    MCAPI MobEffectInstance(unsigned int);
    /**
     * @symbol  ??0MobEffectInstance\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI MobEffectInstance(class MobEffectInstance &&);
    /**
     * @symbol  ??0MobEffectInstance\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI MobEffectInstance(class MobEffectInstance const &);
    /**
     * @symbol  ?applyEffects\@MobEffectInstance\@\@QEAAXPEAVActor\@\@\@Z
     */
    MCAPI void applyEffects(class Actor *);
    /**
     * @symbol  ?displaysOnScreenTextureAnimation\@MobEffectInstance\@\@QEBA_NXZ
     */
    MCAPI bool displaysOnScreenTextureAnimation() const;
    /**
     * @symbol  ?getAmplifier\@MobEffectInstance\@\@QEBAHXZ
     */
    MCAPI int getAmplifier() const;
    /**
     * @symbol  ?getComponentName\@MobEffectInstance\@\@QEBAAEBVHashedString\@\@XZ
     */
    MCAPI class HashedString const & getComponentName() const;
    /**
     * @symbol  ?getDifficulityDuration\@MobEffectInstance\@\@QEBAHW4Difficulty\@\@\@Z
     */
    MCAPI int getDifficulityDuration(enum class Difficulty) const;
    /**
     * @symbol  ?getDisplayName\@MobEffectInstance\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getDisplayName() const;
    /**
     * @symbol  ?getDuration\@MobEffectInstance\@\@QEBAHXZ
     */
    MCAPI int getDuration() const;
    /**
     * @symbol  ?getId\@MobEffectInstance\@\@QEBAIXZ
     */
    MCAPI unsigned int getId() const;
    /**
     * @symbol  ?getLingerDuration\@MobEffectInstance\@\@QEBAHXZ
     */
    MCAPI int getLingerDuration() const;
    /**
     * @symbol  ?getSplashDuration\@MobEffectInstance\@\@QEBAHXZ
     */
    MCAPI int getSplashDuration() const;
    /**
     * @symbol  ?getSplashEffect\@MobEffectInstance\@\@QEBA?AV1\@XZ
     */
    MCAPI class MobEffectInstance getSplashEffect() const;
    /**
     * @symbol  ?isAmbient\@MobEffectInstance\@\@QEBA_NXZ
     */
    MCAPI bool isAmbient() const;
    /**
     * @symbol  ?isEffectVisible\@MobEffectInstance\@\@QEBA_NXZ
     */
    MCAPI bool isEffectVisible() const;
    /**
     * @symbol  ??9MobEffectInstance\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator!=(class MobEffectInstance const &) const;
    /**
     * @symbol  ??4MobEffectInstance\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class MobEffectInstance & operator=(class MobEffectInstance &&);
    /**
     * @symbol  ??4MobEffectInstance\@\@QEAAAEAV0\@AEBV0\@\@Z
     */
    MCAPI class MobEffectInstance & operator=(class MobEffectInstance const &);
    /**
     * @symbol  ??8MobEffectInstance\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator==(class MobEffectInstance const &) const;
    /**
     * @symbol  ?removeEffects\@MobEffectInstance\@\@QEBAXPEAVActor\@\@\@Z
     */
    MCAPI void removeEffects(class Actor *) const;
    /**
     * @symbol  ?save\@MobEffectInstance\@\@QEBA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::unique_ptr<class CompoundTag> save() const;
    /**
     * @symbol  ?setDifficulityDuration\@MobEffectInstance\@\@QEAAXW4Difficulty\@\@H\@Z
     */
    MCAPI void setDifficulityDuration(enum class Difficulty, int);
    /**
     * @symbol  ?setDuration\@MobEffectInstance\@\@QEAAXH\@Z
     */
    MCAPI void setDuration(int);
    /**
     * @symbol  ?tick\@MobEffectInstance\@\@QEAA_NPEAVActor\@\@\@Z
     */
    MCAPI bool tick(class Actor *);
    /**
     * @symbol  ?tryInitializeMobEffectData\@MobEffectInstance\@\@QEAAXXZ
     */
    MCAPI void tryInitializeMobEffectData();
    /**
     * @symbol  ?update\@MobEffectInstance\@\@QEAAXAEBV1\@\@Z
     */
    MCAPI void update(class MobEffectInstance const &);
    /**
     * @symbol  ?updateEffects\@MobEffectInstance\@\@QEBAXPEAVActor\@\@\@Z
     */
    MCAPI void updateEffects(class Actor *) const;
    /**
     * @symbol  ??1MobEffectInstance\@\@QEAA\@XZ
     */
    MCAPI ~MobEffectInstance();
    /**
     * @symbol  ?MAX_AMPLIFIER_COUNT\@MobEffectInstance\@\@2HB
     */
    MCAPI static int const MAX_AMPLIFIER_COUNT;
    /**
     * @symbol  ?NO_EFFECT\@MobEffectInstance\@\@2V1\@B
     */
    MCAPI static class MobEffectInstance const NO_EFFECT;
    /**
     * @symbol  ?areAllEffectsAmbientOrInvisible\@MobEffectInstance\@\@SA_NAEBV?$vector\@VMobEffectInstance\@\@V?$allocator\@VMobEffectInstance\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI static bool areAllEffectsAmbientOrInvisible(std::vector<class MobEffectInstance> const &);
    /**
     * @symbol  ?getColorValue\@MobEffectInstance\@\@SA?AVColor\@mce\@\@AEBV?$vector\@VMobEffectInstance\@\@V?$allocator\@VMobEffectInstance\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI static class mce::Color getColorValue(std::vector<class MobEffectInstance> const &);
    /**
     * @symbol  ?load\@MobEffectInstance\@\@SA?AV1\@AEBVCompoundTag\@\@\@Z
     */
    MCAPI static class MobEffectInstance load(class CompoundTag const &);

};