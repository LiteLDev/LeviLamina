#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/enchanting/Enchant.h"

class EnchantUtils {

public:
    // prevent constructor by default
    EnchantUtils& operator=(EnchantUtils const&) = delete;
    EnchantUtils(EnchantUtils const&)            = delete;
    EnchantUtils()                               = delete;

public:
    /**
     * @symbol
     * ?appendEnchantToFormattedText\@EnchantUtils\@\@SAXW4Type\@Enchant\@\@V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@AEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@5\@\@Z
     */
    MCAPI static void
    appendEnchantToFormattedText(enum class Enchant::Type, class std::basic_string_view<char, struct std::char_traits<char>>, std::string&); // NOLINT
    /**
     * @symbol ?applyEnchant\@EnchantUtils\@\@SA_NAEAVItemStackBase\@\@AEBVEnchantmentInstance\@\@_N\@Z
     */
    MCAPI static bool applyEnchant(class ItemStackBase&, class EnchantmentInstance const&, bool); // NOLINT
    /**
     * @symbol ?applyEnchant\@EnchantUtils\@\@SAHAEAVItemStackBase\@\@AEBVItemEnchants\@\@_N\@Z
     */
    MCAPI static int applyEnchant(class ItemStackBase&, class ItemEnchants const&, bool); // NOLINT
    /**
     * @symbol ?applyEnchant\@EnchantUtils\@\@SA_NAEAVItemStackBase\@\@W4Type\@Enchant\@\@H_N\@Z
     */
    MCAPI static bool applyEnchant(class ItemStackBase&, enum class Enchant::Type, int, bool); // NOLINT
    /**
     * @symbol ?canEnchant\@EnchantUtils\@\@SA?AUEnchantResult\@\@AEBVItemStackBase\@\@W4Type\@Enchant\@\@H_N\@Z
     */
    MCAPI static struct EnchantResult
    canEnchant(class ItemStackBase const&, enum class Enchant::Type, int, bool); // NOLINT
    /**
     * @symbol ?canEnchant\@EnchantUtils\@\@SA?AUEnchantResult\@\@AEBVItemStackBase\@\@AEBVEnchantmentInstance\@\@_N\@Z
     */
    MCAPI static struct EnchantResult
    canEnchant(class ItemStackBase const&, class EnchantmentInstance const&, bool); // NOLINT
    /**
     * @symbol ?combineEnchantedItems\@EnchantUtils\@\@SAHAEBVItemStack\@\@0AEAV2\@_N\@Z
     */
    MCAPI static int
    combineEnchantedItems(class ItemStack const&, class ItemStack const&, class ItemStack&, bool); // NOLINT
    /**
     * @symbol ?determineActivation\@EnchantUtils\@\@SAHW4Type\@Enchant\@\@\@Z
     */
    MCAPI static int determineActivation(enum class Enchant::Type); // NOLINT
    /**
     * @symbol ?determineCompatibility\@EnchantUtils\@\@SAHW4Type\@Enchant\@\@\@Z
     */
    MCAPI static int determineCompatibility(enum class Enchant::Type); // NOLINT
    /**
     * @symbol ?doPostDamageEffects\@EnchantUtils\@\@SAXAEAVActor\@\@0\@Z
     */
    MCAPI static void doPostDamageEffects(class Actor&, class Actor&); // NOLINT
    /**
     * @symbol ?doPostHurtEffects\@EnchantUtils\@\@SAXAEAVMob\@\@0\@Z
     */
    MCAPI static void doPostHurtEffects(class Mob&, class Mob&); // NOLINT
    /**
     * @symbol ?generateEnchantedBook\@EnchantUtils\@\@SA?AVItemInstance\@\@AEBVEnchantmentInstance\@\@\@Z
     */
    MCAPI static class ItemInstance generateEnchantedBook(class EnchantmentInstance const&); // NOLINT
    /**
     * @symbol
     * ?getAvailableEnchantmentResults\@EnchantUtils\@\@SA?AV?$vector\@U?$pair\@VEnchantmentInstance\@\@H\@std\@\@V?$allocator\@U?$pair\@VEnchantmentInstance\@\@H\@std\@\@\@2\@\@std\@\@PEBVItem\@\@H_N\@Z
     */
    MCAPI static std::vector<struct std::pair<class EnchantmentInstance, int>>
    getAvailableEnchantmentResults(class Item const*, int, bool); // NOLINT
    /**
     * @symbol
     * ?getBookCasePositions\@EnchantUtils\@\@SA?AV?$vector\@VVec3\@\@V?$allocator\@VVec3\@\@\@std\@\@\@std\@\@AEAVBlockSource\@\@AEBVVec3\@\@\@Z
     */
    MCAPI static std::vector<class Vec3> getBookCasePositions(class BlockSource&, class Vec3 const&); // NOLINT
    /**
     * @symbol
     * ?getCurses\@EnchantUtils\@\@SAXAEBVItemStackBase\@\@AEAV?$vector\@VEnchantmentInstance\@\@V?$allocator\@VEnchantmentInstance\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI static void getCurses(class ItemStackBase const&, std::vector<class EnchantmentInstance>&); // NOLINT
    /**
     * @symbol ?getDamageReduction\@EnchantUtils\@\@SAMAEBVActorDamageSource\@\@AEBVMob\@\@\@Z
     */
    MCAPI static float getDamageReduction(class ActorDamageSource const&, class Mob const&); // NOLINT
    /**
     * @symbol
     * ?getEnchantCosts\@EnchantUtils\@\@SA?AV?$vector\@HV?$allocator\@H\@std\@\@\@std\@\@AEBVItemStackBase\@\@H\@Z
     */
    MCAPI static std::vector<int> getEnchantCosts(class ItemStackBase const&, int); // NOLINT
    /**
     * @symbol ?getEnchantLevel\@EnchantUtils\@\@SAHW4Type\@Enchant\@\@AEBVItemStackBase\@\@\@Z
     */
    MCAPI static int getEnchantLevel(enum class Enchant::Type, class ItemStackBase const&); // NOLINT
    /**
     * @symbol
     * ?getEnchantNameAndLevel\@EnchantUtils\@\@SA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4Type\@Enchant\@\@H\@Z
     */
    MCAPI static std::string getEnchantNameAndLevel(enum class Enchant::Type, int); // NOLINT
    /**
     * @symbol
     * ?getEnchantingTablePositions\@EnchantUtils\@\@SA?AV?$vector\@VVec3\@\@V?$allocator\@VVec3\@\@\@std\@\@\@std\@\@AEAVBlockSource\@\@AEBVVec3\@\@\@Z
     */
    MCAPI static std::vector<class Vec3> getEnchantingTablePositions(class BlockSource&, class Vec3 const&); // NOLINT
    /**
     * @symbol ?getEnchantmentId\@EnchantUtils\@\@SA?AW4Type\@Enchant\@\@AEBVHashedString\@\@\@Z
     */
    MCAPI static enum class Enchant::Type getEnchantmentId(class HashedString const&); // NOLINT
    /**
     * @symbol ?getLegalEnchants\@EnchantUtils\@\@SA?AV?$vector\@HV?$allocator\@H\@std\@\@\@std\@\@PEBVItem\@\@\@Z
     */
    MCAPI static std::vector<int> getLegalEnchants(class Item const*); // NOLINT
    /**
     * @symbol ?getLootableRandomEnchantIndex\@EnchantUtils\@\@SAHAEAVRandom\@\@\@Z
     */
    MCAPI static int getLootableRandomEnchantIndex(class Random&); // NOLINT
    /**
     * @symbol ?getMeleeDamageBonus\@EnchantUtils\@\@SAMAEBVActor\@\@AEAV2\@\@Z
     */
    MCAPI static float getMeleeDamageBonus(class Actor const&, class Actor&); // NOLINT
    /**
     * @symbol ?getRandomDamagedItemWithMending\@EnchantUtils\@\@SAAEBVItemStack\@\@AEBVMob\@\@\@Z
     */
    MCAPI static class ItemStack const& getRandomDamagedItemWithMending(class Mob const&); // NOLINT
    /**
     * @symbol
     * ?getRandomItemWith\@EnchantUtils\@\@SAAEBVItemStack\@\@W4Type\@Enchant\@\@AEBVMob\@\@W4EquipmentFilter\@\@\@Z
     */
    MCAPI static class ItemStack const&
    getRandomItemWith(enum class Enchant::Type, class Mob const&, enum class EquipmentFilter); // NOLINT
    /**
     * @symbol
     * ?getRandomName\@EnchantUtils\@\@SA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI static std::string getRandomName(); // NOLINT
    /**
     * @symbol ?getTotalProtectionLevels\@EnchantUtils\@\@SAHW4Type\@Enchant\@\@AEBVMob\@\@\@Z
     */
    MCAPI static int getTotalProtectionLevels(enum class Enchant::Type, class Mob const&); // NOLINT
    /**
     * @symbol ?hasCurse\@EnchantUtils\@\@SA_NAEBVItemStackBase\@\@\@Z
     */
    MCAPI static bool hasCurse(class ItemStackBase const&); // NOLINT
    /**
     * @symbol ?hasEnchant\@EnchantUtils\@\@SA_NW4Type\@Enchant\@\@AEBVItemStackBase\@\@\@Z
     */
    MCAPI static bool hasEnchant(enum class Enchant::Type, class ItemStackBase const&); // NOLINT
    /**
     * @symbol ?isCurse\@EnchantUtils\@\@SA_NW4Type\@Enchant\@\@\@Z
     */
    MCAPI static bool isCurse(enum class Enchant::Type); // NOLINT
    /**
     * @symbol ?randomlyEnchant\@EnchantUtils\@\@SAXAEAVItemStack\@\@HH_N\@Z
     */
    MCAPI static void randomlyEnchant(class ItemStack&, int, int, bool); // NOLINT
    /**
     * @symbol ?randomlyEnchant\@EnchantUtils\@\@SAXAEAVItemInstance\@\@HH_N\@Z
     */
    MCAPI static void randomlyEnchant(class ItemInstance&, int, int, bool); // NOLINT
    /**
     * @symbol ?removeEnchants\@EnchantUtils\@\@SAXAEAVItemStack\@\@\@Z
     */
    MCAPI static void removeEnchants(class ItemStack&); // NOLINT
    /**
     * @symbol ?selectEnchantments\@EnchantUtils\@\@SA?AVItemEnchants\@\@PEBVItem\@\@HH_N\@Z
     */
    MCAPI static class ItemEnchants selectEnchantments(class Item const*, int, int, bool); // NOLINT
    /**
     * @symbol ?MAX_EXP_REPAIR_COST\@EnchantUtils\@\@2HB
     */
    MCAPI static int const MAX_EXP_REPAIR_COST; // NOLINT
    /**
     * @symbol ?PROTECTIONFACTOR_PRIMARYCAP\@EnchantUtils\@\@2HB
     */
    MCAPI static int const PROTECTIONFACTOR_PRIMARYCAP; // NOLINT
    /**
     * @symbol ?PROTECTIONFACTOR_SECONDARYCAP\@EnchantUtils\@\@2HB
     */
    MCAPI static int const PROTECTIONFACTOR_SECONDARYCAP; // NOLINT

    // private:
    /**
     * @symbol ?_convertBookCheck\@EnchantUtils\@\@CAXAEAVItemStackBase\@\@\@Z
     */
    MCAPI static void _convertBookCheck(class ItemStackBase&); // NOLINT

private:
    /**
     * @symbol
     * ?mEnchantmentNames\@EnchantUtils\@\@0V?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@A
     */
    MCAPI static std::vector<std::string> mEnchantmentNames; // NOLINT
};
