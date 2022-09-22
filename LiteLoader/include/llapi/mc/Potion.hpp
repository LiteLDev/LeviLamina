/**
 * @file  Potion.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class Potion.
 *
 */
class Potion {

#define AFTER_EXTRA
// Add Member There
public:
enum class PotionType;
enum class PotionVariant;

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_POTION
public:
    class Potion& operator=(class Potion const &) = delete;
    Potion() = delete;
#endif

public:
    /**
     * @hash   254674177
     * @symbol ??0Potion@@QEAA@AEBV0@@Z
     */
    MCAPI Potion(class Potion const &);
    /**
     * @hash   1678085334
     * @symbol ?appendFormattedPotionText@Potion@@QEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4PotionType@1@W4PotionVariant@1@AEBVPlayer@@M@Z
     */
    MCAPI void appendFormattedPotionText(std::string &, enum Potion::PotionType, enum Potion::PotionVariant, class Player const &, float) const;
    /**
     * @hash   -1088656303
     * @symbol ?effectDurationToString@Potion@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4PotionType@1@MAEBVMobEffectInstance@@@Z
     */
    MCAPI std::string effectDurationToString(enum Potion::PotionType, float, class MobEffectInstance const &) const;
    /**
     * @hash   -1566170991
     * @symbol ?effectPotencyToString@Potion@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVMobEffectInstance@@@Z
     */
    MCAPI std::string effectPotencyToString(class MobEffectInstance const &) const;
    /**
     * @hash   1709849585
     * @symbol ?getDescriptionId@Potion@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4PotionType@1@@Z
     */
    MCAPI std::string getDescriptionId(enum Potion::PotionType) const;
    /**
     * @hash   -133995080
     * @symbol ?getDescriptionId@Potion@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string getDescriptionId() const;
    /**
     * @hash   -1668673274
     * @symbol ?getMobEffect@Potion@@QEBAAEBVMobEffectInstance@@XZ
     */
    MCAPI class MobEffectInstance const & getMobEffect() const;
    /**
     * @hash   -1212955032
     * @symbol ?getMobEffectId@Potion@@QEBAHXZ
     */
    MCAPI int getMobEffectId() const;
    /**
     * @hash   -1842005846
     * @symbol ?getMobEffects@Potion@@QEBAAEBV?$vector@VMobEffectInstance@@V?$allocator@VMobEffectInstance@@@std@@@std@@XZ
     */
    MCAPI std::vector<class MobEffectInstance> const & getMobEffects() const;
    /**
     * @hash   -2023081554
     * @symbol ?getPotentencyDescription@Potion@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4PotionType@1@M@Z
     */
    MCAPI std::string getPotentencyDescription(enum Potion::PotionType, float) const;
    /**
     * @hash   -1180189960
     * @symbol ?getPotentencyDescription@Potion@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4PotionType@1@MV?$basic_string_span@$$CBD$0?0@gsl@@AEBVMobEffectInstance@@@Z
     */
    MCAPI std::string getPotentencyDescription(enum Potion::PotionType, float, class gsl::basic_string_span<char const, -1>, class MobEffectInstance const &) const;
    /**
     * @hash   949133270
     * @symbol ?getPotionId@Potion@@QEBAHXZ
     */
    MCAPI int getPotionId() const;
    /**
     * @hash   -1094255750
     * @symbol ?getPotionVariant@Potion@@QEBA?AW4PotionVariant@1@XZ
     */
    MCAPI enum Potion::PotionVariant getPotionVariant() const;
    /**
     * @hash   1186388072
     * @symbol ?getPrefix@Potion@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string getPrefix() const;
    /**
     * @hash   -754459395
     * @symbol ??1Potion@@QEAA@XZ
     */
    MCAPI ~Potion();
    /**
     * @hash   -888915900
     * @symbol ?Awkward@Potion@@2V?$shared_ptr@$$CBVPotion@@@std@@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const Awkward;
    /**
     * @hash   1977554982
     * @symbol ?FireResistance@Potion@@2V?$shared_ptr@$$CBVPotion@@@std@@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const FireResistance;
    /**
     * @hash   -1230738908
     * @symbol ?Harming@Potion@@2V?$shared_ptr@$$CBVPotion@@@std@@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const Harming;
    /**
     * @hash   1237057412
     * @symbol ?Healing@Potion@@2V?$shared_ptr@$$CBVPotion@@@std@@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const Healing;
    /**
     * @hash   1932588310
     * @symbol ?Invisibility@Potion@@2V?$shared_ptr@$$CBVPotion@@@std@@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const Invisibility;
    /**
     * @hash   -229031244
     * @symbol ?Leaping@Potion@@2V?$shared_ptr@$$CBVPotion@@@std@@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const Leaping;
    /**
     * @hash   -508757194
     * @symbol ?LongFireResistance@Potion@@2V?$shared_ptr@$$CBVPotion@@@std@@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const LongFireResistance;
    /**
     * @hash   -197355482
     * @symbol ?LongInvisibility@Potion@@2V?$shared_ptr@$$CBVPotion@@@std@@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const LongInvisibility;
    /**
     * @hash   -209078332
     * @symbol ?LongLeaping@Potion@@2V?$shared_ptr@$$CBVPotion@@@std@@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const LongLeaping;
    /**
     * @hash   1058119492
     * @symbol ?LongMundane@Potion@@2V?$shared_ptr@$$CBVPotion@@@std@@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const LongMundane;
    /**
     * @hash   -574947644
     * @symbol ?LongNightvision@Potion@@2V?$shared_ptr@$$CBVPotion@@@std@@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const LongNightvision;
    /**
     * @hash   -606817994
     * @symbol ?LongPoison@Potion@@2V?$shared_ptr@$$CBVPotion@@@std@@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const LongPoison;
    /**
     * @hash   2139084806
     * @symbol ?LongRegeneration@Potion@@2V?$shared_ptr@$$CBVPotion@@@std@@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const LongRegeneration;
    /**
     * @hash   1729394628
     * @symbol ?LongSlowFalling@Potion@@2V?$shared_ptr@$$CBVPotion@@@std@@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const LongSlowFalling;
    /**
     * @hash   -1876448666
     * @symbol ?LongSlowness@Potion@@2V?$shared_ptr@$$CBVPotion@@@std@@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const LongSlowness;
    /**
     * @hash   1051224438
     * @symbol ?LongStrength@Potion@@2V?$shared_ptr@$$CBVPotion@@@std@@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const LongStrength;
    /**
     * @hash   -1938223532
     * @symbol ?LongSwiftness@Potion@@2V?$shared_ptr@$$CBVPotion@@@std@@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const LongSwiftness;
    /**
     * @hash   -1741112842
     * @symbol ?LongTurtleMaster@Potion@@2V?$shared_ptr@$$CBVPotion@@@std@@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const LongTurtleMaster;
    /**
     * @hash   357632822
     * @symbol ?LongWaterBreathing@Potion@@2V?$shared_ptr@$$CBVPotion@@@std@@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const LongWaterBreathing;
    /**
     * @hash   1005016422
     * @symbol ?LongWeakness@Potion@@2V?$shared_ptr@$$CBVPotion@@@std@@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const LongWeakness;
    /**
     * @hash   1038166580
     * @symbol ?Mundane@Potion@@2V?$shared_ptr@$$CBVPotion@@@std@@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const Mundane;
    /**
     * @hash   -783349324
     * @symbol ?Nightvision@Potion@@2V?$shared_ptr@$$CBVPotion@@@std@@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const Nightvision;
    /**
     * @hash   1886375462
     * @symbol ?Poison@Potion@@2V?$shared_ptr@$$CBVPotion@@@std@@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const Poison;
    /**
     * @hash   -25938698
     * @symbol ?Regeneration@Potion@@2V?$shared_ptr@$$CBVPotion@@@std@@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const Regeneration;
    /**
     * @hash   1520992948
     * @symbol ?SlowFalling@Potion@@2V?$shared_ptr@$$CBVPotion@@@std@@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const SlowFalling;
    /**
     * @hash   1800439638
     * @symbol ?Slowness@Potion@@2V?$shared_ptr@$$CBVPotion@@@std@@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const Slowness;
    /**
     * @hash   433145446
     * @symbol ?Strength@Potion@@2V?$shared_ptr@$$CBVPotion@@@std@@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const Strength;
    /**
     * @hash   786707732
     * @symbol ?StrongHarming@Potion@@2V?$shared_ptr@$$CBVPotion@@@std@@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const StrongHarming;
    /**
     * @hash   -1040463244
     * @symbol ?StrongHealing@Potion@@2V?$shared_ptr@$$CBVPotion@@@std@@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const StrongHealing;
    /**
     * @hash   1788430772
     * @symbol ?StrongLeaping@Potion@@2V?$shared_ptr@$$CBVPotion@@@std@@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const StrongLeaping;
    /**
     * @hash   2090031974
     * @symbol ?StrongPoison@Potion@@2V?$shared_ptr@$$CBVPotion@@@std@@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const StrongPoison;
    /**
     * @hash   -1543804362
     * @symbol ?StrongRegeneration@Potion@@2V?$shared_ptr@$$CBVPotion@@@std@@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const StrongRegeneration;
    /**
     * @hash   -83669866
     * @symbol ?StrongSlowness@Potion@@2V?$shared_ptr@$$CBVPotion@@@std@@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const StrongSlowness;
    /**
     * @hash   -1450964058
     * @symbol ?StrongStrength@Potion@@2V?$shared_ptr@$$CBVPotion@@@std@@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const StrongStrength;
    /**
     * @hash   2097850436
     * @symbol ?StrongSwiftness@Potion@@2V?$shared_ptr@$$CBVPotion@@@std@@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const StrongSwiftness;
    /**
     * @hash   -1129034714
     * @symbol ?StrongTurtleMaster@Potion@@2V?$shared_ptr@$$CBVPotion@@@std@@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const StrongTurtleMaster;
    /**
     * @hash   376625476
     * @symbol ?Swiftness@Potion@@2V?$shared_ptr@$$CBVPotion@@@std@@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const Swiftness;
    /**
     * @hash   -1212706444
     * @symbol ?Thick@Potion@@2V?$shared_ptr@$$CBVPotion@@@std@@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const Thick;
    /**
     * @hash   388830950
     * @symbol ?TurtleMaster@Potion@@2V?$shared_ptr@$$CBVPotion@@@std@@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const TurtleMaster;
    /**
     * @hash   942976644
     * @symbol ?Water@Potion@@2V?$shared_ptr@$$CBVPotion@@@std@@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const Water;
    /**
     * @hash   -1451022298
     * @symbol ?WaterBreathing@Potion@@2V?$shared_ptr@$$CBVPotion@@@std@@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const WaterBreathing;
    /**
     * @hash   386937430
     * @symbol ?Weakness@Potion@@2V?$shared_ptr@$$CBVPotion@@@std@@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const Weakness;
    /**
     * @hash   -1041533130
     * @symbol ?Wither@Potion@@2V?$shared_ptr@$$CBVPotion@@@std@@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const Wither;
    /**
     * @hash   425961769
     * @symbol ?getBasePotion@Potion@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4PotionType@1@@Z
     */
    MCAPI static std::string getBasePotion(enum Potion::PotionType);
    /**
     * @hash   996639842
     * @symbol ?getPotion@Potion@@SA?AV?$shared_ptr@$$CBVPotion@@@std@@V?$basic_string_span@$$CBD$0?0@gsl@@@Z
     */
    MCAPI static class std::shared_ptr<class Potion const> getPotion(class gsl::basic_string_span<char const, -1>);
    /**
     * @hash   169330018
     * @symbol ?getPotion@Potion@@SA?AV?$shared_ptr@$$CBVPotion@@@std@@H@Z
     */
    MCAPI static class std::shared_ptr<class Potion const> getPotion(int);
    /**
     * @hash   2144966008
     * @symbol ?getPotionCount@Potion@@SAHXZ
     */
    MCAPI static int getPotionCount();
    /**
     * @hash   401561473
     * @symbol ?initPotions@Potion@@SAXXZ
     */
    MCAPI static void initPotions();
    /**
     * @hash   380269585
     * @symbol ?shutdownPotions@Potion@@SAXXZ
     */
    MCAPI static void shutdownPotions();

//private:
    /**
     * @hash   -1530490232
     * @symbol ??0Potion@@AEAA@V?$basic_string_span@$$CBD$0?0@gsl@@V?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@V?$vector@VMobEffectInstance@@V?$allocator@VMobEffectInstance@@@std@@@4@W4PotionVariant@0@@Z
     */
    MCAPI Potion(class gsl::basic_string_span<char const, -1>, std::vector<std::string>, std::vector<class MobEffectInstance>, enum Potion::PotionVariant);
    /**
     * @hash   -1411803004
     * @symbol ??0Potion@@AEAA@V?$basic_string_span@$$CBD$0?0@gsl@@0AEBVMobEffectInstance@@W4PotionVariant@0@@Z
     */
    MCAPI Potion(class gsl::basic_string_span<char const, -1>, class gsl::basic_string_span<char const, -1>, class MobEffectInstance const &, enum Potion::PotionVariant);
    /**
     * @hash   -1463454512
     * @symbol ?_getDescriptionIdCombiningStrings@Potion@@AEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4PotionType@1@@Z
     */
    MCAPI std::string _getDescriptionIdCombiningStrings(enum Potion::PotionType) const;
    /**
     * @hash   -1038165763
     * @symbol ?_getDescriptionIdSingleString@Potion@@AEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4PotionType@1@@Z
     */
    MCAPI std::string _getDescriptionIdSingleString(enum Potion::PotionType) const;
    /**
     * @hash   2023664507
     * @symbol ?addPotion@Potion@@CAXV?$shared_ptr@$$CBVPotion@@@std@@@Z
     */
    MCAPI static void addPotion(class std::shared_ptr<class Potion const>);

private:
    /**
     * @hash   -80723874
     * @symbol ?mLastId@Potion@@0HA
     */
    MCAPI static int mLastId;
    /**
     * @hash   -1797236305
     * @symbol ?mPotionsById@Potion@@0PAV?$shared_ptr@$$CBVPotion@@@std@@A
     */
    MCAPI static class std::shared_ptr<class Potion const> mPotionsById[];
    /**
     * @hash   848715934
     * @symbol ?mPotionsByName@Potion@@0V?$unordered_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HU?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@std@@@2@@std@@A
     */
    MCAPI static class std::unordered_map<std::string, int, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<struct std::pair<std::string const, int>>> mPotionsByName;

};