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
    MCAPI static void appendEnchantToFormattedText(::Enchant::Type type, std::string_view, std::string&);

    MCAPI static bool
    applyEnchant(class ItemStackBase& out, class EnchantmentInstance const& enchant, bool allowNonVanilla);

    MCAPI static bool applyEnchant(class ItemStackBase& out, ::Enchant::Type type, int level, bool allowNonVanilla);

    MCAPI static int applyEnchant(class ItemStackBase& out, class ItemEnchants const& enchants, bool allowNonVanilla);

    MCAPI static float calculateAfterBreachArmorFraction(struct ActorUniqueID const&, class Mob const&, float);

    MCAPI static struct EnchantResult
    canEnchant(class ItemStackBase const& item, class EnchantmentInstance const& enchant, bool allowNonVanilla);

    MCAPI static struct EnchantResult
    canEnchant(class ItemStackBase const& item, ::Enchant::Type type, int level, bool allowNonVanilla);

    MCAPI static int combineEnchantedItems(
        class ItemStack const& first,
        class ItemStack const& second,
        class ItemStack&       out,
        bool                   bookEnchant
    );

    MCAPI static int determineActivation(::Enchant::Type enchantType);

    MCAPI static int determineCompatibility(::Enchant::Type type);

    MCAPI static void doPostDamageEffects(class Actor& victim, class Actor& attacker);

    MCAPI static void doPostHurtEffects(class Mob& victim, class Mob& attacker);

    MCAPI static void doPostItemHurtActorEffects(class Actor&, class Actor&, class ItemEnchants const&);

    MCAPI static class ItemInstance generateEnchantedBook(class EnchantmentInstance const& enchant);

    MCAPI static std::vector<std::pair<class EnchantmentInstance, int>>
    getAvailableEnchantmentResults(class Item const* item, int value, bool treasure);

    MCAPI static std::vector<class Vec3> getBookCasePositions(class BlockSource& source, class Vec3 const& pos);

    MCAPI static void getCurses(class ItemStackBase const& item, std::vector<class EnchantmentInstance>& outputCurses);

    MCAPI static float getDamageReduction(class ActorDamageSource const& source, class Mob const& target);

    MCAPI static std::vector<int> getEnchantCosts(class ItemStackBase const& itemInst, int bookcaseCount);

    MCAPI static int getEnchantLevel(::Enchant::Type enchantType, class ItemStackBase const& stack);

    MCAPI static std::string getEnchantNameAndLevel(::Enchant::Type, int);

    MCAPI static std::vector<class Vec3> getEnchantingTablePositions(class BlockSource& source, class Vec3 const& pos);

    MCAPI static ::Enchant::Type getEnchantmentId(class HashedString const& stringId);

    MCAPI static std::vector<int> getLegalEnchants(class Item const* item);

    MCAPI static int getLootableRandomEnchantIndex(class Random& random);

    MCAPI static float getMeleeDamageBonus(class Actor const& victim, class Actor& attacker);

    MCAPI static class ItemStack const& getRandomDamagedItemWithMending(class Mob const& equipped);

    MCAPI static class ItemStack const&
    getRandomItemWith(::Enchant::Type type, class Mob const& equipped, ::EquipmentFilter filter);

    MCAPI static std::string getRandomName();

    MCAPI static int getTotalProtectionLevels(::Enchant::Type type, class Mob const& target);

    MCAPI static bool hasCurse(class ItemStackBase const& item);

    MCAPI static bool hasEnchant(::Enchant::Type enchantType, class ItemStackBase const& item);

    MCAPI static bool isCurse(::Enchant::Type enchantType);

    MCAPI static void randomlyEnchant(class ItemInstance& out, int cost, int valueBuff, bool treasure);

    MCAPI static void randomlyEnchant(class ItemStack& out, int cost, int valueBuff, bool treasure);

    MCAPI static void removeEnchants(class ItemStack& out);

    MCAPI static class ItemEnchants
    selectEnchantments(class Item const* item, int enchantCost, int valueBuff, bool treasure);

    MCAPI static int const MAX_EXP_REPAIR_COST;

    MCAPI static int const PROTECTIONFACTOR_PRIMARYCAP;

    MCAPI static int const PROTECTIONFACTOR_SECONDARYCAP;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static void _convertBookCheck(class ItemStackBase& out);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static std::vector<std::string> mEnchantmentNames;

    // NOLINTEND
};
