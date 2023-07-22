/**
 * @file  LootItemActorKilledCondition.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class LootItemActorKilledCondition.
 *
 */
class LootItemActorKilledCondition {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LOOTITEMACTORKILLEDCONDITION
public:
    class LootItemActorKilledCondition& operator=(class LootItemActorKilledCondition const &) = delete;
    LootItemActorKilledCondition(class LootItemActorKilledCondition const &) = delete;
    LootItemActorKilledCondition() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~LootItemActorKilledCondition();
    /**
     * @vftbl  1
     * @symbol  ?applies\@LootItemActorKilledCondition\@\@UEAA_NAEAVRandom\@\@AEAVLootTableContext\@\@\@Z
     */
    virtual bool applies(class Random &, class LootTableContext &);
    /**
     * @symbol  ?deserialize\@LootItemActorKilledCondition\@\@SA?AV?$unique_ptr\@VLootItemCondition\@\@U?$default_delete\@VLootItemCondition\@\@\@std\@\@\@std\@\@VValue\@Json\@\@\@Z
     */
    MCAPI static std::unique_ptr<class LootItemCondition> deserialize(class Json::Value);

};