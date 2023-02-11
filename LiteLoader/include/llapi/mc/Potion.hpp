/**
 * @file  Potion.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @hash   1080165489
     * @symbol  ??0Potion\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI Potion(class Potion const &);
    /**
     * @hash   -1791375274
     * @symbol  ?appendFormattedPotionText\@Potion\@\@QEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4PotionType\@1\@W4PotionVariant\@1\@AEBVPlayer\@\@M\@Z
     */
    MCAPI void appendFormattedPotionText(std::string &, enum class Potion::PotionType, enum class Potion::PotionVariant, class Player const &, float) const;
    /**
     * @hash   -263272623
     * @symbol  ?effectDurationToString\@Potion\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4PotionType\@1\@MAEBVMobEffectInstance\@\@\@Z
     */
    MCAPI std::string effectDurationToString(enum class Potion::PotionType, float, class MobEffectInstance const &) const;
    /**
     * @hash   -740787311
     * @symbol  ?effectPotencyToString\@Potion\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVMobEffectInstance\@\@\@Z
     */
    MCAPI std::string effectPotencyToString(class MobEffectInstance const &) const;
    /**
     * @hash   -1759734031
     * @symbol  ?getDescriptionId\@Potion\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4PotionType\@1\@\@Z
     */
    MCAPI std::string getDescriptionId(enum class Potion::PotionType) const;
    /**
     * @hash   691496232
     * @symbol  ?getDescriptionId\@Potion\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getDescriptionId() const;
    /**
     * @hash   -1568867658
     * @symbol  ?getMobEffect\@Potion\@\@QEBAAEBVMobEffectInstance\@\@XZ
     */
    MCAPI class MobEffectInstance const & getMobEffect() const;
    /**
     * @hash   -387463720
     * @symbol  ?getMobEffectId\@Potion\@\@QEBAHXZ
     */
    MCAPI int getMobEffectId() const;
    /**
     * @hash   1600838906
     * @symbol  ?getMobEffects\@Potion\@\@QEBAAEBV?$vector\@VMobEffectInstance\@\@V?$allocator\@VMobEffectInstance\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<class MobEffectInstance> const & getMobEffects() const;
    /**
     * @hash   -1197590242
     * @symbol  ?getPotentencyDescription\@Potion\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4PotionType\@1\@M\@Z
     */
    MCAPI std::string getPotentencyDescription(enum class Potion::PotionType, float) const;
    /**
     * @hash   -354729400
     * @symbol  ?getPotentencyDescription\@Potion\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4PotionType\@1\@MV?$basic_string_span\@$$CBD$0?0\@gsl\@\@AEBVMobEffectInstance\@\@\@Z
     */
    MCAPI std::string getPotentencyDescription(enum class Potion::PotionType, float, class gsl::basic_string_span<char const, -1>, class MobEffectInstance const &) const;
    /**
     * @hash   1200146470
     * @symbol  ?getPotionId\@Potion\@\@QEBAHXZ
     */
    MCAPI int getPotionId() const;
    /**
     * @hash   -268702934
     * @symbol  ?getPotionVariant\@Potion\@\@QEBA?AW4PotionVariant\@1\@XZ
     */
    MCAPI enum class Potion::PotionVariant getPotionVariant() const;
    /**
     * @hash   2011940888
     * @symbol  ?getPrefix\@Potion\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getPrefix() const;
    /**
     * @hash   71031917
     * @symbol  ??1Potion\@\@QEAA\@XZ
     */
    MCAPI ~Potion();
    /**
     * @hash   11979316
     * @symbol  ?Awkward\@Potion\@\@2V?$shared_ptr\@$$CBVPotion\@\@\@std\@\@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const Awkward;
    /**
     * @hash   -1416517098
     * @symbol  ?FireResistance\@Potion\@\@2V?$shared_ptr\@$$CBVPotion\@\@\@std\@\@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const FireResistance;
    /**
     * @hash   -329843692
     * @symbol  ?Harming\@Potion\@\@2V?$shared_ptr\@$$CBVPotion\@\@\@std\@\@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const Harming;
    /**
     * @hash   2137952628
     * @symbol  ?Healing\@Potion\@\@2V?$shared_ptr\@$$CBVPotion\@\@\@std\@\@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const Healing;
    /**
     * @hash   -1461483770
     * @symbol  ?Invisibility\@Potion\@\@2V?$shared_ptr\@$$CBVPotion\@\@\@std\@\@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const Invisibility;
    /**
     * @hash   671863972
     * @symbol  ?Leaping\@Potion\@\@2V?$shared_ptr\@$$CBVPotion\@\@\@std\@\@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const Leaping;
    /**
     * @hash   392138022
     * @symbol  ?LongFireResistance\@Potion\@\@2V?$shared_ptr\@$$CBVPotion\@\@\@std\@\@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const LongFireResistance;
    /**
     * @hash   703539734
     * @symbol  ?LongInvisibility\@Potion\@\@2V?$shared_ptr\@$$CBVPotion\@\@\@std\@\@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const LongInvisibility;
    /**
     * @hash   691816884
     * @symbol  ?LongLeaping\@Potion\@\@2V?$shared_ptr\@$$CBVPotion\@\@\@std\@\@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const LongLeaping;
    /**
     * @hash   1959014708
     * @symbol  ?LongMundane\@Potion\@\@2V?$shared_ptr\@$$CBVPotion\@\@\@std\@\@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const LongMundane;
    /**
     * @hash   325947572
     * @symbol  ?LongNightvision\@Potion\@\@2V?$shared_ptr\@$$CBVPotion\@\@\@std\@\@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const LongNightvision;
    /**
     * @hash   294077222
     * @symbol  ?LongPoison\@Potion\@\@2V?$shared_ptr\@$$CBVPotion\@\@\@std\@\@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const LongPoison;
    /**
     * @hash   -1254987274
     * @symbol  ?LongRegeneration\@Potion\@\@2V?$shared_ptr\@$$CBVPotion\@\@\@std\@\@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const LongRegeneration;
    /**
     * @hash   -1664677452
     * @symbol  ?LongSlowFalling\@Potion\@\@2V?$shared_ptr\@$$CBVPotion\@\@\@std\@\@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const LongSlowFalling;
    /**
     * @hash   -975553450
     * @symbol  ?LongSlowness\@Potion\@\@2V?$shared_ptr\@$$CBVPotion\@\@\@std\@\@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const LongSlowness;
    /**
     * @hash   1952119654
     * @symbol  ?LongStrength\@Potion\@\@2V?$shared_ptr\@$$CBVPotion\@\@\@std\@\@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const LongStrength;
    /**
     * @hash   -1037328316
     * @symbol  ?LongSwiftness\@Potion\@\@2V?$shared_ptr\@$$CBVPotion\@\@\@std\@\@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const LongSwiftness;
    /**
     * @hash   -840217626
     * @symbol  ?LongTurtleMaster\@Potion\@\@2V?$shared_ptr\@$$CBVPotion\@\@\@std\@\@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const LongTurtleMaster;
    /**
     * @hash   1258528038
     * @symbol  ?LongWaterBreathing\@Potion\@\@2V?$shared_ptr\@$$CBVPotion\@\@\@std\@\@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const LongWaterBreathing;
    /**
     * @hash   1905911638
     * @symbol  ?LongWeakness\@Potion\@\@2V?$shared_ptr\@$$CBVPotion\@\@\@std\@\@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const LongWeakness;
    /**
     * @hash   1939061796
     * @symbol  ?Mundane\@Potion\@\@2V?$shared_ptr\@$$CBVPotion\@\@\@std\@\@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const Mundane;
    /**
     * @hash   117545892
     * @symbol  ?Nightvision\@Potion\@\@2V?$shared_ptr\@$$CBVPotion\@\@\@std\@\@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const Nightvision;
    /**
     * @hash   -1507696618
     * @symbol  ?Poison\@Potion\@\@2V?$shared_ptr\@$$CBVPotion\@\@\@std\@\@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const Poison;
    /**
     * @hash   874956518
     * @symbol  ?Regeneration\@Potion\@\@2V?$shared_ptr\@$$CBVPotion\@\@\@std\@\@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const Regeneration;
    /**
     * @hash   -1873079132
     * @symbol  ?SlowFalling\@Potion\@\@2V?$shared_ptr\@$$CBVPotion\@\@\@std\@\@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const SlowFalling;
    /**
     * @hash   -1593632442
     * @symbol  ?Slowness\@Potion\@\@2V?$shared_ptr\@$$CBVPotion\@\@\@std\@\@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const Slowness;
    /**
     * @hash   1334040662
     * @symbol  ?Strength\@Potion\@\@2V?$shared_ptr\@$$CBVPotion\@\@\@std\@\@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const Strength;
    /**
     * @hash   1687602948
     * @symbol  ?StrongHarming\@Potion\@\@2V?$shared_ptr\@$$CBVPotion\@\@\@std\@\@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const StrongHarming;
    /**
     * @hash   -139568028
     * @symbol  ?StrongHealing\@Potion\@\@2V?$shared_ptr\@$$CBVPotion\@\@\@std\@\@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const StrongHealing;
    /**
     * @hash   -1605641308
     * @symbol  ?StrongLeaping\@Potion\@\@2V?$shared_ptr\@$$CBVPotion\@\@\@std\@\@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const StrongLeaping;
    /**
     * @hash   -1304040106
     * @symbol  ?StrongPoison\@Potion\@\@2V?$shared_ptr\@$$CBVPotion\@\@\@std\@\@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const StrongPoison;
    /**
     * @hash   -642909146
     * @symbol  ?StrongRegeneration\@Potion\@\@2V?$shared_ptr\@$$CBVPotion\@\@\@std\@\@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const StrongRegeneration;
    /**
     * @hash   817225350
     * @symbol  ?StrongSlowness\@Potion\@\@2V?$shared_ptr\@$$CBVPotion\@\@\@std\@\@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const StrongSlowness;
    /**
     * @hash   -550068842
     * @symbol  ?StrongStrength\@Potion\@\@2V?$shared_ptr\@$$CBVPotion\@\@\@std\@\@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const StrongStrength;
    /**
     * @hash   -1296221644
     * @symbol  ?StrongSwiftness\@Potion\@\@2V?$shared_ptr\@$$CBVPotion\@\@\@std\@\@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const StrongSwiftness;
    /**
     * @hash   -228139498
     * @symbol  ?StrongTurtleMaster\@Potion\@\@2V?$shared_ptr\@$$CBVPotion\@\@\@std\@\@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const StrongTurtleMaster;
    /**
     * @hash   1277520692
     * @symbol  ?Swiftness\@Potion\@\@2V?$shared_ptr\@$$CBVPotion\@\@\@std\@\@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const Swiftness;
    /**
     * @hash   -311811228
     * @symbol  ?Thick\@Potion\@\@2V?$shared_ptr\@$$CBVPotion\@\@\@std\@\@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const Thick;
    /**
     * @hash   1289726166
     * @symbol  ?TurtleMaster\@Potion\@\@2V?$shared_ptr\@$$CBVPotion\@\@\@std\@\@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const TurtleMaster;
    /**
     * @hash   1843871860
     * @symbol  ?Water\@Potion\@\@2V?$shared_ptr\@$$CBVPotion\@\@\@std\@\@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const Water;
    /**
     * @hash   -550127082
     * @symbol  ?WaterBreathing\@Potion\@\@2V?$shared_ptr\@$$CBVPotion\@\@\@std\@\@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const WaterBreathing;
    /**
     * @hash   1287832646
     * @symbol  ?Weakness\@Potion\@\@2V?$shared_ptr\@$$CBVPotion\@\@\@std\@\@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const Weakness;
    /**
     * @hash   -140637914
     * @symbol  ?Wither\@Potion\@\@2V?$shared_ptr\@$$CBVPotion\@\@\@std\@\@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const Wither;
    /**
     * @hash   1251345449
     * @symbol  ?getBasePotion\@Potion\@\@SA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4PotionType\@1\@\@Z
     */
    MCAPI static std::string getBasePotion(enum class Potion::PotionType);
    /**
     * @hash   1822085026
     * @symbol  ?getPotion\@Potion\@\@SA?AV?$shared_ptr\@$$CBVPotion\@\@\@std\@\@V?$basic_string_span\@$$CBD$0?0\@gsl\@\@\@Z
     */
    MCAPI static class std::shared_ptr<class Potion const> getPotion(class gsl::basic_string_span<char const, -1>);
    /**
     * @hash   994775202
     * @symbol  ?getPotion\@Potion\@\@SA?AV?$shared_ptr\@$$CBVPotion\@\@\@std\@\@H\@Z
     */
    MCAPI static class std::shared_ptr<class Potion const> getPotion(int);
    /**
     * @hash   -1324448472
     * @symbol  ?getPotionCount\@Potion\@\@SAHXZ
     */
    MCAPI static int getPotionCount();
    /**
     * @hash   1227114289
     * @symbol  ?initPotions\@Potion\@\@SAXXZ
     */
    MCAPI static void initPotions();
    /**
     * @hash   1205822401
     * @symbol  ?shutdownPotions\@Potion\@\@SAXXZ
     */
    MCAPI static void shutdownPotions();

