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
     * @symbol  ??0Potion\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI Potion(class Potion const &);
    /**
     * @symbol  ?appendFormattedPotionText\@Potion\@\@QEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4PotionType\@1\@W4PotionVariant\@1\@AEBVPlayer\@\@M\@Z
     */
    MCAPI void appendFormattedPotionText(std::string &, enum class Potion::PotionType, enum class Potion::PotionVariant, class Player const &, float) const;
    /**
     * @symbol  ?effectDurationToString\@Potion\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4PotionType\@1\@MAEBVMobEffectInstance\@\@\@Z
     */
    MCAPI std::string effectDurationToString(enum class Potion::PotionType, float, class MobEffectInstance const &) const;
    /**
     * @symbol  ?effectPotencyToString\@Potion\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVMobEffectInstance\@\@\@Z
     */
    MCAPI std::string effectPotencyToString(class MobEffectInstance const &) const;
    /**
     * @symbol  ?getDescriptionId\@Potion\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4PotionType\@1\@\@Z
     */
    MCAPI std::string getDescriptionId(enum class Potion::PotionType) const;
    /**
     * @symbol  ?getDescriptionId\@Potion\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getDescriptionId() const;
    /**
     * @symbol  ?getMobEffect\@Potion\@\@QEBAAEBVMobEffectInstance\@\@XZ
     */
    MCAPI class MobEffectInstance const & getMobEffect() const;
    /**
     * @symbol  ?getMobEffectId\@Potion\@\@QEBAHXZ
     */
    MCAPI int getMobEffectId() const;
    /**
     * @symbol  ?getMobEffects\@Potion\@\@QEBAAEBV?$vector\@VMobEffectInstance\@\@V?$allocator\@VMobEffectInstance\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<class MobEffectInstance> const & getMobEffects() const;
    /**
     * @symbol  ?getPotentencyDescription\@Potion\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4PotionType\@1\@M\@Z
     */
    MCAPI std::string getPotentencyDescription(enum class Potion::PotionType, float) const;
    /**
     * @symbol  ?getPotentencyDescription\@Potion\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4PotionType\@1\@MV?$basic_string_span\@$$CBD$0?0\@gsl\@\@AEBVMobEffectInstance\@\@\@Z
     */
    MCAPI std::string getPotentencyDescription(enum class Potion::PotionType, float, class gsl::basic_string_span<char const, -1>, class MobEffectInstance const &) const;
    /**
     * @symbol  ?getPotionId\@Potion\@\@QEBAHXZ
     */
    MCAPI int getPotionId() const;
    /**
     * @symbol  ?getPotionVariant\@Potion\@\@QEBA?AW4PotionVariant\@1\@XZ
     */
    MCAPI enum class Potion::PotionVariant getPotionVariant() const;
    /**
     * @symbol  ?getPrefix\@Potion\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getPrefix() const;
    /**
     * @symbol  ??1Potion\@\@QEAA\@XZ
     */
    MCAPI ~Potion();
    /**
     * @symbol  ?Awkward\@Potion\@\@2V?$shared_ptr\@$$CBVPotion\@\@\@std\@\@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const Awkward;
    /**
     * @symbol  ?FireResistance\@Potion\@\@2V?$shared_ptr\@$$CBVPotion\@\@\@std\@\@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const FireResistance;
    /**
     * @symbol  ?Harming\@Potion\@\@2V?$shared_ptr\@$$CBVPotion\@\@\@std\@\@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const Harming;
    /**
     * @symbol  ?Healing\@Potion\@\@2V?$shared_ptr\@$$CBVPotion\@\@\@std\@\@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const Healing;
    /**
     * @symbol  ?Invisibility\@Potion\@\@2V?$shared_ptr\@$$CBVPotion\@\@\@std\@\@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const Invisibility;
    /**
     * @symbol  ?Leaping\@Potion\@\@2V?$shared_ptr\@$$CBVPotion\@\@\@std\@\@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const Leaping;
    /**
     * @symbol  ?LongFireResistance\@Potion\@\@2V?$shared_ptr\@$$CBVPotion\@\@\@std\@\@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const LongFireResistance;
    /**
     * @symbol  ?LongInvisibility\@Potion\@\@2V?$shared_ptr\@$$CBVPotion\@\@\@std\@\@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const LongInvisibility;
    /**
     * @symbol  ?LongLeaping\@Potion\@\@2V?$shared_ptr\@$$CBVPotion\@\@\@std\@\@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const LongLeaping;
    /**
     * @symbol  ?LongMundane\@Potion\@\@2V?$shared_ptr\@$$CBVPotion\@\@\@std\@\@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const LongMundane;
    /**
     * @symbol  ?LongNightvision\@Potion\@\@2V?$shared_ptr\@$$CBVPotion\@\@\@std\@\@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const LongNightvision;
    /**
     * @symbol  ?LongPoison\@Potion\@\@2V?$shared_ptr\@$$CBVPotion\@\@\@std\@\@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const LongPoison;
    /**
     * @symbol  ?LongRegeneration\@Potion\@\@2V?$shared_ptr\@$$CBVPotion\@\@\@std\@\@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const LongRegeneration;
    /**
     * @symbol  ?LongSlowFalling\@Potion\@\@2V?$shared_ptr\@$$CBVPotion\@\@\@std\@\@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const LongSlowFalling;
    /**
     * @symbol  ?LongSlowness\@Potion\@\@2V?$shared_ptr\@$$CBVPotion\@\@\@std\@\@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const LongSlowness;
    /**
     * @symbol  ?LongStrength\@Potion\@\@2V?$shared_ptr\@$$CBVPotion\@\@\@std\@\@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const LongStrength;
    /**
     * @symbol  ?LongSwiftness\@Potion\@\@2V?$shared_ptr\@$$CBVPotion\@\@\@std\@\@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const LongSwiftness;
    /**
     * @symbol  ?LongTurtleMaster\@Potion\@\@2V?$shared_ptr\@$$CBVPotion\@\@\@std\@\@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const LongTurtleMaster;
    /**
     * @symbol  ?LongWaterBreathing\@Potion\@\@2V?$shared_ptr\@$$CBVPotion\@\@\@std\@\@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const LongWaterBreathing;
    /**
     * @symbol  ?LongWeakness\@Potion\@\@2V?$shared_ptr\@$$CBVPotion\@\@\@std\@\@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const LongWeakness;
    /**
     * @symbol  ?Mundane\@Potion\@\@2V?$shared_ptr\@$$CBVPotion\@\@\@std\@\@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const Mundane;
    /**
     * @symbol  ?Nightvision\@Potion\@\@2V?$shared_ptr\@$$CBVPotion\@\@\@std\@\@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const Nightvision;
    /**
     * @symbol  ?Poison\@Potion\@\@2V?$shared_ptr\@$$CBVPotion\@\@\@std\@\@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const Poison;
    /**
     * @symbol  ?Regeneration\@Potion\@\@2V?$shared_ptr\@$$CBVPotion\@\@\@std\@\@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const Regeneration;
    /**
     * @symbol  ?SlowFalling\@Potion\@\@2V?$shared_ptr\@$$CBVPotion\@\@\@std\@\@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const SlowFalling;
    /**
     * @symbol  ?Slowness\@Potion\@\@2V?$shared_ptr\@$$CBVPotion\@\@\@std\@\@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const Slowness;
    /**
     * @symbol  ?Strength\@Potion\@\@2V?$shared_ptr\@$$CBVPotion\@\@\@std\@\@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const Strength;
    /**
     * @symbol  ?StrongHarming\@Potion\@\@2V?$shared_ptr\@$$CBVPotion\@\@\@std\@\@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const StrongHarming;
    /**
     * @symbol  ?StrongHealing\@Potion\@\@2V?$shared_ptr\@$$CBVPotion\@\@\@std\@\@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const StrongHealing;
    /**
     * @symbol  ?StrongLeaping\@Potion\@\@2V?$shared_ptr\@$$CBVPotion\@\@\@std\@\@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const StrongLeaping;
    /**
     * @symbol  ?StrongPoison\@Potion\@\@2V?$shared_ptr\@$$CBVPotion\@\@\@std\@\@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const StrongPoison;
    /**
     * @symbol  ?StrongRegeneration\@Potion\@\@2V?$shared_ptr\@$$CBVPotion\@\@\@std\@\@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const StrongRegeneration;
    /**
     * @symbol  ?StrongSlowness\@Potion\@\@2V?$shared_ptr\@$$CBVPotion\@\@\@std\@\@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const StrongSlowness;
    /**
     * @symbol  ?StrongStrength\@Potion\@\@2V?$shared_ptr\@$$CBVPotion\@\@\@std\@\@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const StrongStrength;
    /**
     * @symbol  ?StrongSwiftness\@Potion\@\@2V?$shared_ptr\@$$CBVPotion\@\@\@std\@\@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const StrongSwiftness;
    /**
     * @symbol  ?StrongTurtleMaster\@Potion\@\@2V?$shared_ptr\@$$CBVPotion\@\@\@std\@\@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const StrongTurtleMaster;
    /**
     * @symbol  ?Swiftness\@Potion\@\@2V?$shared_ptr\@$$CBVPotion\@\@\@std\@\@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const Swiftness;
    /**
     * @symbol  ?Thick\@Potion\@\@2V?$shared_ptr\@$$CBVPotion\@\@\@std\@\@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const Thick;
    /**
     * @symbol  ?TurtleMaster\@Potion\@\@2V?$shared_ptr\@$$CBVPotion\@\@\@std\@\@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const TurtleMaster;
    /**
     * @symbol  ?Water\@Potion\@\@2V?$shared_ptr\@$$CBVPotion\@\@\@std\@\@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const Water;
    /**
     * @symbol  ?WaterBreathing\@Potion\@\@2V?$shared_ptr\@$$CBVPotion\@\@\@std\@\@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const WaterBreathing;
    /**
     * @symbol  ?Weakness\@Potion\@\@2V?$shared_ptr\@$$CBVPotion\@\@\@std\@\@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const Weakness;
    /**
     * @symbol  ?Wither\@Potion\@\@2V?$shared_ptr\@$$CBVPotion\@\@\@std\@\@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const Wither;
    /**
     * @symbol  ?getBasePotion\@Potion\@\@SA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4PotionType\@1\@\@Z
     */
    MCAPI static std::string getBasePotion(enum class Potion::PotionType);
    /**
     * @symbol  ?getPotion\@Potion\@\@SA?AV?$shared_ptr\@$$CBVPotion\@\@\@std\@\@V?$basic_string_span\@$$CBD$0?0\@gsl\@\@\@Z
     */
    MCAPI static class std::shared_ptr<class Potion const> getPotion(class gsl::basic_string_span<char const, -1>);
    /**
     * @symbol  ?getPotion\@Potion\@\@SA?AV?$shared_ptr\@$$CBVPotion\@\@\@std\@\@H\@Z
     */
    MCAPI static class std::shared_ptr<class Potion const> getPotion(int);
    /**
     * @symbol  ?getPotionCount\@Potion\@\@SAHXZ
     */
    MCAPI static int getPotionCount();
    /**
     * @symbol  ?initPotions\@Potion\@\@SAXXZ
     */
    MCAPI static void initPotions();
    /**
     * @symbol  ?shutdownPotions\@Potion\@\@SAXXZ
     */
    MCAPI static void shutdownPotions();

