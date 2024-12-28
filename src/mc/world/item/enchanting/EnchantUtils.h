#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/enchanting/Enchant.h"
#include "mc/world/item/enchanting/EquipmentFilter.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorDamageSource;
class BlockSource;
class EnchantmentInstance;
class HashedString;
class Item;
class ItemEnchants;
class ItemInstance;
class ItemStack;
class ItemStackBase;
class Mob;
class Random;
class Vec3;
struct ActorUniqueID;
struct EnchantResult;
namespace Bedrock::Safety { class RedactableString; }
// clang-format on

class EnchantUtils {
public:
    // prevent constructor by default
    EnchantUtils& operator=(EnchantUtils const&);
    EnchantUtils(EnchantUtils const&);
    EnchantUtils();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void appendEnchantToFormattedText(
        ::Enchant::Type                      type,
        ::std::string_view                   enchantName,
        ::Bedrock::Safety::RedactableString& formattedEnchantmentText
    );

    MCAPI static bool applyEnchant(::ItemStackBase& out, ::EnchantmentInstance const& enchant, bool allowNonVanilla);

    MCAPI static bool applyEnchant(::ItemStackBase& out, ::Enchant::Type type, int level, bool allowNonVanilla);

    MCAPI static int applyEnchant(::ItemStackBase& out, ::ItemEnchants const& enchants, bool allowNonVanilla);

    MCAPI static float
    calculateAfterBreachArmorFraction(::ActorUniqueID const& attackerID, ::Mob const& target, float armorFraction);

    MCAPI static ::EnchantResult
    canEnchant(::ItemStackBase const& item, ::EnchantmentInstance const& enchant, bool allowNonVanilla);

    MCAPI static ::EnchantResult
    canEnchant(::ItemStackBase const& item, ::Enchant::Type type, int level, bool allowNonVanilla);

    MCAPI static int
    combineEnchantedItems(::ItemStack const& first, ::ItemStack const& second, ::ItemStack& out, bool bookEnchant);

    MCAPI static int determineActivation(::Enchant::Type enchantType);

    MCAPI static void doPostDamageEffects(::Actor& victim, ::Actor& attacker);

    MCAPI static void doPostHurtEffects(::Mob& victim, ::Mob& attacker);

    MCAPI static void
    doPostItemHurtActorEffects(::Actor& victim, ::Actor& attacker, ::ItemEnchants const& preHurtEnchantments);

    MCAPI static ::ItemInstance generateEnchantedBook(::EnchantmentInstance const& enchant);

    MCAPI static ::std::vector<::std::pair<::EnchantmentInstance, int>>
    getAvailableEnchantmentResults(::Item const* item, int value, bool treasure);

    MCAPI static ::std::vector<::Vec3> getBookCasePositions(::BlockSource& source, ::Vec3 const& pos);

    MCAPI static void getCurses(::ItemStackBase const& item, ::std::vector<::EnchantmentInstance>& outputCurses);

    MCAPI static float getDamageReduction(::ActorDamageSource const& source, ::Mob const& target);

    MCAPI static ::std::vector<int> getEnchantCosts(::ItemStackBase const& itemInst, int bookcaseCount);

    MCAPI static int getEnchantLevel(::Enchant::Type enchantType, ::ItemStackBase const& stack);

    MCAPI static ::std::string getEnchantNameAndLevel(::Enchant::Type id, int level);

    MCAPI static ::std::vector<::Vec3> getEnchantingTablePositions(::BlockSource& source, ::Vec3 const& pos);

    MCAPI static ::Enchant::Type getEnchantmentId(::HashedString const& stringId);

    MCAPI static ::std::string getLevelString(int level);

    MCAPI static float getMeleeDamageBonus(::Actor const& victim, ::Actor& attacker);

    MCAPI static ::ItemStack const& getRandomDamagedItemWithMending(::Mob const& equipped);

    MCAPI static ::ItemStack const&
    getRandomItemWith(::Enchant::Type type, ::Mob const& equipped, ::EquipmentFilter filter);

    MCAPI static ::std::string getRandomName();

    MCAPI static int getTotalProtectionLevels(::Enchant::Type type, ::Mob const& target);

    MCAPI static int getTradeableRandomEnchantIndex(::Random& random);

    MCAPI static bool hasCurse(::ItemStackBase const& item);

    MCAPI static bool hasEnchant(::Enchant::Type enchantType, ::ItemStackBase const& item);

    MCAPI static bool isCurse(::Enchant::Type enchantType);

    MCAPI static void randomlyEnchant(::ItemStack& out, int cost, int valueBuff, bool treasure);

    MCAPI static void randomlyEnchant(::ItemInstance&, int, int, bool);

    MCAPI static void removeEnchants(::ItemStack& out);

    MCAPI static ::ItemEnchants selectEnchantments(::Item const* item, int enchantCost, int valueBuff, bool treasure);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static int const& MAX_EXP_REPAIR_COST();

    MCAPI static int const& PROTECTIONFACTOR_PRIMARYCAP();

    MCAPI static int const& PROTECTIONFACTOR_SECONDARYCAP();

    MCAPI static ::std::vector<::std::string>& mEnchantmentNames();
    // NOLINTEND
};