//private:
    /**
     * @hash   -705152680
     * @symbol  ??0Potion\@\@AEAA\@V?$basic_string_span\@$$CBD$0?0\@gsl\@\@V?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@V?$vector\@VMobEffectInstance\@\@V?$allocator\@VMobEffectInstance\@\@\@std\@\@\@4\@W4PotionVariant\@0\@\@Z
     */
    MCAPI Potion(class gsl::basic_string_span<char const, -1>, std::vector<std::string>, std::vector<class MobEffectInstance>, enum class Potion::PotionVariant);
    /**
     * @hash   -586450076
     * @symbol  ??0Potion\@\@AEAA\@V?$basic_string_span\@$$CBD$0?0\@gsl\@\@0AEBVMobEffectInstance\@\@W4PotionVariant\@0\@\@Z
     */
    MCAPI Potion(class gsl::basic_string_span<char const, -1>, class gsl::basic_string_span<char const, -1>, class MobEffectInstance const &, enum class Potion::PotionVariant);
    /**
     * @hash   -637963200
     * @symbol  ?_getDescriptionIdCombiningStrings\@Potion\@\@AEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4PotionType\@1\@\@Z
     */
    MCAPI std::string _getDescriptionIdCombiningStrings(enum class Potion::PotionType) const;
    /**
     * @hash   -212674451
     * @symbol  ?_getDescriptionIdSingleString\@Potion\@\@AEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4PotionType\@1\@\@Z
     */
    MCAPI std::string _getDescriptionIdSingleString(enum class Potion::PotionType) const;
    /**
     * @hash   -1445826853
     * @symbol  ?addPotion\@Potion\@\@CAXV?$shared_ptr\@$$CBVPotion\@\@\@std\@\@\@Z
     */
    MCAPI static void addPotion(class std::shared_ptr<class Potion const>);

private:
    /**
     * @hash   820171342
     * @symbol  ?mLastId\@Potion\@\@0HA
     */
    MCAPI static int mLastId;
    /**
     * @hash   -896341089
     * @symbol  ?mPotionsById\@Potion\@\@0PAV?$shared_ptr\@$$CBVPotion\@\@\@std\@\@A
     */
    MCAPI static class std::shared_ptr<class Potion const> mPotionsById[];
    /**
     * @hash   1749611150
     * @symbol  ?mPotionsByName\@Potion\@\@0V?$unordered_map\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@HU?$hash\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@U?$equal_to\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@H\@std\@\@\@2\@\@std\@\@A
     */
    MCAPI static class std::unordered_map<std::string, int, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<struct std::pair<std::string const, int>>> mPotionsByName;

};