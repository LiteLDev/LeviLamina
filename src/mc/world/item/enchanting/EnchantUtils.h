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
class Vec3;
struct ActorUniqueID;
namespace Bedrock::Safety { class RedactableString; }
// clang-format on

class EnchantUtils {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _convertBookCheck(::ItemStackBase& out);

    MCAPI static void appendEnchantToFormattedText(
        ::Enchant::Type                      type,
        ::std::string_view                   enchantName,
        ::Bedrock::Safety::RedactableString& formattedEnchantmentText
    );

    MCAPI static bool applyEnchant(::ItemStackBase& out, ::Enchant::Type type, int level, bool allowNonVanilla);

    MCAPI static int applyEnchant(::ItemStackBase& out, ::ItemEnchants const& enchants, bool allowNonVanilla);

    MCAPI static float
    calculateAfterBreachArmorFraction(::ActorUniqueID const& attackerID, ::Mob const& target, float armorFraction);

    MCAPI static int
    combineEnchantedItems(::ItemStack const& first, ::ItemStack const& second, ::ItemStack& out, bool bookEnchant);

    MCAPI static void doPostDamageEffects(::Actor& victim, ::Actor& attacker);

    MCAPI static void doPostHurtEffects(::Mob& victim, ::Mob& attacker);

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

    MCAPI static float getMeleeDamageBonus(::Actor const& victim, ::Actor const& attacker);

    MCAPI static ::ItemStack const& getRandomDamagedItemWithMending(::Mob const& equipped);

    MCAPI static ::ItemStack const&
    getRandomItemWith(::Enchant::Type type, ::Mob const& equipped, ::EquipmentFilter filter);

    MCAPI static bool hasEnchant(::Enchant::Type enchantType, ::ItemStackBase const& item);

    MCAPI static ::ItemEnchants selectEnchantments(::Item const* item, int enchantCost, int valueBuff, bool treasure);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static int const& MAX_EXP_REPAIR_COST();

    MCAPI static int const& PROTECTIONFACTOR_SECONDARYCAP();

    MCAPI static ::std::vector<::std::string>& mEnchantmentNames();
    // NOLINTEND
};
