#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/Difficulty.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class MobEffectInstance {
public:
    // prevent constructor by default
    MobEffectInstance();

public:
    // NOLINTBEGIN
    // symbol: ??0MobEffectInstance@@QEAA@$$QEAV0@@Z
    MCAPI MobEffectInstance(class MobEffectInstance&&);

    // symbol: ??0MobEffectInstance@@QEAA@AEBV0@@Z
    MCAPI MobEffectInstance(class MobEffectInstance const&);

    // symbol: ??0MobEffectInstance@@QEAA@I@Z
    MCAPI explicit MobEffectInstance(uint id);

    // symbol: ??0MobEffectInstance@@QEAA@IH@Z
    MCAPI MobEffectInstance(uint id, int duration);

    // symbol: ??0MobEffectInstance@@QEAA@IHH@Z
    MCAPI MobEffectInstance(uint id, int duration, int amplifier);

    // symbol: ??0MobEffectInstance@@QEAA@IHH_N00@Z
    MCAPI
    MobEffectInstance(uint id, int duration, int amplifier, bool ambient, bool effectVisible, bool displayAnimation);

    // symbol: ??0MobEffectInstance@@QEAA@IHHHHH_N00@Z
    MCAPI MobEffectInstance(
        uint id,
        int  duration,
        int  durationEasy,
        int  durationNormal,
        int  durationHard,
        int  amplifier,
        bool ambient,
        bool effectVisible,
        bool displayAnimation
    );

    // symbol: ?applyEffects@MobEffectInstance@@QEAAXPEAVActor@@@Z
    MCAPI void applyEffects(class Actor* mob);

    // symbol: ?displaysOnScreenTextureAnimation@MobEffectInstance@@QEBA_NXZ
    MCAPI bool displaysOnScreenTextureAnimation() const;

    // symbol: ?getAmplifier@MobEffectInstance@@QEBAHXZ
    MCAPI int getAmplifier() const;

    // symbol: ?getComponentName@MobEffectInstance@@QEBAAEBVHashedString@@XZ
    MCAPI class HashedString const& getComponentName() const;

    // symbol:
    // ?getDescriptionId@MobEffectInstance@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string getDescriptionId() const;

    // symbol: ?getDifficulityDuration@MobEffectInstance@@QEBAHW4Difficulty@@@Z
    MCAPI int getDifficulityDuration(::Difficulty difficulty) const;

    // symbol: ?getDisplayName@MobEffectInstance@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string getDisplayName() const;

    // symbol: ?getDuration@MobEffectInstance@@QEBAHXZ
    MCAPI int getDuration() const;

    // symbol: ?getId@MobEffectInstance@@QEBAIXZ
    MCAPI uint getId() const;

    // symbol: ?getLingerDuration@MobEffectInstance@@QEBAHXZ
    MCAPI int getLingerDuration() const;

    // symbol: ?getSplashDuration@MobEffectInstance@@QEBAHXZ
    MCAPI int getSplashDuration() const;

    // symbol: ?getSplashEffect@MobEffectInstance@@QEBA?AV1@XZ
    MCAPI class MobEffectInstance getSplashEffect() const;

    // symbol: ?isAmbient@MobEffectInstance@@QEBA_NXZ
    MCAPI bool isAmbient() const;

    // symbol: ?isEffectVisible@MobEffectInstance@@QEBA_NXZ
    MCAPI bool isEffectVisible() const;

    // symbol: ??9MobEffectInstance@@QEBA_NAEBV0@@Z
    MCAPI bool operator!=(class MobEffectInstance const& obj) const;

    // symbol: ??4MobEffectInstance@@QEAAAEAV0@$$QEAV0@@Z
    MCAPI class MobEffectInstance& operator=(class MobEffectInstance&&);

    // symbol: ??4MobEffectInstance@@QEAAAEAV0@AEBV0@@Z
    MCAPI class MobEffectInstance& operator=(class MobEffectInstance const&);

    // symbol: ??8MobEffectInstance@@QEBA_NAEBV0@@Z
    MCAPI bool operator==(class MobEffectInstance const& obj) const;

    // symbol: ?removeEffects@MobEffectInstance@@QEBAXPEAVActor@@@Z
    MCAPI void removeEffects(class Actor* mob) const;

    // symbol: ?save@MobEffectInstance@@QEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@XZ
    MCAPI std::unique_ptr<class CompoundTag> save() const;

    // symbol: ?setDifficulityDuration@MobEffectInstance@@QEAAXW4Difficulty@@H@Z
    MCAPI void setDifficulityDuration(::Difficulty difficulty, int duration);

    // symbol: ?setDuration@MobEffectInstance@@QEAAXH@Z
    MCAPI void setDuration(int dur);

    // symbol: ?tick@MobEffectInstance@@QEAA_NPEAVActor@@@Z
    MCAPI bool tick(class Actor* target);

    // symbol: ?tryInitializeMobEffectData@MobEffectInstance@@QEAAXXZ
    MCAPI void tryInitializeMobEffectData();

    // symbol: ?update@MobEffectInstance@@QEAAXAEBV1@@Z
    MCAPI void update(class MobEffectInstance const& takeOver);

    // symbol: ?updateEffects@MobEffectInstance@@QEBAXPEAVActor@@@Z
    MCAPI void updateEffects(class Actor*) const;

    // symbol: ??1MobEffectInstance@@QEAA@XZ
    MCAPI ~MobEffectInstance();

    // symbol:
    // ?areAllEffectsAmbientOrInvisible@MobEffectInstance@@SA_NAEBV?$vector@VMobEffectInstance@@V?$allocator@VMobEffectInstance@@@std@@@std@@@Z
    MCAPI static bool areAllEffectsAmbientOrInvisible(std::vector<class MobEffectInstance> const&);

    // symbol:
    // ?getColorValue@MobEffectInstance@@SA?AVColor@mce@@AEBV?$vector@VMobEffectInstance@@V?$allocator@VMobEffectInstance@@@std@@@std@@@Z
    MCAPI static class mce::Color getColorValue(std::vector<class MobEffectInstance> const& effects);

    // symbol: ?load@MobEffectInstance@@SA?AV1@AEBVCompoundTag@@@Z
    MCAPI static class MobEffectInstance load(class CompoundTag const&);

    // symbol: ?MAX_AMPLIFIER_COUNT@MobEffectInstance@@2HB
    MCAPI static int const MAX_AMPLIFIER_COUNT;

    // symbol: ?NO_EFFECT@MobEffectInstance@@2V1@B
    MCAPI static class MobEffectInstance const NO_EFFECT;

    // NOLINTEND
};
