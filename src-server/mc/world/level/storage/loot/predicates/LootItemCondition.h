#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class LootTableContext;
class Random;
namespace Json { class Value; }
// clang-format on

class LootItemCondition {
public:
    // LootItemCondition inner types define
    enum class ConditionType : int {
        KilledByPlayer                 = 0,
        KilledByPlayerOrPets           = 1,
        KilledByActor                  = 2,
        ActorKilled                    = 3,
        RandomChance                   = 4,
        RandomDifficultyChance         = 5,
        RandomChanceWithLooting        = 6,
        RandomRegionalDifficultyChance = 7,
        HasMarkVariant                 = 8,
        HasVariant                     = 9,
        MatchTool                      = 10,
        DamagedByActor                 = 11,
        PassengerOfActor               = 12,
        IsBaby                         = 13,
        ActorFilter                    = 14,
        HasPropertyCondition           = 15,
        BoolPropertyValueCondition     = 16,
        IntPropertyValueCondition      = 17,
        FloatPropertyValueCondition    = 18,
        EnumPropertyValueCondition     = 19,
    };

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LootItemCondition() = default;

    // vIndex: 1
    virtual bool applies(::Random&, ::LootTableContext&) = 0;

    // vIndex: 2
    virtual ::LootItemCondition::ConditionType getConditionType() const = 0;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::unique_ptr<::LootItemCondition> deserialize(::Json::Value const& object, bool);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
