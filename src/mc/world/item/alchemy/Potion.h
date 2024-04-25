#pragma once

#include "mc/_HeaderOutputPredefine.h"

class Potion {
public:
    // Potion inner types define
    enum class PotionType {};

    enum class PotionVariant {};

public:
    // prevent constructor by default
    Potion& operator=(Potion const&);
    Potion(Potion const&);
    Potion();

public:
    // NOLINTBEGIN
    // symbol:
    // ?appendFormattedPotionText@Potion@@QEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4PotionType@1@W4PotionVariant@1@AEBVPlayer@@M@Z
    MCAPI void appendFormattedPotionText(
        std::string&            hovertext,
        ::Potion::PotionType    potionType,
        ::Potion::PotionVariant potionVariant,
        class Player const&     player,
        float                   timeMod
    ) const;

    // symbol:
    // ?effectDurationToString@Potion@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4PotionType@1@MAEBVMobEffectInstance@@@Z
    MCAPI std::string effectDurationToString(::Potion::PotionType, float, class MobEffectInstance const&) const;

    // symbol:
    // ?effectPotencyToString@Potion@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVMobEffectInstance@@@Z
    MCAPI std::string effectPotencyToString(class MobEffectInstance const&) const;

    // symbol: ?getDescriptionId@Potion@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string getDescriptionId() const;

    // symbol:
    // ?getDescriptionId@Potion@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4PotionType@1@@Z
    MCAPI std::string getDescriptionId(::Potion::PotionType) const;

    // symbol: ?getMobEffect@Potion@@QEBAAEBVMobEffectInstance@@XZ
    MCAPI class MobEffectInstance const& getMobEffect() const;

    // symbol: ?getMobEffectId@Potion@@QEBAHXZ
    MCAPI int getMobEffectId() const;

    // symbol:
    // ?getMobEffects@Potion@@QEBAAEBV?$vector@VMobEffectInstance@@V?$allocator@VMobEffectInstance@@@std@@@std@@XZ
    MCAPI std::vector<class MobEffectInstance> const& getMobEffects() const;

    // symbol:
    // ?getPotentencyDescription@Potion@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4PotionType@1@M@Z
    MCAPI std::string getPotentencyDescription(::Potion::PotionType, float) const;

    // symbol:
    // ?getPotentencyDescription@Potion@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4PotionType@1@MV?$basic_string_view@DU?$char_traits@D@std@@@3@AEBVMobEffectInstance@@@Z
    MCAPI std::string
          getPotentencyDescription(::Potion::PotionType, float, std::string_view, class MobEffectInstance const&) const;

    // symbol: ?getPotionId@Potion@@QEBAHXZ
    MCAPI int getPotionId() const;

    // symbol: ?getPotionVariant@Potion@@QEBA?AW4PotionVariant@1@XZ
    MCAPI ::Potion::PotionVariant getPotionVariant() const;

    // symbol: ?getPrefix@Potion@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string getPrefix() const;

    // symbol: ??1Potion@@QEAA@XZ
    MCAPI ~Potion();

    // symbol:
    // ?getBasePotion@Potion@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4PotionType@1@@Z
    MCAPI static std::string getBasePotion(::Potion::PotionType);

    // symbol: ?getPotion@Potion@@SA?AV?$shared_ptr@$$CBVPotion@@@std@@V?$basic_string_view@DU?$char_traits@D@std@@@3@@Z
    MCAPI static std::shared_ptr<class Potion const> getPotion(std::string_view potionNameId);

    // symbol: ?getPotion@Potion@@SA?AV?$shared_ptr@$$CBVPotion@@@std@@H@Z
    MCAPI static std::shared_ptr<class Potion const> getPotion(int potionId);

    // symbol: ?getPotionCount@Potion@@SAHXZ
    MCAPI static int getPotionCount();

    // symbol: ?initPotions@Potion@@SAXXZ
    MCAPI static void initPotions();

    // symbol: ?shutdownPotions@Potion@@SAXXZ
    MCAPI static void shutdownPotions();

    // symbol: ?Awkward@Potion@@2V?$shared_ptr@$$CBVPotion@@@std@@B
    MCAPI static std::shared_ptr<class Potion const> const Awkward;

    // symbol: ?FireResistance@Potion@@2V?$shared_ptr@$$CBVPotion@@@std@@B
    MCAPI static std::shared_ptr<class Potion const> const FireResistance;

    // symbol: ?Harming@Potion@@2V?$shared_ptr@$$CBVPotion@@@std@@B
    MCAPI static std::shared_ptr<class Potion const> const Harming;

    // symbol: ?Healing@Potion@@2V?$shared_ptr@$$CBVPotion@@@std@@B
    MCAPI static std::shared_ptr<class Potion const> const Healing;

