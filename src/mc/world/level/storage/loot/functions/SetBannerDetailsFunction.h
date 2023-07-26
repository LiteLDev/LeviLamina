#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/loot/functions/LootItemFunction.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class SetBannerDetailsFunction : public ::LootItemFunction {

public:
    // prevent constructor by default
    SetBannerDetailsFunction& operator=(SetBannerDetailsFunction const&) = delete;
    SetBannerDetailsFunction(SetBannerDetailsFunction const&)            = delete;
    SetBannerDetailsFunction()                                           = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?apply\@SetBannerDetailsFunction\@\@UEAAXAEAVItemStack\@\@AEAVRandom\@\@AEAVLootTableContext\@\@\@Z
     */
    virtual void apply(class ItemStack&, class Random&, class LootTableContext&); // NOLINT
    /**
     * @vftbl 3
     * @symbol ?apply\@SetBannerDetailsFunction\@\@UEAAXAEAVItemInstance\@\@AEAVRandom\@\@AEAVLootTableContext\@\@\@Z
     */
    virtual void apply(class ItemInstance&, class Random&, class LootTableContext&); // NOLINT
    /**
     * @symbol
     * ?deserialize\@SetBannerDetailsFunction\@\@SA?AV?$unique_ptr\@VLootItemFunction\@\@U?$default_delete\@VLootItemFunction\@\@\@std\@\@\@std\@\@VValue\@Json\@\@AEAV?$vector\@V?$unique_ptr\@VLootItemCondition\@\@U?$default_delete\@VLootItemCondition\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VLootItemCondition\@\@U?$default_delete\@VLootItemCondition\@\@\@std\@\@\@std\@\@\@2\@\@3\@\@Z
     */
    MCAPI static std::unique_ptr<class LootItemFunction>
    deserialize(class Json::Value, std::vector<std::unique_ptr<class LootItemCondition>>&); // NOLINT

    // private:
    /**
     * @symbol ?_apply\@SetBannerDetailsFunction\@\@AEBAXAEAVItemStackBase\@\@AEAVRandom\@\@AEAVLootTableContext\@\@\@Z
     */
    MCAPI void _apply(class ItemStackBase&, class Random&, class LootTableContext&) const; // NOLINT
    /**
     * @symbol
     * ?_parseBannerPattern\@SetBannerDetailsFunction\@\@CAXAEAV?$vector\@U?$pair\@EW4ItemColor\@\@\@std\@\@V?$allocator\@U?$pair\@EW4ItemColor\@\@\@std\@\@\@2\@\@std\@\@AEBVValue\@Json\@\@\@Z
     */
    MCAPI static void
    _parseBannerPattern(std::vector<struct std::pair<unsigned char, enum class ItemColor>>&, class Json::Value const&); // NOLINT

private:
};
