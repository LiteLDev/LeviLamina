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
    MCAPI static void appendEnchantToFormattedText(::Enchant::Type, std::string_view, std::string&);

    // symbol: ?applyEnchant@EnchantUtils@@SA_NAEAVItemStackBase@@AEBVEnchantmentInstance@@_N@Z
    MCAPI static bool applyEnchant(class ItemStackBase&, class EnchantmentInstance const&, bool);

    // symbol: ?applyEnchant@EnchantUtils@@SA_NAEAVItemStackBase@@W4Type@Enchant@@H_N@Z
    MCAPI static bool applyEnchant(class ItemStackBase&, ::Enchant::Type, int, bool);

    // symbol: ?applyEnchant@EnchantUtils@@SAHAEAVItemStackBase@@AEBVItemEnchants@@_N@Z
    MCAPI static int applyEnchant(class ItemStackBase&, class ItemEnchants const&, bool);

    // symbol: ?canEnchant@EnchantUtils@@SA?AUEnchantResult@@AEBVItemStackBase@@AEBVEnchantmentInstance@@_N@Z
    MCAPI static struct EnchantResult canEnchant(class ItemStackBase const&, class EnchantmentInstance const&, bool);

    // symbol: ?canEnchant@EnchantUtils@@SA?AUEnchantResult@@AEBVItemStackBase@@W4Type@Enchant@@H_N@Z
    MCAPI static struct EnchantResult canEnchant(class ItemStackBase const&, ::Enchant::Type, int, bool);

    // symbol: ?combineEnchantedItems@EnchantUtils@@SAHAEBVItemStack@@0AEAV2@_N@Z
    MCAPI static int combineEnchantedItems(class ItemStack const&, class ItemStack const&, class ItemStack&, bool);

    // symbol: ?determineActivation@EnchantUtils@@SAHW4Type@Enchant@@@Z
    MCAPI static int determineActivation(::Enchant::Type);

    // symbol: ?doPostDamageEffects@EnchantUtils@@SAXAEAVActor@@0@Z
    MCAPI static void doPostDamageEffects(class Actor&, class Actor&);

    // symbol: ?doPostHurtEffects@EnchantUtils@@SAXAEAVMob@@0@Z
    MCAPI static void doPostHurtEffects(class Mob&, class Mob&);

    // symbol: ?generateEnchantedBook@EnchantUtils@@SA?AVItemInstance@@AEBVEnchantmentInstance@@@Z
    MCAPI static class ItemInstance generateEnchantedBook(class EnchantmentInstance const&);

    // symbol:
    // ?getAvailableEnchantmentResults@EnchantUtils@@SA?AV?$vector@U?$pair@VEnchantmentInstance@@H@std@@V?$allocator@U?$pair@VEnchantmentInstance@@H@std@@@2@@std@@PEBVItem@@H_N@Z
    MCAPI static std::vector<std::pair<class EnchantmentInstance, int>>
    getAvailableEnchantmentResults(class Item const*, int, bool);

    // symbol:
    // ?getBookCasePositions@EnchantUtils@@SA?AV?$vector@VVec3@@V?$allocator@VVec3@@@std@@@std@@AEAVBlockSource@@AEBVVec3@@@Z
    MCAPI static std::vector<class Vec3> getBookCasePositions(class BlockSource&, class Vec3 const&);

    // symbol:
    // ?getCurses@EnchantUtils@@SAXAEBVItemStackBase@@AEAV?$vector@VEnchantmentInstance@@V?$allocator@VEnchantmentInstance@@@std@@@std@@@Z
    MCAPI static void getCurses(class ItemStackBase const&, std::vector<class EnchantmentInstance>&);

    // symbol: ?getDamageReduction@EnchantUtils@@SAMAEBVActorDamageSource@@AEBVMob@@@Z
    MCAPI static float getDamageReduction(class ActorDamageSource const&, class Mob const&);

    // symbol: ?getEnchantCosts@EnchantUtils@@SA?AV?$vector@HV?$allocator@H@std@@@std@@AEBVItemStackBase@@H@Z
    MCAPI static std::vector<int> getEnchantCosts(class ItemStackBase const&, int);

    // symbol: ?getEnchantLevel@EnchantUtils@@SAHW4Type@Enchant@@AEBVItemStackBase@@@Z
    MCAPI static int getEnchantLevel(::Enchant::Type, class ItemStackBase const&);

    // symbol:
    // ?getEnchantNameAndLevel@EnchantUtils@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Type@Enchant@@H@Z
    MCAPI static std::string getEnchantNameAndLevel(::Enchant::Type, int);

    // symbol:
    // ?getEnchantingTablePositions@EnchantUtils@@SA?AV?$vector@VVec3@@V?$allocator@VVec3@@@std@@@std@@AEAVBlockSource@@AEBVVec3@@@Z
    MCAPI static std::vector<class Vec3> getEnchantingTablePositions(class BlockSource&, class Vec3 const&);

    // symbol: ?getEnchantmentId@EnchantUtils@@SA?AW4Type@Enchant@@AEBVHashedString@@@Z
    MCAPI static ::Enchant::Type getEnchantmentId(class HashedString const&);

    // symbol: ?getLegalEnchants@EnchantUtils@@SA?AV?$vector@HV?$allocator@H@std@@@std@@PEBVItem@@@Z
    MCAPI static std::vector<int> getLegalEnchants(class Item const*);

    // symbol: ?getLootableRandomEnchantIndex@EnchantUtils@@SAHAEAVRandom@@@Z
    MCAPI static int getLootableRandomEnchantIndex(class Random&);

    // symbol: ?getMeleeDamageBonus@EnchantUtils@@SAMAEBVActor@@AEAV2@@Z
    MCAPI static float getMeleeDamageBonus(class Actor const&, class Actor&);

    // symbol: ?getRandomDamagedItemWithMending@EnchantUtils@@SAAEBVItemStack@@AEBVMob@@@Z
    MCAPI static class ItemStack const& getRandomDamagedItemWithMending(class Mob const&);

    // symbol: ?getRandomItemWith@EnchantUtils@@SAAEBVItemStack@@W4Type@Enchant@@AEBVMob@@W4EquipmentFilter@@@Z
    MCAPI static class ItemStack const& getRandomItemWith(::Enchant::Type, class Mob const&, ::EquipmentFilter);

    // symbol: ?getRandomName@EnchantUtils@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI static std::string getRandomName();

    // symbol: ?getTotalProtectionLevels@EnchantUtils@@SAHW4Type@Enchant@@AEBVMob@@@Z
    MCAPI static int getTotalProtectionLevels(::Enchant::Type, class Mob const&);

    // symbol: ?hasCurse@EnchantUtils@@SA_NAEBVItemStackBase@@@Z
    MCAPI static bool hasCurse(class ItemStackBase const&);

    // symbol: ?hasEnchant@EnchantUtils@@SA_NW4Type@Enchant@@AEBVItemStackBase@@@Z
    MCAPI static bool hasEnchant(::Enchant::Type, class ItemStackBase const&);

    // symbol: ?isCurse@EnchantUtils@@SA_NW4Type@Enchant@@@Z
    MCAPI static bool isCurse(::Enchant::Type);

    // symbol: ?randomlyEnchant@EnchantUtils@@SAXAEAVItemInstance@@HH_N@Z
    MCAPI static void randomlyEnchant(class ItemInstance&, int, int, bool);

    // symbol: ?randomlyEnchant@EnchantUtils@@SAXAEAVItemStack@@HH_N@Z
    MCAPI static void randomlyEnchant(class ItemStack&, int, int, bool);

    // symbol: ?removeEnchants@EnchantUtils@@SAXAEAVItemStack@@@Z
    MCAPI static void removeEnchants(class ItemStack&);

    // symbol: ?selectEnchantments@EnchantUtils@@SA?AVItemEnchants@@PEBVItem@@HH_N@Z
    MCAPI static class ItemEnchants selectEnchantments(class Item const*, int, int, bool);

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
    MCAPI static void _convertBookCheck(class ItemStackBase&);

    // NOLINTEND

private:
    // NOLINTBEGIN
    // symbol:
    // ?mEnchantmentNames@EnchantUtils@@0V?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@A
    MCAPI static std::vector<std::string> mEnchantmentNames;

    // NOLINTEND

    // member accessor
public:
    // NOLINTBEGIN
    static auto& $mEnchantmentNames() { return mEnchantmentNames; }

    // NOLINTEND
};
