/**
 * @file  LootItemActorHasMarkVariantCondition.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class LootItemActorHasMarkVariantCondition.
 *
 */
class LootItemActorHasMarkVariantCondition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LOOTITEMACTORHASMARKVARIANTCONDITION
public:
    class LootItemActorHasMarkVariantCondition& operator=(class LootItemActorHasMarkVariantCondition const &) = delete;
    LootItemActorHasMarkVariantCondition(class LootItemActorHasMarkVariantCondition const &) = delete;
    LootItemActorHasMarkVariantCondition() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~LootItemActorHasMarkVariantCondition();
    /**
     * @vftbl  1
     * @symbol  ?applies\@LootItemActorHasMarkVariantCondition\@\@UEAA_NAEAVRandom\@\@AEAVLootTableContext\@\@\@Z
     */
    virtual bool applies(class Random &, class LootTableContext &);
    /**
     * @symbol  ?deserialize\@LootItemActorHasMarkVariantCondition\@\@SA?AV?$unique_ptr\@VLootItemCondition\@\@U?$default_delete\@VLootItemCondition\@\@\@std\@\@\@std\@\@VValue\@Json\@\@\@Z
     */
    MCAPI static std::unique_ptr<class LootItemCondition> deserialize(class Json::Value);

};