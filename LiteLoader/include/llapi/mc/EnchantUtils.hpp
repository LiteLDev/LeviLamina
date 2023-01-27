/**
 * @file  EnchantUtils.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "../../Enchant.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class EnchantUtils.
 *
 */
class EnchantUtils {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENCHANTUTILS
public:
    class EnchantUtils& operator=(class EnchantUtils const &) = delete;
    EnchantUtils(class EnchantUtils const &) = delete;
    EnchantUtils() = delete;
#endif

public:
    /**
     * @hash   480429911
     * @symbol  ?MAX_EXP_REPAIR_COST\@EnchantUtils\@\@2HB
     */
    MCAPI static int const MAX_EXP_REPAIR_COST;
    /**
     * @hash   35211183
     * @symbol  ?PROTECTIONFACTOR_PRIMARYCAP\@EnchantUtils\@\@2HB
     */
    MCAPI static int const PROTECTIONFACTOR_PRIMARYCAP;
    /**
     * @hash   -729307853
     * @symbol  ?PROTECTIONFACTOR_SECONDARYCAP\@EnchantUtils\@\@2HB
     */
    MCAPI static int const PROTECTIONFACTOR_SECONDARYCAP;
    /**
     * @hash   -2026082448
     * @symbol  ?appendEnchantToFormattedText\@EnchantUtils\@\@SAXW4Type\@Enchant\@\@V?$basic_string_span\@$$CBD$0?0\@gsl\@\@AEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static void appendEnchantToFormattedText(enum class Enchant::Type, class gsl::basic_string_span<char const, -1>, std::string &);
    /**
     * @hash   1911419069
     * @symbol  ?applyEnchant\@EnchantUtils\@\@SAHAEAVItemStackBase\@\@AEBVItemEnchants\@\@_N\@Z
     */
    MCAPI static int applyEnchant(class ItemStackBase &, class ItemEnchants const &, bool);
    /**
     * @hash   36973019
     * @symbol  ?applyEnchant\@EnchantUtils\@\@SA_NAEAVItemStackBase\@\@AEBVEnchantmentInstance\@\@_N\@Z
     */
    MCAPI static bool applyEnchant(class ItemStackBase &, class EnchantmentInstance const &, bool);
    /**
     * @hash   -783822302
     * @symbol  ?applyEnchant\@EnchantUtils\@\@SA_NAEAVItemStackBase\@\@W4Type\@Enchant\@\@H_N\@Z
     */
    MCAPI static bool applyEnchant(class ItemStackBase &, enum class Enchant::Type, int, bool);
    /**
     * @hash   -1507205927
     * @symbol  ?canEnchant\@EnchantUtils\@\@SA?AUEnchantResult\@\@AEBVItemStackBase\@\@AEBVEnchantmentInstance\@\@_N\@Z
     */
    MCAPI static struct EnchantResult canEnchant(class ItemStackBase const &, class EnchantmentInstance const &, bool);
    /**
     * @hash   1812813146
     * @symbol  ?canEnchant\@EnchantUtils\@\@SA?AUEnchantResult\@\@AEBVItemStackBase\@\@W4Type\@Enchant\@\@H_N\@Z
     */
    MCAPI static struct EnchantResult canEnchant(class ItemStackBase const &, enum class Enchant::Type, int, bool);
    /**
     * @hash   833052082
     * @symbol  ?combineEnchantedItems\@EnchantUtils\@\@SAHAEBVItemStack\@\@0AEAV2\@_N\@Z
     */
    MCAPI static int combineEnchantedItems(class ItemStack const &, class ItemStack const &, class ItemStack &, bool);
    /**
     * @hash   -1448240623
     * @symbol  ?determineActivation\@EnchantUtils\@\@SAHW4Type\@Enchant\@\@\@Z
     */
    MCAPI static int determineActivation(enum class Enchant::Type);
    /**
     * @hash   -1981094773
     * @symbol  ?determineCompatibility\@EnchantUtils\@\@SAHW4Type\@Enchant\@\@\@Z
     */
    MCAPI static int determineCompatibility(enum class Enchant::Type);
    /**
     * @hash   1932711237
     * @symbol  ?doPostDamageEffects\@EnchantUtils\@\@SAXAEAVActor\@\@0\@Z
     */
    MCAPI static void doPostDamageEffects(class Actor &, class Actor &);
    /**
     * @hash   1303774416
     * @symbol  ?doPostHurtEffects\@EnchantUtils\@\@SAXAEAVMob\@\@0\@Z
     */
    MCAPI static void doPostHurtEffects(class Mob &, class Mob &);
    /**
     * @hash   -1276963981
     * @symbol  ?generateEnchantedBook\@EnchantUtils\@\@SA?AVItemInstance\@\@AEBVEnchantmentInstance\@\@\@Z
     */
    MCAPI static class ItemInstance generateEnchantedBook(class EnchantmentInstance const &);
    /**
     * @hash   1169259695
     * @symbol  ?getAvailableEnchantmentResults\@EnchantUtils\@\@SA?AV?$vector\@U?$pair\@VEnchantmentInstance\@\@H\@std\@\@V?$allocator\@U?$pair\@VEnchantmentInstance\@\@H\@std\@\@\@2\@\@std\@\@PEBVItem\@\@H_N\@Z
     */
    MCAPI static std::vector<struct std::pair<class EnchantmentInstance, int>> getAvailableEnchantmentResults(class Item const *, int, bool);
    /**
     * @hash   1811078542
     * @symbol  ?getBookCasePositions\@EnchantUtils\@\@SA?AV?$vector\@VVec3\@\@V?$allocator\@VVec3\@\@\@std\@\@\@std\@\@AEAVBlockSource\@\@AEBVVec3\@\@\@Z
     */
    MCAPI static std::vector<class Vec3> getBookCasePositions(class BlockSource &, class Vec3 const &);
    /**
     * @hash   -82940441
     * @symbol  ?getCurses\@EnchantUtils\@\@SAXAEBVItemStackBase\@\@AEAV?$vector\@VEnchantmentInstance\@\@V?$allocator\@VEnchantmentInstance\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI static void getCurses(class ItemStackBase const &, std::vector<class EnchantmentInstance> &);
    /**
     * @hash   166147388
     * @symbol  ?getDamageReduction\@EnchantUtils\@\@SAMAEBVActorDamageSource\@\@AEBVMob\@\@\@Z
     */
    MCAPI static float getDamageReduction(class ActorDamageSource const &, class Mob const &);
    /**
     * @hash   -747012646
     * @symbol  ?getEnchantCosts\@EnchantUtils\@\@SA?AV?$vector\@HV?$allocator\@H\@std\@\@\@std\@\@AEBVItemStackBase\@\@H\@Z
     */
    MCAPI static std::vector<int> getEnchantCosts(class ItemStackBase const &, int);
    /**
     * @hash   -616834172
     * @symbol  ?getEnchantLevel\@EnchantUtils\@\@SAHW4Type\@Enchant\@\@AEBVItemStackBase\@\@\@Z
     */
    MCAPI static int getEnchantLevel(enum class Enchant::Type, class ItemStackBase const &);
    /**
     * @hash   -319734430
     * @symbol  ?getEnchantNameAndLevel\@EnchantUtils\@\@SA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4Type\@Enchant\@\@H\@Z
     */
    MCAPI static std::string getEnchantNameAndLevel(enum class Enchant::Type, int);
    /**
     * @hash   622581472
     * @symbol  ?getEnchantingTablePositions\@EnchantUtils\@\@SA?AV?$vector\@VVec3\@\@V?$allocator\@VVec3\@\@\@std\@\@\@std\@\@AEAVBlockSource\@\@AEBVVec3\@\@\@Z
     */
    MCAPI static std::vector<class Vec3> getEnchantingTablePositions(class BlockSource &, class Vec3 const &);
    /**
     * @hash   894106707
     * @symbol  ?getEnchantmentId\@EnchantUtils\@\@SA?AW4Type\@Enchant\@\@AEBVHashedString\@\@\@Z
     */
    MCAPI static enum class Enchant::Type getEnchantmentId(class HashedString const &);
    /**
     * @hash   305260524
     * @symbol  ?getLegalEnchants\@EnchantUtils\@\@SA?AV?$vector\@HV?$allocator\@H\@std\@\@\@std\@\@PEBVItem\@\@\@Z
     */
    MCAPI static std::vector<int> getLegalEnchants(class Item const *);
    /**
     * @hash   1629510961
     * @symbol  ?getLootableRandomEnchantIndex\@EnchantUtils\@\@SAHAEAVRandom\@\@\@Z
     */
    MCAPI static int getLootableRandomEnchantIndex(class Random &);
    /**
     * @hash   562386895
     * @symbol  ?getMeleeDamageBonus\@EnchantUtils\@\@SAMAEBVActor\@\@AEAV2\@\@Z
     */
    MCAPI static float getMeleeDamageBonus(class Actor const &, class Actor &);
    /**
     * @hash   396226723
     * @symbol  ?getRandomDamagedItemWithMending\@EnchantUtils\@\@SAAEBVItemStack\@\@AEBVMob\@\@\@Z
     */
    MCAPI static class ItemStack const & getRandomDamagedItemWithMending(class Mob const &);
    /**
     * @hash   1461991135
     * @symbol  ?getRandomItemWith\@EnchantUtils\@\@SAAEBVItemStack\@\@W4Type\@Enchant\@\@AEBVMob\@\@W4EquipmentFilter\@\@\@Z
     */
    MCAPI static class ItemStack const & getRandomItemWith(enum class Enchant::Type, class Mob const &, enum class EquipmentFilter);
    /**
     * @hash   -2076863616
     * @symbol  ?getRandomName\@EnchantUtils\@\@SA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI static std::string getRandomName();
    /**
     * @hash   -1652615608
     * @symbol  ?getTotalProtectionLevels\@EnchantUtils\@\@SAHW4Type\@Enchant\@\@AEBVMob\@\@\@Z
     */
    MCAPI static int getTotalProtectionLevels(enum class Enchant::Type, class Mob const &);
    /**
     * @hash   1034245285
     * @symbol  ?hasCurse\@EnchantUtils\@\@SA_NAEBVItemStackBase\@\@\@Z
     */
    MCAPI static bool hasCurse(class ItemStackBase const &);
    /**
     * @hash   1989614922
     * @symbol  ?hasEnchant\@EnchantUtils\@\@SA_NW4Type\@Enchant\@\@AEBVItemStackBase\@\@\@Z
     */
    MCAPI static bool hasEnchant(enum class Enchant::Type, class ItemStackBase const &);
    /**
     * @hash   1245136029
     * @symbol  ?isCurse\@EnchantUtils\@\@SA_NW4Type\@Enchant\@\@\@Z
     */
    MCAPI static bool isCurse(enum class Enchant::Type);
    /**
     * @hash   -338780381
     * @symbol  ?randomlyEnchant\@EnchantUtils\@\@SAXAEAVItemStack\@\@HH_N\@Z
     */
    MCAPI static void randomlyEnchant(class ItemStack &, int, int, bool);
    /**
     * @hash   -1697565303
     * @symbol  ?randomlyEnchant\@EnchantUtils\@\@SAXAEAVItemInstance\@\@HH_N\@Z
     */
    MCAPI static void randomlyEnchant(class ItemInstance &, int, int, bool);
    /**
     * @hash   -379802560
     * @symbol  ?removeEnchants\@EnchantUtils\@\@SAXAEAVItemStack\@\@\@Z
     */
    MCAPI static void removeEnchants(class ItemStack &);
    /**
     * @hash   637766181
     * @symbol  ?selectEnchantments\@EnchantUtils\@\@SA?AVItemEnchants\@\@PEBVItem\@\@HH_N\@Z
     */
    MCAPI static class ItemEnchants selectEnchantments(class Item const *, int, int, bool);

//private:
    /**
     * @hash   -1115520457
     * @symbol  ?_convertBookCheck\@EnchantUtils\@\@CAXAEAVItemStackBase\@\@\@Z
     */
    MCAPI static void _convertBookCheck(class ItemStackBase &);

private:
    /**
     * @hash   1401647255
     * @symbol  ?mEnchantmentNames\@EnchantUtils\@\@0V?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@A
     */
    MCAPI static std::vector<std::string> mEnchantmentNames;

};