#include "mc/world/item/enchanting/EnchantUtils.h"

#include "mc/world/item/Item.h"
#include "mc/world/item/enchanting/EnchantmentInstance.h"

namespace EnchantUtils {

std::vector<::std::pair<::EnchantmentInstance, int>>
getAvailableEnchantmentResults(::Item const* item, int value, bool treasure) {
    std::vector<::std::pair<::EnchantmentInstance, int>> result;
    if (item) {
        int const itemSlot = item->getEnchantSlot();
        if (itemSlot != 0) {
            std::vector<int> availableEnchantTypes;
            for (int type = 0; type < static_cast<int>(::Enchant::Type::NumEnchantments); ++type) {
                ::Enchant const& enchant = *Enchant::mEnchants()[type];
                if (!enchant.mIsDisabled
                    && (itemSlot == -1 || (itemSlot & enchant.mPrimarySlots) != 0
                        || (itemSlot & enchant.mSecondarySlots) != 0)) {
                    availableEnchantTypes.emplace_back(type);
                }
            }
            for (int type : availableEnchantTypes) {
                Enchant const& enchant = *Enchant::mEnchants()[type];
                if ((treasure || !enchant.isTreasureOnly()) && enchant.isDiscoverable()) {
                    for (int level = enchant.getMinLevel(); level <= enchant.getMaxLevel(); ++level) {
                        if (value >= enchant.getMinCost(level)) {
                            bool found = false;
                            for (auto& entry : result) {
                                if (entry.first.mEnchantType == static_cast<Enchant::Type>(type)) {
                                    entry.first.mLevel = level;
                                    found              = true;
                                }
                            }
                            if (!found) {
                                int rarityWeight = 0;
                                switch (enchant.mFrequency) {
                                case Enchant::Frequency::VeryRare:
                                    rarityWeight = 1;
                                    break;
                                case Enchant::Frequency::Rare:
                                    rarityWeight = 2;
                                    break;
                                case Enchant::Frequency::Uncommon:
                                    rarityWeight = 5;
                                    break;
                                case Enchant::Frequency::Common:
                                    rarityWeight = 10;
                                    break;
                                default:
                                    break;
                                }
                                result.emplace_back(
                                    EnchantmentInstance{static_cast<::Enchant::Type>(type), level},
                                    rarityWeight
                                );
                            }
                        }
                    }
                }
            }
        }
    }
    return result;
}
} // namespace EnchantUtils
