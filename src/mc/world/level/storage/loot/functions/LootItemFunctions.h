#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class LootItemFunctions {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LOOTITEMFUNCTIONS
public:
    LootItemFunctions& operator=(LootItemFunctions const&) = delete;
    LootItemFunctions(LootItemFunctions const&)            = delete;
    LootItemFunctions()                                    = delete;
#endif

public:
    /**
     * @symbol
     * ?deserialize\@LootItemFunctions\@\@SA?AV?$vector\@V?$unique_ptr\@VLootItemFunction\@\@U?$default_delete\@VLootItemFunction\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VLootItemFunction\@\@U?$default_delete\@VLootItemFunction\@\@\@std\@\@\@std\@\@\@2\@\@std\@\@VValue\@Json\@\@\@Z
     */
    MCAPI static std::vector<std::unique_ptr<class LootItemFunction>> deserialize(class Json::Value);
};
