#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class LootPoolTiers {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>   mRangeForInitialTier;
    ::ll::TypedStorage<4, 4, int>   mBonusRolls;
    ::ll::TypedStorage<4, 4, float> mBonusRollChance;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::unique_ptr<::LootPoolTiers> deserialize(::Json::Value tiers);
    // NOLINTEND
};
