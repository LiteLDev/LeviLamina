#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/loot/predicates/LootItemCondition.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class LootItemMatchToolCondition : public ::LootItemCondition {
public:
    // LootItemMatchToolCondition inner types declare
    // clang-format off
    struct EnchantInfo;
    // clang-format on

    // LootItemMatchToolCondition inner types define
    struct EnchantInfo {
    public:
        // prevent constructor by default
        EnchantInfo& operator=(EnchantInfo const&);
        EnchantInfo(EnchantInfo const&);
        EnchantInfo();
    };

public:
    // prevent constructor by default
    LootItemMatchToolCondition& operator=(LootItemMatchToolCondition const&);
    LootItemMatchToolCondition(LootItemMatchToolCondition const&);
    LootItemMatchToolCondition();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LootItemMatchToolCondition() = default;

    // vIndex: 1
    virtual bool applies(class Random& random, class LootTableContext& context);

    MCAPI LootItemMatchToolCondition(
        struct IntRange                                                    count,
        struct IntRange                                                    durability,
        std::string                                                        itemName,
        std::vector<struct LootItemMatchToolCondition::EnchantInfo> const& enchantments
    );

    MCAPI static std::unique_ptr<class LootItemCondition> deserialize(class Json::Value object);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(
        struct IntRange                                                    count,
        struct IntRange                                                    durability,
        std::string                                                        itemName,
        std::vector<struct LootItemMatchToolCondition::EnchantInfo> const& enchantments
    );

    MCAPI bool applies$(class Random& random, class LootTableContext& context);

    // NOLINTEND
};
