/**
 * @file  SetItemCountFunction.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "../../Json.hpp"
#include "../../LootItemFunction.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SetItemCountFunction.
 *
 */
class SetItemCountFunction : public LootItemFunction {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SETITEMCOUNTFUNCTION
public:
    class SetItemCountFunction& operator=(class SetItemCountFunction const &) = delete;
    SetItemCountFunction(class SetItemCountFunction const &) = delete;
    SetItemCountFunction() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~SetItemCountFunction();
    /**
     * @hash   -679086466
     * @vftbl  1
     * @symbol  ?apply\@SetItemCountFunction\@\@UEAAXAEAVItemStack\@\@AEAVRandom\@\@AEAVLootTableContext\@\@\@Z
     */
    virtual void apply(class ItemStack &, class Random &, class LootTableContext &);
    /**
     * @hash   1841871731
     * @vftbl  3
     * @symbol  ?apply\@SetItemCountFunction\@\@UEAAXAEAVItemInstance\@\@AEAVRandom\@\@AEAVLootTableContext\@\@\@Z
     */
    virtual void apply(class ItemInstance &, class Random &, class LootTableContext &);
    /**
     * @hash   1537317087
     * @symbol  ?deserialize\@SetItemCountFunction\@\@SA?AV?$unique_ptr\@VLootItemFunction\@\@U?$default_delete\@VLootItemFunction\@\@\@std\@\@\@std\@\@VValue\@Json\@\@AEAV?$vector\@V?$unique_ptr\@VLootItemCondition\@\@U?$default_delete\@VLootItemCondition\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VLootItemCondition\@\@U?$default_delete\@VLootItemCondition\@\@\@std\@\@\@std\@\@\@2\@\@3\@\@Z
     */
    MCAPI static std::unique_ptr<class LootItemFunction> deserialize(class Json::Value, std::vector<std::unique_ptr<class LootItemCondition>> &);

};