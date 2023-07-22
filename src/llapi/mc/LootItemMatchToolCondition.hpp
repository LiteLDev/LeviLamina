/**
 * @file  LootItemMatchToolCondition.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class LootItemMatchToolCondition.
 *
 */
class LootItemMatchToolCondition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LOOTITEMMATCHTOOLCONDITION
public:
    class LootItemMatchToolCondition& operator=(class LootItemMatchToolCondition const &) = delete;
    LootItemMatchToolCondition(class LootItemMatchToolCondition const &) = delete;
    LootItemMatchToolCondition() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~LootItemMatchToolCondition();
    /**
     * @vftbl  1
     * @symbol  ?applies\@LootItemMatchToolCondition\@\@UEAA_NAEAVRandom\@\@AEAVLootTableContext\@\@\@Z
     */
    virtual bool applies(class Random &, class LootTableContext &);
    /**
     * @symbol  ??0LootItemMatchToolCondition\@\@QEAA\@UIntRange\@\@0V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV?$vector\@UEnchantInfo\@LootItemMatchToolCondition\@\@V?$allocator\@UEnchantInfo\@LootItemMatchToolCondition\@\@\@std\@\@\@3\@\@Z
     */
    MCAPI LootItemMatchToolCondition(struct IntRange, struct IntRange, std::string, std::vector<struct LootItemMatchToolCondition::EnchantInfo> const &);
    /**
     * @symbol  ?deserialize\@LootItemMatchToolCondition\@\@SA?AV?$unique_ptr\@VLootItemCondition\@\@U?$default_delete\@VLootItemCondition\@\@\@std\@\@\@std\@\@VValue\@Json\@\@\@Z
     */
    MCAPI static std::unique_ptr<class LootItemCondition> deserialize(class Json::Value);

};