#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/EquipmentFilter.h"
#include "mc/world/item/enchanting/Enchant.h"

class EnchantUtils {
public:
    // prevent constructor by default
    EnchantUtils& operator=(EnchantUtils const&);
    EnchantUtils(EnchantUtils const&);
    EnchantUtils();

public:
    // NOLINTBEGIN
    // symbol:
    // ?appendEnchantToFormattedText@EnchantUtils@@SAXW4Type@Enchant@@V?$basic_string_view@DU?$char_traits@D@std@@@std@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@5@@Z
    MCAPI static void appendEnchantToFormattedText(::Enchant::Type type, std::string_view, std::string&);

    // symbol: ?applyEnchant@EnchantUtils@@SA_NAEAVItemStackBase@@AEBVEnchantmentInstance@@_N@Z
    MCAPI static bool
    applyEnchant(class ItemStackBase& out, class EnchantmentInstance const& enchant, bool allowNonVanilla);

    // symbol: ?applyEnchant@EnchantUtils@@SA_NAEAVItemStackBase@@W4Type@Enchant@@H_N@Z
    MCAPI static bool applyEnchant(class ItemStackBase& out, ::Enchant::Type type, int level, bool allowNonVanilla);

    // symbol: ?applyEnchant@EnchantUtils@@SAHAEAVItemStackBase@@AEBVItemEnchants@@_N@Z
    MCAPI static int applyEnchant(class ItemStackBase& out, class ItemEnchants const& enchants, bool allowNonVanilla);

    // symbol: ?canEnchant@EnchantUtils@@SA?AUEnchantResult@@AEBVItemStackBase@@AEBVEnchantmentInstance@@_N@Z
    MCAPI static struct EnchantResult
    canEnchant(class ItemStackBase const& item, class EnchantmentInstance const& enchant, bool allowNonVanilla);

    // symbol: ?canEnchant@EnchantUtils@@SA?AUEnchantResult@@AEBVItemStackBase@@W4Type@Enchant@@H_N@Z
    MCAPI static struct EnchantResult
    canEnchant(class ItemStackBase const& item, ::Enchant::Type type, int level, bool allowNonVanilla);

    // symbol: ?combineEnchantedItems@EnchantUtils@@SAHAEBVItemStack@@0AEAV2@_N@Z
    MCAPI static int combineEnchantedItems(
        class ItemStack const& first,
        class ItemStack const& second,
        class ItemStack&       out,
        bool                   bookEnchant
    );

    // symbol: ?determineActivation@EnchantUtils@@SAHW4Type@Enchant@@@Z
    MCAPI static int determineActivation(::Enchant::Type enchantType);

    // symbol: ?doPostDamageEffects@EnchantUtils@@SAXAEAVActor@@0@Z
    MCAPI static void doPostDamageEffects(class Actor& victim, class Actor& attacker);

    // symbol: ?doPostHurtEffects@EnchantUtils@@SAXAEAVMob@@0@Z
    MCAPI static void doPostHurtEffects(class Mob& victim, class Mob& attacker);

    // symbol: ?generateEnchantedBook@EnchantUtils@@SA?AVItemInstance@@AEBVEnchantmentInstance@@@Z
    MCAPI static class ItemInstance generateEnchantedBook(class EnchantmentInstance const& enchant);

    // symbol:
    // ?getAvailableEnchantmentResults@EnchantUtils@@SA?AV?$vector@U?$pair@VEnchantmentInstance@@H@std@@V?$allocator@U?$pair@VEnchantmentInstance@@H@std@@@2@@std@@PEBVItem@@H_N@Z
    MCAPI static std::vector<std::pair<class EnchantmentInstance, int>>
    getAvailableEnchantmentResults(class Item const* item, int value, bool treasure);

    // symbol:
    // ?getBookCasePositions@EnchantUtils@@SA?AV?$vector@VVec3@@V?$allocator@VVec3@@@std@@@std@@AEAVBlockSource@@AEBVVec3@@@Z
    MCAPI static std::vector<class Vec3> getBookCasePositions(class BlockSource& source, class Vec3 const& pos);

    // symbol:
    // ?getCurses@EnchantUtils@@SAXAEBVItemStackBase@@AEAV?$vector@VEnchantmentInstance@@V?$allocator@VEnchantmentInstance@@@std@@@std@@@Z
    MCAPI static void getCurses(class ItemStackBase const& item, std::vector<class EnchantmentInstance>& outputCurses);

    // symbol: ?getDamageReduction@EnchantUtils@@SAMAEBVActorDamageSource@@AEBVMob@@@Z
    MCAPI static float getDamageReduction(class ActorDamageSource const& source, class Mob const& target);

    // symbol: ?getEnchantCosts@EnchantUtils@@SA?AV?$vector@HV?$allocator@H@std@@@std@@AEBVItemStackBase@@H@Z
    MCAPI static std::vector<int> getEnchantCosts(class ItemStackBase const& itemInst, int bookcaseCount);

