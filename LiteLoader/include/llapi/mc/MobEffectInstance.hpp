/**
 * @file  MobEffectInstance.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   -608575944
     * @symbol ??0MobEffectInstance@@QEAA@IHH_N00@Z
     */
    MCAPI MobEffectInstance(unsigned int, int, int, bool, bool, bool);
    /**
     * @hash   1877157527
     * @symbol ??0MobEffectInstance@@QEAA@IHHHHH_N00@Z
     */
    MCAPI MobEffectInstance(unsigned int, int, int, int, int, int, bool, bool, bool);
    /**
     * @hash   1643537907
     * @symbol ??0MobEffectInstance@@QEAA@IHH@Z
     */
    MCAPI MobEffectInstance(unsigned int, int, int);
    /**
     * @hash   1697926384
     * @symbol ??0MobEffectInstance@@QEAA@IH@Z
     */
    MCAPI MobEffectInstance(unsigned int, int);
    /**
     * @hash   1699576691
     * @symbol ??0MobEffectInstance@@QEAA@I@Z
     */
    MCAPI MobEffectInstance(unsigned int);
    /**
     * @symbol ??0MobEffectInstance@@QEAA@$$QEAV0@@Z
     */
    MCAPI MobEffectInstance(class MobEffectInstance &&);
    /**
     * @hash   -1922287151
     * @symbol ??0MobEffectInstance@@QEAA@AEBV0@@Z
     */
    MCAPI MobEffectInstance(class MobEffectInstance const &);
    /**
     * @hash   -937101071
     * @symbol ?applyEffects@MobEffectInstance@@QEAAXPEAVActor@@@Z
     */
    MCAPI void applyEffects(class Actor *);
    /**
     * @hash   610807140
     * @symbol ?displaysOnScreenTextureAnimation@MobEffectInstance@@QEBA_NXZ
     */
    MCAPI bool displaysOnScreenTextureAnimation() const;
    /**
     * @hash   -349005620
     * @symbol ?getAmplifier@MobEffectInstance@@QEBAHXZ
     */
    MCAPI int getAmplifier() const;
    /**
     * @hash   -563794124
     * @symbol ?getComponentName@MobEffectInstance@@QEBAAEBVHashedString@@XZ
     */
    MCAPI class HashedString const & getComponentName() const;
    /**
     * @hash   -1925711371
     * @symbol ?getDifficulityDuration@MobEffectInstance@@QEBAHW4Difficulty@@@Z
     */
    MCAPI int getDifficulityDuration(enum Difficulty) const;
    /**
     * @hash   477040162
     * @symbol ?getDisplayName@MobEffectInstance@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string getDisplayName() const;
    /**
     * @hash   467361340
     * @symbol ?getDuration@MobEffectInstance@@QEBAHXZ
     */
    MCAPI int getDuration() const;
    /**
     * @hash   -368374428
     * @symbol ?getId@MobEffectInstance@@QEBAIXZ
     */
    MCAPI unsigned int getId() const;
    /**
     * @hash   1931880610
     * @symbol ?getLingerDuration@MobEffectInstance@@QEBAHXZ
     */
    MCAPI int getLingerDuration() const;
    /**
     * @hash   1750970186
     * @symbol ?getSplashDuration@MobEffectInstance@@QEBAHXZ
     */
    MCAPI int getSplashDuration() const;
    /**
     * @hash   -720343449
     * @symbol ?getSplashEffect@MobEffectInstance@@QEBA?AV1@XZ
     */
    MCAPI class MobEffectInstance getSplashEffect() const;
    /**
     * @hash   468017346
     * @symbol ?isAmbient@MobEffectInstance@@QEBA_NXZ
     */
    MCAPI bool isAmbient() const;
    /**
     * @hash   -483144270
     * @symbol ?isEffectVisible@MobEffectInstance@@QEBA_NXZ
     */
    MCAPI bool isEffectVisible() const;
    /**
     * @hash   2126342294
     * @symbol ??9MobEffectInstance@@QEBA_NAEBV0@@Z
     */
    MCAPI bool operator!=(class MobEffectInstance const &) const;
    /**
     * @hash   2134591184
     * @symbol ??4MobEffectInstance@@QEAAAEAV0@$$QEAV0@@Z
     */
    MCAPI class MobEffectInstance & operator=(class MobEffectInstance &&);
    /**
     * @hash   -797809860
     * @symbol ??4MobEffectInstance@@QEAAAEAV0@AEBV0@@Z
     */
    MCAPI class MobEffectInstance & operator=(class MobEffectInstance const &);
    /**
     * @hash   269062273
     * @symbol ??8MobEffectInstance@@QEBA_NAEBV0@@Z
     */
    MCAPI bool operator==(class MobEffectInstance const &) const;
    /**
     * @hash   1210228507
     * @symbol ?removeEffects@MobEffectInstance@@QEBAXPEAVActor@@@Z
     */
    MCAPI void removeEffects(class Actor *) const;
    /**
     * @hash   647907384
     * @symbol ?save@MobEffectInstance@@QEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@XZ
     */
    MCAPI std::unique_ptr<class CompoundTag> save() const;
    /**
     * @hash   -430586553
     * @symbol ?setDifficulityDuration@MobEffectInstance@@QEAAXW4Difficulty@@H@Z
     */
    MCAPI void setDifficulityDuration(enum Difficulty, int);
    /**
     * @hash   1780782490
     * @symbol ?setDuration@MobEffectInstance@@QEAAXH@Z
     */
    MCAPI void setDuration(int);
    /**
     * @hash   814966296
     * @symbol ?tick@MobEffectInstance@@QEAA_NPEAVActor@@@Z
     */
    MCAPI bool tick(class Actor *);
    /**
     * @hash   188357139
     * @symbol ?tryInitializeMobEffectData@MobEffectInstance@@QEAAXXZ
     */
    MCAPI void tryInitializeMobEffectData();
    /**
     * @hash   -1141822145
     * @symbol ?update@MobEffectInstance@@QEAAXAEBV1@@Z
     */
    MCAPI void update(class MobEffectInstance const &);
    /**
     * @hash   -171163595
     * @symbol ?updateEffects@MobEffectInstance@@QEBAXPEAVActor@@@Z
     */
    MCAPI void updateEffects(class Actor *) const;
    /**
     * @hash   -1360952478
     * @symbol ??1MobEffectInstance@@QEAA@XZ
     */
    MCAPI ~MobEffectInstance();
    /**
     * @hash   145510333
     * @symbol ?MAX_AMPLIFIER_COUNT@MobEffectInstance@@2HB
     */
    MCAPI static int const MAX_AMPLIFIER_COUNT;
    /**
     * @hash   -1417045990
     * @symbol ?NO_EFFECT@MobEffectInstance@@2V1@B
     */
    MCAPI static class MobEffectInstance const NO_EFFECT;
    /**
     * @hash   1763174405
     * @symbol ?areAllEffectsAmbient@MobEffectInstance@@SA_NAEBV?$vector@VMobEffectInstance@@V?$allocator@VMobEffectInstance@@@std@@@std@@@Z
     */
    MCAPI static bool areAllEffectsAmbient(std::vector<class MobEffectInstance> const &);
    /**
     * @hash   1587872087
     * @symbol ?getColorValue@MobEffectInstance@@SA?AVColor@mce@@AEBV?$vector@VMobEffectInstance@@V?$allocator@VMobEffectInstance@@@std@@@std@@@Z
     */
    MCAPI static class mce::Color getColorValue(std::vector<class MobEffectInstance> const &);
    /**
     * @hash   -951157690
     * @symbol ?load@MobEffectInstance@@SA?AV1@AEBVCompoundTag@@@Z
     */
    MCAPI static class MobEffectInstance load(class CompoundTag const &);

};