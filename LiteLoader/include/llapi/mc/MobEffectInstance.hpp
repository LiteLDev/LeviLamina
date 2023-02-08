/**
 * @file  MobEffectInstance.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @hash   -1246756824
     * @symbol  ??0MobEffectInstance\@\@QEAA\@IHH_N00\@Z
     */
    MCAPI MobEffectInstance(unsigned int, int, int, bool, bool, bool);
    /**
     * @hash   1238976647
     * @symbol  ??0MobEffectInstance\@\@QEAA\@IHHHHH_N00\@Z
     */
    MCAPI MobEffectInstance(unsigned int, int, int, int, int, int, bool, bool, bool);
    /**
     * @hash   1005357027
     * @symbol  ??0MobEffectInstance\@\@QEAA\@IHH\@Z
     */
    MCAPI MobEffectInstance(unsigned int, int, int);
    /**
     * @hash   1059745504
     * @symbol  ??0MobEffectInstance\@\@QEAA\@IH\@Z
     */
    MCAPI MobEffectInstance(unsigned int, int);
    /**
     * @hash   1061395811
     * @symbol  ??0MobEffectInstance\@\@QEAA\@I\@Z
     */
    MCAPI MobEffectInstance(unsigned int);
    /**
     * @hash   -1691395099
     * @symbol  ??0MobEffectInstance\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI MobEffectInstance(class MobEffectInstance &&);
    /**
     * @hash   -1781243103
     * @symbol  ??0MobEffectInstance\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI MobEffectInstance(class MobEffectInstance const &);
    /**
     * @hash   -1575281951
     * @symbol  ?applyEffects\@MobEffectInstance\@\@QEAAXPEAVActor\@\@\@Z
     */
    MCAPI void applyEffects(class Actor *);
    /**
     * @hash   1223571492
     * @symbol  ?displaysOnScreenTextureAnimation\@MobEffectInstance\@\@QEBA_NXZ
     */
    MCAPI bool displaysOnScreenTextureAnimation() const;
    /**
     * @hash   -987171124
     * @symbol  ?getAmplifier\@MobEffectInstance\@\@QEBAHXZ
     */
    MCAPI int getAmplifier() const;
    /**
     * @hash   -1201959628
     * @symbol  ?getComponentName\@MobEffectInstance\@\@QEBAAEBVHashedString\@\@XZ
     */
    MCAPI class HashedString const & getComponentName() const;
    /**
     * @hash   1731090421
     * @symbol  ?getDifficulityDuration\@MobEffectInstance\@\@QEBAHW4Difficulty\@\@\@Z
     */
    MCAPI int getDifficulityDuration(enum class Difficulty) const;
    /**
     * @hash   -161125342
     * @symbol  ?getDisplayName\@MobEffectInstance\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getDisplayName() const;
    /**
     * @hash   718374540
     * @symbol  ?getDuration\@MobEffectInstance\@\@QEBAHXZ
     */
    MCAPI int getDuration() const;
    /**
     * @hash   -117361228
     * @symbol  ?getId\@MobEffectInstance\@\@QEBAIXZ
     */
    MCAPI unsigned int getId() const;
    /**
     * @hash   1293715106
     * @symbol  ?getLingerDuration\@MobEffectInstance\@\@QEBAHXZ
     */
    MCAPI int getLingerDuration() const;
    /**
     * @hash   1112804682
     * @symbol  ?getSplashDuration\@MobEffectInstance\@\@QEBAHXZ
     */
    MCAPI int getSplashDuration() const;
    /**
     * @hash   -1358508953
     * @symbol  ?getSplashEffect\@MobEffectInstance\@\@QEBA?AV1\@XZ
     */
    MCAPI class MobEffectInstance getSplashEffect() const;
    /**
     * @hash   -170148158
     * @symbol  ?isAmbient\@MobEffectInstance\@\@QEBA_NXZ
     */
    MCAPI bool isAmbient() const;
    /**
     * @hash   -1121309774
     * @symbol  ?isEffectVisible\@MobEffectInstance\@\@QEBA_NXZ
     */
    MCAPI bool isEffectVisible() const;
    /**
     * @hash   1443155862
     * @symbol  ??9MobEffectInstance\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator!=(class MobEffectInstance const &) const;
    /**
     * @hash   1484032624
     * @symbol  ??4MobEffectInstance\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class MobEffectInstance & operator=(class MobEffectInstance &&);
    /**
     * @hash   -653270868
     * @symbol  ??4MobEffectInstance\@\@QEAAAEAV0\@AEBV0\@\@Z
     */
    MCAPI class MobEffectInstance & operator=(class MobEffectInstance const &);
    /**
     * @hash   -1202117999
     * @symbol  ??8MobEffectInstance\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator==(class MobEffectInstance const &) const;
    /**
     * @hash   572170635
     * @symbol  ?removeEffects\@MobEffectInstance\@\@QEBAXPEAVActor\@\@\@Z
     */
    MCAPI void removeEffects(class Actor *) const;
    /**
     * @hash   9849512
     * @symbol  ?save\@MobEffectInstance\@\@QEBA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::unique_ptr<class CompoundTag> save() const;
    /**
     * @hash   -1068675177
     * @symbol  ?setDifficulityDuration\@MobEffectInstance\@\@QEAAXW4Difficulty\@\@H\@Z
     */
    MCAPI void setDifficulityDuration(enum class Difficulty, int);
    /**
     * @hash   1912677818
     * @symbol  ?setDuration\@MobEffectInstance\@\@QEAAXH\@Z
     */
    MCAPI void setDuration(int);
    /**
     * @hash   176877672
     * @symbol  ?tick\@MobEffectInstance\@\@QEAA_NPEAVActor\@\@\@Z
     */
    MCAPI bool tick(class Actor *);
    /**
     * @hash   -449731485
     * @symbol  ?tryInitializeMobEffectData\@MobEffectInstance\@\@QEAAXXZ
     */
    MCAPI void tryInitializeMobEffectData();
    /**
     * @hash   -1779910769
     * @symbol  ?update\@MobEffectInstance\@\@QEAAXAEBV1\@\@Z
     */
    MCAPI void update(class MobEffectInstance const &);
    /**
     * @hash   -809252219
     * @symbol  ?updateEffects\@MobEffectInstance\@\@QEBAXPEAVActor\@\@\@Z
     */
    MCAPI void updateEffects(class Actor *) const;
    /**
     * @hash   -1157328110
     * @symbol  ??1MobEffectInstance\@\@QEAA\@XZ
     */
    MCAPI ~MobEffectInstance();
    /**
     * @hash   1116220277
     * @symbol  ?MAX_AMPLIFIER_COUNT\@MobEffectInstance\@\@2HB
     */
    MCAPI static int const MAX_AMPLIFIER_COUNT;
    /**
     * @hash   -340418470
     * @symbol  ?NO_EFFECT\@MobEffectInstance\@\@2V1\@B
     */
    MCAPI static class MobEffectInstance const NO_EFFECT;
    /**
     * @symbol  ?areAllEffectsAmbientOrInvisible\@MobEffectInstance\@\@SA_NAEBV?$vector\@VMobEffectInstance\@\@V?$allocator\@VMobEffectInstance\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI static bool areAllEffectsAmbientOrInvisible(std::vector<class MobEffectInstance> const &);
    /**
     * @hash   949706583
     * @symbol  ?getColorValue\@MobEffectInstance\@\@SA?AVColor\@mce\@\@AEBV?$vector\@VMobEffectInstance\@\@V?$allocator\@VMobEffectInstance\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI static class mce::Color getColorValue(std::vector<class MobEffectInstance> const &);
    /**
     * @hash   -1589323194
     * @symbol  ?load\@MobEffectInstance\@\@SA?AV1\@AEBVCompoundTag\@\@\@Z
     */
    MCAPI static class MobEffectInstance load(class CompoundTag const &);

};