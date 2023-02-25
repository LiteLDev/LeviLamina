/**
 * @file  SetBannerDetailsFunction.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Json.hpp"
#include "LootItemFunction.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SetBannerDetailsFunction.
 *
 */
class SetBannerDetailsFunction : public LootItemFunction {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SETBANNERDETAILSFUNCTION
public:
    class SetBannerDetailsFunction& operator=(class SetBannerDetailsFunction const &) = delete;
    SetBannerDetailsFunction(class SetBannerDetailsFunction const &) = delete;
    SetBannerDetailsFunction() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~SetBannerDetailsFunction();
    /**
     * @vftbl  1
     * @symbol  ?apply\@SetBannerDetailsFunction\@\@UEAAXAEAVItemStack\@\@AEAVRandom\@\@AEAVLootTableContext\@\@\@Z
     */
    virtual void apply(class ItemStack &, class Random &, class LootTableContext &);
    /**
     * @vftbl  3
     * @symbol  ?apply\@SetBannerDetailsFunction\@\@UEAAXAEAVItemInstance\@\@AEAVRandom\@\@AEAVLootTableContext\@\@\@Z
     */
    virtual void apply(class ItemInstance &, class Random &, class LootTableContext &);
    /**
     * @symbol  ?deserialize\@SetBannerDetailsFunction\@\@SA?AV?$unique_ptr\@VLootItemFunction\@\@U?$default_delete\@VLootItemFunction\@\@\@std\@\@\@std\@\@VValue\@Json\@\@AEAV?$vector\@V?$unique_ptr\@VLootItemCondition\@\@U?$default_delete\@VLootItemCondition\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VLootItemCondition\@\@U?$default_delete\@VLootItemCondition\@\@\@std\@\@\@std\@\@\@2\@\@3\@\@Z
     */
    MCAPI static std::unique_ptr<class LootItemFunction> deserialize(class Json::Value, std::vector<std::unique_ptr<class LootItemCondition>> &);

//private:
    /**
     * @symbol  ?_apply\@SetBannerDetailsFunction\@\@AEBAXAEAVItemStackBase\@\@AEAVRandom\@\@AEAVLootTableContext\@\@\@Z
     */
    MCAPI void _apply(class ItemStackBase &, class Random &, class LootTableContext &) const;
    /**
     * @symbol  ?_parseBannerPattern\@SetBannerDetailsFunction\@\@CAXAEAV?$vector\@U?$pair\@EW4ItemColor\@\@\@std\@\@V?$allocator\@U?$pair\@EW4ItemColor\@\@\@std\@\@\@2\@\@std\@\@AEBVValue\@Json\@\@\@Z
     */
    MCAPI static void _parseBannerPattern(std::vector<struct std::pair<unsigned char, enum class ItemColor>> &, class Json::Value const &);

private:

};