    // symbol: ?getEnchantLevel@EnchantUtils@@SAHW4Type@Enchant@@AEBVItemStackBase@@@Z
    MCAPI static int getEnchantLevel(::Enchant::Type enchantType, class ItemStackBase const& stack);

    // symbol:
    // ?getEnchantNameAndLevel@EnchantUtils@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Type@Enchant@@H@Z
    MCAPI static std::string getEnchantNameAndLevel(::Enchant::Type, int);

    // symbol:
    // ?getEnchantingTablePositions@EnchantUtils@@SA?AV?$vector@VVec3@@V?$allocator@VVec3@@@std@@@std@@AEAVBlockSource@@AEBVVec3@@@Z
    MCAPI static std::vector<class Vec3> getEnchantingTablePositions(class BlockSource& source, class Vec3 const& pos);

    // symbol: ?getEnchantmentId@EnchantUtils@@SA?AW4Type@Enchant@@AEBVHashedString@@@Z
    MCAPI static ::Enchant::Type getEnchantmentId(class HashedString const& stringId);

    // symbol: ?getLegalEnchants@EnchantUtils@@SA?AV?$vector@HV?$allocator@H@std@@@std@@PEBVItem@@@Z
    MCAPI static std::vector<int> getLegalEnchants(class Item const* item);

    // symbol: ?getLootableRandomEnchantIndex@EnchantUtils@@SAHAEAVRandom@@@Z
    MCAPI static int getLootableRandomEnchantIndex(class Random& random);

    // symbol: ?getMeleeDamageBonus@EnchantUtils@@SAMAEBVActor@@AEAV2@@Z
    MCAPI static float getMeleeDamageBonus(class Actor const& victim, class Actor& attacker);

    // symbol: ?getRandomDamagedItemWithMending@EnchantUtils@@SAAEBVItemStack@@AEBVMob@@@Z
    MCAPI static class ItemStack const& getRandomDamagedItemWithMending(class Mob const& equipped);

    // symbol: ?getRandomItemWith@EnchantUtils@@SAAEBVItemStack@@W4Type@Enchant@@AEBVMob@@W4EquipmentFilter@@@Z
    MCAPI static class ItemStack const&
    getRandomItemWith(::Enchant::Type type, class Mob const& equipped, ::EquipmentFilter filter);

    // symbol: ?getRandomName@EnchantUtils@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI static std::string getRandomName();

    // symbol: ?getTotalProtectionLevels@EnchantUtils@@SAHW4Type@Enchant@@AEBVMob@@@Z
    MCAPI static int getTotalProtectionLevels(::Enchant::Type type, class Mob const& target);

    // symbol: ?hasCurse@EnchantUtils@@SA_NAEBVItemStackBase@@@Z
    MCAPI static bool hasCurse(class ItemStackBase const& item);

    // symbol: ?hasEnchant@EnchantUtils@@SA_NW4Type@Enchant@@AEBVItemStackBase@@@Z
    MCAPI static bool hasEnchant(::Enchant::Type enchantType, class ItemStackBase const& item);

    // symbol: ?isCurse@EnchantUtils@@SA_NW4Type@Enchant@@@Z
    MCAPI static bool isCurse(::Enchant::Type enchantType);

    // symbol: ?randomlyEnchant@EnchantUtils@@SAXAEAVItemInstance@@HH_N@Z
    MCAPI static void randomlyEnchant(class ItemInstance& out, int cost, int valueBuff, bool treasure);

    // symbol: ?randomlyEnchant@EnchantUtils@@SAXAEAVItemStack@@HH_N@Z
    MCAPI static void randomlyEnchant(class ItemStack& out, int cost, int valueBuff, bool treasure);

    // symbol: ?removeEnchants@EnchantUtils@@SAXAEAVItemStack@@@Z
    MCAPI static void removeEnchants(class ItemStack& out);

    // symbol: ?selectEnchantments@EnchantUtils@@SA?AVItemEnchants@@PEBVItem@@HH_N@Z
    MCAPI static class ItemEnchants
    selectEnchantments(class Item const* item, int enchantCost, int valueBuff, bool treasure);

    // symbol: ?MAX_EXP_REPAIR_COST@EnchantUtils@@2HB
    MCAPI static int const MAX_EXP_REPAIR_COST;

    // symbol: ?PROTECTIONFACTOR_PRIMARYCAP@EnchantUtils@@2HB
    MCAPI static int const PROTECTIONFACTOR_PRIMARYCAP;

    // symbol: ?PROTECTIONFACTOR_SECONDARYCAP@EnchantUtils@@2HB
    MCAPI static int const PROTECTIONFACTOR_SECONDARYCAP;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_convertBookCheck@EnchantUtils@@CAXAEAVItemStackBase@@@Z
    MCAPI static void _convertBookCheck(class ItemStackBase& out);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?mEnchantmentNames@EnchantUtils@@0V?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@A
    MCAPI static std::vector<std::string> mEnchantmentNames;

    // NOLINTEND
};
