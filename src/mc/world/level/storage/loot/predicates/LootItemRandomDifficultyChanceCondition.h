#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/DenseEnumMap.h"
#include "mc/deps/shared_types/legacy/Difficulty.h"
#include "mc/world/level/storage/loot/predicates/LootItemCondition.h"

// auto generated forward declare list
// clang-format off
class LootTableContext;
class Random;
namespace Json { class Value; }
// clang-format on

class LootItemRandomDifficultyChanceCondition : public ::LootItemCondition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 16> mUnkf0e81e;
    // NOLINTEND

public:
    // prevent constructor by default
    LootItemRandomDifficultyChanceCondition& operator=(LootItemRandomDifficultyChanceCondition const&);
    LootItemRandomDifficultyChanceCondition(LootItemRandomDifficultyChanceCondition const&);
    LootItemRandomDifficultyChanceCondition();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool applies(::Random& random, ::LootTableContext& context) /*override*/;

    virtual ::LootItemCondition::ConditionType getConditionType() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit LootItemRandomDifficultyChanceCondition(::Json::Value const& object);

    MCNAPI ::Bedrock::DenseEnumMap<::SharedTypes::Legacy::Difficulty, float, 4> const& getChances() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::unique_ptr<::LootItemCondition> deserialize(::Json::Value const& object);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Json::Value const& object);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $applies(::Random& random, ::LootTableContext& context);

    MCNAPI ::LootItemCondition::ConditionType $getConditionType() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