//private:
    /**
     * @symbol  ??0Potion\@\@AEAA\@V?$basic_string_span\@$$CBD$0?0\@gsl\@\@V?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@V?$vector\@VMobEffectInstance\@\@V?$allocator\@VMobEffectInstance\@\@\@std\@\@\@4\@W4PotionVariant\@0\@\@Z
     */
    MCAPI Potion(class gsl::basic_string_span<char const, -1>, std::vector<std::string>, std::vector<class MobEffectInstance>, enum class Potion::PotionVariant);
    /**
     * @symbol  ??0Potion\@\@AEAA\@V?$basic_string_span\@$$CBD$0?0\@gsl\@\@0AEBVMobEffectInstance\@\@W4PotionVariant\@0\@\@Z
     */
    MCAPI Potion(class gsl::basic_string_span<char const, -1>, class gsl::basic_string_span<char const, -1>, class MobEffectInstance const &, enum class Potion::PotionVariant);
    /**
     * @symbol  ?_getDescriptionIdCombiningStrings\@Potion\@\@AEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4PotionType\@1\@\@Z
     */
    MCAPI std::string _getDescriptionIdCombiningStrings(enum class Potion::PotionType) const;
    /**
     * @symbol  ?_getDescriptionIdSingleString\@Potion\@\@AEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4PotionType\@1\@\@Z
     */
    MCAPI std::string _getDescriptionIdSingleString(enum class Potion::PotionType) const;
    /**
     * @symbol  ?addPotion\@Potion\@\@CAXV?$shared_ptr\@$$CBVPotion\@\@\@std\@\@\@Z
     */
    MCAPI static void addPotion(class std::shared_ptr<class Potion const>);

private:
    /**
     * @symbol  ?mLastId\@Potion\@\@0HA
     */
    MCAPI static int mLastId;
    /**
     * @symbol  ?mPotionsById\@Potion\@\@0PAV?$shared_ptr\@$$CBVPotion\@\@\@std\@\@A
     */
    MCAPI static class std::shared_ptr<class Potion const> mPotionsById[];
    /**
     * @symbol  ?mPotionsByName\@Potion\@\@0V?$unordered_map\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@HU?$hash\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@U?$equal_to\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@H\@std\@\@\@2\@\@std\@\@A
     */
    MCAPI static class std::unordered_map<std::string, int, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<struct std::pair<std::string const, int>>> mPotionsByName;

};