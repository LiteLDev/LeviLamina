/**
 * @file  LootItemActorHasVariantCondition.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class LootItemActorHasVariantCondition.
 *
 */
class LootItemActorHasVariantCondition {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LOOTITEMACTORHASVARIANTCONDITION
public:
    class LootItemActorHasVariantCondition& operator=(class LootItemActorHasVariantCondition const &) = delete;
    LootItemActorHasVariantCondition(class LootItemActorHasVariantCondition const &) = delete;
    LootItemActorHasVariantCondition() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~LootItemActorHasVariantCondition();
    /**
     * @vftbl  1
     * @symbol  ?applies\@LootItemActorHasVariantCondition\@\@UEAA_NAEAVRandom\@\@AEAVLootTableContext\@\@\@Z
     */
    virtual bool applies(class Random &, class LootTableContext &);
    /**
     * @symbol  ?deserialize\@LootItemActorHasVariantCondition\@\@SA?AV?$unique_ptr\@VLootItemCondition\@\@U?$default_delete\@VLootItemCondition\@\@\@std\@\@\@std\@\@VValue\@Json\@\@\@Z
     */
    MCAPI static std::unique_ptr<class LootItemCondition> deserialize(class Json::Value);

};