    // symbol: ?Invisibility@Potion@@2V?$shared_ptr@$$CBVPotion@@@std@@B
    MCAPI static std::shared_ptr<class Potion const> const Invisibility;

    // symbol: ?Leaping@Potion@@2V?$shared_ptr@$$CBVPotion@@@std@@B
    MCAPI static std::shared_ptr<class Potion const> const Leaping;

    // symbol: ?LongFireResistance@Potion@@2V?$shared_ptr@$$CBVPotion@@@std@@B
    MCAPI static std::shared_ptr<class Potion const> const LongFireResistance;

    // symbol: ?LongInvisibility@Potion@@2V?$shared_ptr@$$CBVPotion@@@std@@B
    MCAPI static std::shared_ptr<class Potion const> const LongInvisibility;

    // symbol: ?LongLeaping@Potion@@2V?$shared_ptr@$$CBVPotion@@@std@@B
    MCAPI static std::shared_ptr<class Potion const> const LongLeaping;

    // symbol: ?LongMundane@Potion@@2V?$shared_ptr@$$CBVPotion@@@std@@B
    MCAPI static std::shared_ptr<class Potion const> const LongMundane;

    // symbol: ?LongNightvision@Potion@@2V?$shared_ptr@$$CBVPotion@@@std@@B
    MCAPI static std::shared_ptr<class Potion const> const LongNightvision;

    // symbol: ?LongPoison@Potion@@2V?$shared_ptr@$$CBVPotion@@@std@@B
    MCAPI static std::shared_ptr<class Potion const> const LongPoison;

    // symbol: ?LongRegeneration@Potion@@2V?$shared_ptr@$$CBVPotion@@@std@@B
    MCAPI static std::shared_ptr<class Potion const> const LongRegeneration;

    // symbol: ?LongSlowFalling@Potion@@2V?$shared_ptr@$$CBVPotion@@@std@@B
    MCAPI static std::shared_ptr<class Potion const> const LongSlowFalling;

    // symbol: ?LongSlowness@Potion@@2V?$shared_ptr@$$CBVPotion@@@std@@B
    MCAPI static std::shared_ptr<class Potion const> const LongSlowness;

    // symbol: ?LongStrength@Potion@@2V?$shared_ptr@$$CBVPotion@@@std@@B
    MCAPI static std::shared_ptr<class Potion const> const LongStrength;

    // symbol: ?LongSwiftness@Potion@@2V?$shared_ptr@$$CBVPotion@@@std@@B
    MCAPI static std::shared_ptr<class Potion const> const LongSwiftness;

    // symbol: ?LongTurtleMaster@Potion@@2V?$shared_ptr@$$CBVPotion@@@std@@B
    MCAPI static std::shared_ptr<class Potion const> const LongTurtleMaster;

    // symbol: ?LongWaterBreathing@Potion@@2V?$shared_ptr@$$CBVPotion@@@std@@B
    MCAPI static std::shared_ptr<class Potion const> const LongWaterBreathing;

    // symbol: ?LongWeakness@Potion@@2V?$shared_ptr@$$CBVPotion@@@std@@B
    MCAPI static std::shared_ptr<class Potion const> const LongWeakness;

    // symbol: ?Mundane@Potion@@2V?$shared_ptr@$$CBVPotion@@@std@@B
    MCAPI static std::shared_ptr<class Potion const> const Mundane;

    // symbol: ?Nightvision@Potion@@2V?$shared_ptr@$$CBVPotion@@@std@@B
    MCAPI static std::shared_ptr<class Potion const> const Nightvision;

    // symbol: ?Poison@Potion@@2V?$shared_ptr@$$CBVPotion@@@std@@B
    MCAPI static std::shared_ptr<class Potion const> const Poison;

    // symbol: ?Regeneration@Potion@@2V?$shared_ptr@$$CBVPotion@@@std@@B
    MCAPI static std::shared_ptr<class Potion const> const Regeneration;

    // symbol: ?SlowFalling@Potion@@2V?$shared_ptr@$$CBVPotion@@@std@@B
    MCAPI static std::shared_ptr<class Potion const> const SlowFalling;

    // symbol: ?Slowness@Potion@@2V?$shared_ptr@$$CBVPotion@@@std@@B
    MCAPI static std::shared_ptr<class Potion const> const Slowness;

    // symbol: ?Strength@Potion@@2V?$shared_ptr@$$CBVPotion@@@std@@B
    MCAPI static std::shared_ptr<class Potion const> const Strength;

    // symbol: ?StrongHarming@Potion@@2V?$shared_ptr@$$CBVPotion@@@std@@B
    MCAPI static std::shared_ptr<class Potion const> const StrongHarming;

    // symbol: ?StrongHealing@Potion@@2V?$shared_ptr@$$CBVPotion@@@std@@B
    MCAPI static std::shared_ptr<class Potion const> const StrongHealing;

