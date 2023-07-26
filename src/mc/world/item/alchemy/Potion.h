#pragma once

#include "mc/_HeaderOutputPredefine.h"

class Potion {
public:
    // Potion inner types declare
    // clang-format off

    // clang-format on

    // Potion inner types define
    enum class PotionType {};

    enum class PotionVariant {};

public:
    // prevent constructor by default
    Potion& operator=(Potion const&) = delete;
    Potion()                         = delete;

public:
    /**
     * @symbol ??0Potion\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI Potion(class Potion const&); // NOLINT
    /**
     * @symbol
     * ?appendFormattedPotionText\@Potion\@\@QEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4PotionType\@1\@W4PotionVariant\@1\@AEBVPlayer\@\@M\@Z
     */
    MCAPI void appendFormattedPotionText(
        std::string&,
        enum class Potion::PotionType,
        enum class Potion::PotionVariant,
        class Player const&,
        float
    ) const; // NOLINT
    /**
     * @symbol
     * ?effectDurationToString\@Potion\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4PotionType\@1\@MAEBVMobEffectInstance\@\@\@Z
     */
    MCAPI std::string
          effectDurationToString(enum class Potion::PotionType, float, class MobEffectInstance const&) const; // NOLINT
    /**
     * @symbol
     * ?effectPotencyToString\@Potion\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVMobEffectInstance\@\@\@Z
     */
    MCAPI std::string effectPotencyToString(class MobEffectInstance const&) const; // NOLINT
    /**
     * @symbol
     * ?getDescriptionId\@Potion\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getDescriptionId() const; // NOLINT
    /**
     * @symbol
     * ?getDescriptionId\@Potion\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4PotionType\@1\@\@Z
     */
    MCAPI std::string getDescriptionId(enum class Potion::PotionType) const; // NOLINT
    /**
     * @symbol ?getMobEffect\@Potion\@\@QEBAAEBVMobEffectInstance\@\@XZ
     */
    MCAPI class MobEffectInstance const& getMobEffect() const; // NOLINT
    /**
     * @symbol ?getMobEffectId\@Potion\@\@QEBAHXZ
     */
    MCAPI int getMobEffectId() const; // NOLINT
    /**
     * @symbol
     * ?getMobEffects\@Potion\@\@QEBAAEBV?$vector\@VMobEffectInstance\@\@V?$allocator\@VMobEffectInstance\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<class MobEffectInstance> const& getMobEffects() const; // NOLINT
    /**
     * @symbol
     * ?getPotentencyDescription\@Potion\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4PotionType\@1\@MV?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@3\@AEBVMobEffectInstance\@\@\@Z
     */
    MCAPI std::string
    getPotentencyDescription(enum class Potion::PotionType, float, class std::basic_string_view<char, struct std::char_traits<char>>, class MobEffectInstance const&)
        const; // NOLINT
    /**
     * @symbol
     * ?getPotentencyDescription\@Potion\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4PotionType\@1\@M\@Z
     */
    MCAPI std::string getPotentencyDescription(enum class Potion::PotionType, float) const; // NOLINT
    /**
     * @symbol ?getPotionId\@Potion\@\@QEBAHXZ
     */
    MCAPI int getPotionId() const; // NOLINT
    /**
     * @symbol ?getPotionVariant\@Potion\@\@QEBA?AW4PotionVariant\@1\@XZ
     */
    MCAPI enum class Potion::PotionVariant getPotionVariant() const; // NOLINT
    /**
     * @symbol ?getPrefix\@Potion\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getPrefix() const; // NOLINT
    /**
     * @symbol ??1Potion\@\@QEAA\@XZ
     */
    MCAPI ~Potion(); // NOLINT
    /**
     * @symbol
     * ?getBasePotion\@Potion\@\@SA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4PotionType\@1\@\@Z
     */
    MCAPI static std::string getBasePotion(enum class Potion::PotionType); // NOLINT
    /**
     * @symbol
     * ?getPotion\@Potion\@\@SA?AV?$shared_ptr\@$$CBVPotion\@\@\@std\@\@V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@3\@\@Z
     */
    MCAPI static class std::shared_ptr<class Potion const>
        getPotion(class std::basic_string_view<char, struct std::char_traits<char>>); // NOLINT
    /**
     * @symbol ?getPotion\@Potion\@\@SA?AV?$shared_ptr\@$$CBVPotion\@\@\@std\@\@H\@Z
     */
    MCAPI static class std::shared_ptr<class Potion const> getPotion(int); // NOLINT
    /**
     * @symbol ?getPotionCount\@Potion\@\@SAHXZ
     */
    MCAPI static int getPotionCount(); // NOLINT
    /**
     * @symbol ?initPotions\@Potion\@\@SAXXZ
     */
    MCAPI static void initPotions(); // NOLINT
    /**
     * @symbol ?shutdownPotions\@Potion\@\@SAXXZ
     */
    MCAPI static void shutdownPotions(); // NOLINT
    /**
     * @symbol ?Awkward\@Potion\@\@2V?$shared_ptr\@$$CBVPotion\@\@\@std\@\@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const Awkward; // NOLINT
    /**
     * @symbol ?FireResistance\@Potion\@\@2V?$shared_ptr\@$$CBVPotion\@\@\@std\@\@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const FireResistance; // NOLINT
    /**
     * @symbol ?Harming\@Potion\@\@2V?$shared_ptr\@$$CBVPotion\@\@\@std\@\@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const Harming; // NOLINT
    /**
     * @symbol ?Healing\@Potion\@\@2V?$shared_ptr\@$$CBVPotion\@\@\@std\@\@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const Healing; // NOLINT
    /**
     * @symbol ?Invisibility\@Potion\@\@2V?$shared_ptr\@$$CBVPotion\@\@\@std\@\@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const Invisibility; // NOLINT
    /**
     * @symbol ?Leaping\@Potion\@\@2V?$shared_ptr\@$$CBVPotion\@\@\@std\@\@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const Leaping; // NOLINT
    /**
     * @symbol ?LongFireResistance\@Potion\@\@2V?$shared_ptr\@$$CBVPotion\@\@\@std\@\@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const LongFireResistance; // NOLINT
    /**
     * @symbol ?LongInvisibility\@Potion\@\@2V?$shared_ptr\@$$CBVPotion\@\@\@std\@\@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const LongInvisibility; // NOLINT
    /**
     * @symbol ?LongLeaping\@Potion\@\@2V?$shared_ptr\@$$CBVPotion\@\@\@std\@\@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const LongLeaping; // NOLINT
    /**
     * @symbol ?LongMundane\@Potion\@\@2V?$shared_ptr\@$$CBVPotion\@\@\@std\@\@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const LongMundane; // NOLINT
    /**
     * @symbol ?LongNightvision\@Potion\@\@2V?$shared_ptr\@$$CBVPotion\@\@\@std\@\@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const LongNightvision; // NOLINT
    /**
     * @symbol ?LongPoison\@Potion\@\@2V?$shared_ptr\@$$CBVPotion\@\@\@std\@\@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const LongPoison; // NOLINT
    /**
     * @symbol ?LongRegeneration\@Potion\@\@2V?$shared_ptr\@$$CBVPotion\@\@\@std\@\@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const LongRegeneration; // NOLINT
    /**
     * @symbol ?LongSlowFalling\@Potion\@\@2V?$shared_ptr\@$$CBVPotion\@\@\@std\@\@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const LongSlowFalling; // NOLINT
    /**
     * @symbol ?LongSlowness\@Potion\@\@2V?$shared_ptr\@$$CBVPotion\@\@\@std\@\@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const LongSlowness; // NOLINT
    /**
     * @symbol ?LongStrength\@Potion\@\@2V?$shared_ptr\@$$CBVPotion\@\@\@std\@\@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const LongStrength; // NOLINT
    /**
     * @symbol ?LongSwiftness\@Potion\@\@2V?$shared_ptr\@$$CBVPotion\@\@\@std\@\@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const LongSwiftness; // NOLINT
    /**
     * @symbol ?LongTurtleMaster\@Potion\@\@2V?$shared_ptr\@$$CBVPotion\@\@\@std\@\@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const LongTurtleMaster; // NOLINT
    /**
     * @symbol ?LongWaterBreathing\@Potion\@\@2V?$shared_ptr\@$$CBVPotion\@\@\@std\@\@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const LongWaterBreathing; // NOLINT
    /**
     * @symbol ?LongWeakness\@Potion\@\@2V?$shared_ptr\@$$CBVPotion\@\@\@std\@\@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const LongWeakness; // NOLINT
    /**
     * @symbol ?Mundane\@Potion\@\@2V?$shared_ptr\@$$CBVPotion\@\@\@std\@\@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const Mundane; // NOLINT
    /**
     * @symbol ?Nightvision\@Potion\@\@2V?$shared_ptr\@$$CBVPotion\@\@\@std\@\@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const Nightvision; // NOLINT
    /**
     * @symbol ?Poison\@Potion\@\@2V?$shared_ptr\@$$CBVPotion\@\@\@std\@\@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const Poison; // NOLINT
    /**
     * @symbol ?Regeneration\@Potion\@\@2V?$shared_ptr\@$$CBVPotion\@\@\@std\@\@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const Regeneration; // NOLINT
    /**
     * @symbol ?SlowFalling\@Potion\@\@2V?$shared_ptr\@$$CBVPotion\@\@\@std\@\@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const SlowFalling; // NOLINT
    /**
     * @symbol ?Slowness\@Potion\@\@2V?$shared_ptr\@$$CBVPotion\@\@\@std\@\@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const Slowness; // NOLINT
    /**
     * @symbol ?Strength\@Potion\@\@2V?$shared_ptr\@$$CBVPotion\@\@\@std\@\@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const Strength; // NOLINT
    /**
     * @symbol ?StrongHarming\@Potion\@\@2V?$shared_ptr\@$$CBVPotion\@\@\@std\@\@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const StrongHarming; // NOLINT
    /**
     * @symbol ?StrongHealing\@Potion\@\@2V?$shared_ptr\@$$CBVPotion\@\@\@std\@\@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const StrongHealing; // NOLINT
    /**
     * @symbol ?StrongLeaping\@Potion\@\@2V?$shared_ptr\@$$CBVPotion\@\@\@std\@\@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const StrongLeaping; // NOLINT
    /**
     * @symbol ?StrongPoison\@Potion\@\@2V?$shared_ptr\@$$CBVPotion\@\@\@std\@\@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const StrongPoison; // NOLINT
    /**
     * @symbol ?StrongRegeneration\@Potion\@\@2V?$shared_ptr\@$$CBVPotion\@\@\@std\@\@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const StrongRegeneration; // NOLINT
    /**
     * @symbol ?StrongSlowness\@Potion\@\@2V?$shared_ptr\@$$CBVPotion\@\@\@std\@\@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const StrongSlowness; // NOLINT
    /**
     * @symbol ?StrongStrength\@Potion\@\@2V?$shared_ptr\@$$CBVPotion\@\@\@std\@\@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const StrongStrength; // NOLINT
    /**
     * @symbol ?StrongSwiftness\@Potion\@\@2V?$shared_ptr\@$$CBVPotion\@\@\@std\@\@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const StrongSwiftness; // NOLINT
    /**
     * @symbol ?StrongTurtleMaster\@Potion\@\@2V?$shared_ptr\@$$CBVPotion\@\@\@std\@\@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const StrongTurtleMaster; // NOLINT
    /**
     * @symbol ?Swiftness\@Potion\@\@2V?$shared_ptr\@$$CBVPotion\@\@\@std\@\@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const Swiftness; // NOLINT
    /**
     * @symbol ?Thick\@Potion\@\@2V?$shared_ptr\@$$CBVPotion\@\@\@std\@\@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const Thick; // NOLINT
    /**
     * @symbol ?TurtleMaster\@Potion\@\@2V?$shared_ptr\@$$CBVPotion\@\@\@std\@\@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const TurtleMaster; // NOLINT
    /**
     * @symbol ?Water\@Potion\@\@2V?$shared_ptr\@$$CBVPotion\@\@\@std\@\@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const Water; // NOLINT
    /**
     * @symbol ?WaterBreathing\@Potion\@\@2V?$shared_ptr\@$$CBVPotion\@\@\@std\@\@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const WaterBreathing; // NOLINT
    /**
     * @symbol ?Weakness\@Potion\@\@2V?$shared_ptr\@$$CBVPotion\@\@\@std\@\@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const Weakness; // NOLINT
    /**
     * @symbol ?Wither\@Potion\@\@2V?$shared_ptr\@$$CBVPotion\@\@\@std\@\@B
     */
    MCAPI static class std::shared_ptr<class Potion const> const Wither; // NOLINT

