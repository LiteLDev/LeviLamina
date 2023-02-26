/**
 * @file  LootPoolTiers.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class LootPoolTiers.
 *
 */
class LootPoolTiers {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LOOTPOOLTIERS
public:
    class LootPoolTiers& operator=(class LootPoolTiers const &) = delete;
    LootPoolTiers(class LootPoolTiers const &) = delete;
    LootPoolTiers() = delete;
#endif

public:
    /**
     * @symbol  ?deserialize\@LootPoolTiers\@\@SA?AV?$unique_ptr\@VLootPoolTiers\@\@U?$default_delete\@VLootPoolTiers\@\@\@std\@\@\@std\@\@VValue\@Json\@\@\@Z
     */
    MCAPI static std::unique_ptr<class LootPoolTiers> deserialize(class Json::Value);

};