    // symbol: ?StrongLeaping@Potion@@2V?$shared_ptr@$$CBVPotion@@@std@@B
    MCAPI static std::shared_ptr<class Potion const> const StrongLeaping;

    // symbol: ?StrongPoison@Potion@@2V?$shared_ptr@$$CBVPotion@@@std@@B
    MCAPI static std::shared_ptr<class Potion const> const StrongPoison;

    // symbol: ?StrongRegeneration@Potion@@2V?$shared_ptr@$$CBVPotion@@@std@@B
    MCAPI static std::shared_ptr<class Potion const> const StrongRegeneration;

    // symbol: ?StrongSlowness@Potion@@2V?$shared_ptr@$$CBVPotion@@@std@@B
    MCAPI static std::shared_ptr<class Potion const> const StrongSlowness;

    // symbol: ?StrongStrength@Potion@@2V?$shared_ptr@$$CBVPotion@@@std@@B
    MCAPI static std::shared_ptr<class Potion const> const StrongStrength;

    // symbol: ?StrongSwiftness@Potion@@2V?$shared_ptr@$$CBVPotion@@@std@@B
    MCAPI static std::shared_ptr<class Potion const> const StrongSwiftness;

    // symbol: ?StrongTurtleMaster@Potion@@2V?$shared_ptr@$$CBVPotion@@@std@@B
    MCAPI static std::shared_ptr<class Potion const> const StrongTurtleMaster;

    // symbol: ?Swiftness@Potion@@2V?$shared_ptr@$$CBVPotion@@@std@@B
    MCAPI static std::shared_ptr<class Potion const> const Swiftness;

    // symbol: ?Thick@Potion@@2V?$shared_ptr@$$CBVPotion@@@std@@B
    MCAPI static std::shared_ptr<class Potion const> const Thick;

    // symbol: ?TurtleMaster@Potion@@2V?$shared_ptr@$$CBVPotion@@@std@@B
    MCAPI static std::shared_ptr<class Potion const> const TurtleMaster;

    // symbol: ?Water@Potion@@2V?$shared_ptr@$$CBVPotion@@@std@@B
    MCAPI static std::shared_ptr<class Potion const> const Water;

    // symbol: ?WaterBreathing@Potion@@2V?$shared_ptr@$$CBVPotion@@@std@@B
    MCAPI static std::shared_ptr<class Potion const> const WaterBreathing;

    // symbol: ?Weakness@Potion@@2V?$shared_ptr@$$CBVPotion@@@std@@B
    MCAPI static std::shared_ptr<class Potion const> const Weakness;

    // symbol: ?Wither@Potion@@2V?$shared_ptr@$$CBVPotion@@@std@@B
    MCAPI static std::shared_ptr<class Potion const> const Wither;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ??0Potion@@AEAA@V?$basic_string_view@DU?$char_traits@D@std@@@std@@0AEBVMobEffectInstance@@W4PotionVariant@0@@Z
    MCAPI Potion(
        std::string_view               nameId,
        std::string_view               descriptionID,
        class MobEffectInstance const& mobEffect,
        ::Potion::PotionVariant        var
    );

    // symbol:
    // ??0Potion@@AEAA@V?$basic_string_view@DU?$char_traits@D@std@@@std@@V?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$vector@VMobEffectInstance@@V?$allocator@VMobEffectInstance@@@std@@@2@W4PotionVariant@0@@Z
    MCAPI Potion(
        std::string_view                     nameId,
        std::vector<std::string>             descriptionIDs,
        std::vector<class MobEffectInstance> mobEffects,
        ::Potion::PotionVariant              var
    );

    // symbol:
    // ?_getDescriptionIdCombiningStrings@Potion@@AEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4PotionType@1@@Z
    MCAPI std::string _getDescriptionIdCombiningStrings(::Potion::PotionType) const;

    // symbol:
    // ?_getDescriptionIdSingleString@Potion@@AEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4PotionType@1@@Z
    MCAPI std::string _getDescriptionIdSingleString(::Potion::PotionType) const;

    // symbol: ?addPotion@Potion@@CAXV?$shared_ptr@$$CBVPotion@@@std@@@Z
    MCAPI static void addPotion(std::shared_ptr<class Potion const> potion);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?mLastId@Potion@@0HA
    MCAPI static int mLastId;

    // symbol: ?mPotionsById@Potion@@0PAV?$shared_ptr@$$CBVPotion@@@std@@A
    MCAPI static std::shared_ptr<class Potion const> mPotionsById[];

    // symbol:
    // ?mPotionsByName@Potion@@0V?$unordered_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HU?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@std@@@2@@std@@A
    MCAPI static std::unordered_map<std::string, int> mPotionsByName;

    // NOLINTEND
};