    // private:
    /**
     * @symbol
     * ??0Potion\@\@AEAA\@V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@V?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@2\@V?$vector\@VMobEffectInstance\@\@V?$allocator\@VMobEffectInstance\@\@\@std\@\@\@2\@W4PotionVariant\@0\@\@Z
     */
    MCAPI Potion(
        class std::basic_string_view<char, struct std::char_traits<char>>,
        std::vector<std::string>,
        std::vector<class MobEffectInstance>,
        enum class Potion::PotionVariant
    ); // NOLINT
    /**
     * @symbol
     * ??0Potion\@\@AEAA\@V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@0AEBVMobEffectInstance\@\@W4PotionVariant\@0\@\@Z
     */
    MCAPI Potion(
        class std::basic_string_view<char, struct std::char_traits<char>>,
        class std::basic_string_view<char, struct std::char_traits<char>>,
        class MobEffectInstance const&,
        enum class Potion::PotionVariant
    ); // NOLINT
    /**
     * @symbol
     * ?_getDescriptionIdCombiningStrings\@Potion\@\@AEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4PotionType\@1\@\@Z
     */
    MCAPI std::string _getDescriptionIdCombiningStrings(enum class Potion::PotionType) const; // NOLINT
    /**
     * @symbol
     * ?_getDescriptionIdSingleString\@Potion\@\@AEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4PotionType\@1\@\@Z
     */
    MCAPI std::string _getDescriptionIdSingleString(enum class Potion::PotionType) const; // NOLINT
    /**
     * @symbol ?addPotion\@Potion\@\@CAXV?$shared_ptr\@$$CBVPotion\@\@\@std\@\@\@Z
     */
    MCAPI static void addPotion(class std::shared_ptr<class Potion const>); // NOLINT

private:
    /**
     * @symbol ?mLastId\@Potion\@\@0HA
     */
    MCAPI static int mLastId; // NOLINT
    /**
     * @symbol ?mPotionsById\@Potion\@\@0PAV?$shared_ptr\@$$CBVPotion\@\@\@std\@\@A
     */
    MCAPI static class std::shared_ptr<class Potion const> mPotionsById[]; // NOLINT
    /**
     * @symbol
     * ?mPotionsByName\@Potion\@\@0V?$unordered_map\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@HU?$hash\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@U?$equal_to\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@H\@std\@\@\@2\@\@std\@\@A
     */
    MCAPI static class std::unordered_map<
        std::string,
        int,
        struct std::hash<std::string>,
        struct std::equal_to<std::string>,
        class std::allocator<struct std::pair<std::string const, int>>>
        mPotionsByName; // NOLINT
};
