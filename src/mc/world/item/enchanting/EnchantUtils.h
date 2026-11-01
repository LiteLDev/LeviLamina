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
class IRandom;
class Item;
class ItemEnchants;
class ItemStack;
class ItemStackBase;
class Mob;
class Vec3;
struct ActorUniqueID;
struct EnchantResult;
namespace Bedrock::Safety { class RedactableString; }
// clang-format on

namespace EnchantUtils {
// functions
// NOLINTBEGIN
MCNAPI void appendEnchantToFormattedText(
    ::Enchant::Type                      type,
    ::std::string_view                   enchantName,
    ::Bedrock::Safety::RedactableString& formattedEnchantmentText
);

MCAPI bool applyEnchant(::ItemStackBase& out, ::EnchantmentInstance const& enchant, bool allowNonVanilla);

MCNAPI int applyEnchant(::ItemStackBase& out, ::ItemEnchants const& enchants, bool allowNonVanilla);

MCNAPI float
calculateAfterBreachArmorFraction(::ActorUniqueID const& attackerID, ::Mob const& target, float armorFraction);

MCAPI ::EnchantResult
canEnchant(::ItemStackBase const& item, ::EnchantmentInstance const& enchant, bool allowNonVanilla);

MCAPI int
combineEnchantedItems(::ItemStack const& first, ::ItemStack const& second, ::ItemStack& out, bool bookEnchant);

MCNAPI void doPostHurtEffects(::Mob& victim, ::Mob& attacker);

MCNAPI void doPostPiercingAttackEffects(::Actor& attacker);

MCNAPI void doPreDamageEffects(::Actor& victim, ::Actor& attacker);

MCAPI ::std::vector<::Vec3> getBookCasePositions(::BlockSource& source, ::Vec3 const& pos);

MCNAPI void getCurses(::ItemStackBase const& item, ::std::vector<::EnchantmentInstance>& outputCurses);

MCNAPI float getDamageReduction(::ActorDamageSource const& source, ::Mob const& target);

MCAPI ::std::vector<int> getEnchantCosts(::IRandom& random, ::ItemStackBase const& itemInst, int bookcaseCount);

MCAPI int getEnchantLevel(::Enchant::Type enchantType, ::ItemStackBase const& stack);

MCAPI ::std::string getEnchantNameAndLevel(::Enchant::Type id, int level);

#ifdef LL_PLAT_C
MCNAPI ::std::string getEnchantStringId(::Enchant::Type id);
#endif

MCNAPI ::std::vector<::Vec3> getEnchantingTablePositions(::BlockSource& source, ::Vec3 const& pos);

MCAPI ::Enchant::Type getEnchantmentId(::HashedString const& stringId);

MCNAPI float getMeleeDamageBonus(::Actor const& victim, ::Actor const& attacker);

MCAPI ::ItemStack const& getRandomDamagedItemWithMending(::IRandom& random, ::Mob const& equipped);

MCNAPI ::ItemStack const& getRandomItemWith(::Enchant::Type type, ::Mob const& equipped, ::EquipmentFilter filter);

MCNAPI ::std::string getRandomName(::IRandom& random);

MCNAPI int getTotalProtectionLevels(::Enchant::Type type, ::Mob const& target);

MCNAPI int getTradeableRandomEnchantIndex(::IRandom& random);

MCAPI bool hasEnchant(::Enchant::Type enchantType, ::ItemStackBase const& item);

MCAPI void randomlyEnchant(::IRandom& random, ::ItemStackBase& out, int cost, int valueBuff, bool treasure);

MCNAPI void removeEnchants(::ItemStack& out);

MCNAPI ::ItemEnchants
selectEnchantments(::IRandom& random, ::Item const* item, int enchantCost, int valueBuff, bool treasure);
// NOLINTEND

} // namespace EnchantUtils
