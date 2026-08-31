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

namespace EnchantUtils {
// functions
// NOLINTBEGIN
MCAPI void appendEnchantToFormattedText(
    ::Enchant::Type                      type,
    ::std::string_view                   enchantName,
    ::Bedrock::Safety::RedactableString& formattedEnchantmentText
);

MCAPI bool applyEnchant(::ItemStackBase& out, ::EnchantmentInstance const& enchant, bool allowNonVanilla);

MCAPI int applyEnchant(::ItemStackBase& out, ::ItemEnchants const& enchants, bool allowNonVanilla);

MCAPI float
calculateAfterBreachArmorFraction(::ActorUniqueID const& attackerID, ::Mob const& target, float armorFraction);

MCAPI ::EnchantResult
canEnchant(::ItemStackBase const& item, ::EnchantmentInstance const& enchant, bool allowNonVanilla);

MCAPI int
combineEnchantedItems(::ItemStack const& first, ::ItemStack const& second, ::ItemStack& out, bool bookEnchant);

MCAPI void doPostHurtEffects(::Mob& victim, ::Mob& attacker);

MCAPI void doPostPiercingAttackEffects(::Actor& attacker);

MCAPI void doPreDamageEffects(::Actor& victim, ::Actor& attacker);

MCAPI ::std::vector<::Vec3> getBookCasePositions(::BlockSource& source, ::Vec3 const& pos);

MCAPI void getCurses(::ItemStackBase const& item, ::std::vector<::EnchantmentInstance>& outputCurses);

MCAPI float getDamageReduction(::ActorDamageSource const& source, ::Mob const& target);

MCAPI ::std::vector<int> getEnchantCosts(::ItemStackBase const& itemInst, int bookcaseCount);

MCAPI int getEnchantLevel(::Enchant::Type enchantType, ::ItemStackBase const& stack);

MCAPI ::std::string getEnchantNameAndLevel(::Enchant::Type id, int level);

#ifdef LL_PLAT_C
MCAPI ::std::string getEnchantStringId(::Enchant::Type id);
#endif

MCAPI ::std::vector<::Vec3> getEnchantingTablePositions(::BlockSource& source, ::Vec3 const& pos);

MCAPI ::Enchant::Type getEnchantmentId(::HashedString const& stringId);

MCAPI float getMeleeDamageBonus(::Actor const& victim, ::Actor const& attacker);

MCAPI ::ItemStack const& getRandomDamagedItemWithMending(::Mob const& equipped);

MCAPI ::ItemStack const& getRandomItemWith(::Enchant::Type type, ::Mob const& equipped, ::EquipmentFilter filter);

MCAPI ::std::string getRandomName();

MCAPI int getTotalProtectionLevels(::Enchant::Type type, ::Mob const& target);

MCAPI int getTradeableRandomEnchantIndex(::Random& random);

MCAPI bool hasEnchant(::Enchant::Type enchantType, ::ItemStackBase const& item);

MCFOLD void randomlyEnchant(::ItemInstance& out, int cost, int valueBuff, bool treasure);

MCFOLD void randomlyEnchant(::ItemStack& out, int cost, int valueBuff, bool treasure);

MCAPI void removeEnchants(::ItemStack& out);

MCAPI ::ItemEnchants selectEnchantments(::Item const* item, int enchantCost, int valueBuff, bool treasure);
// NOLINTEND

} // namespace EnchantUtils
