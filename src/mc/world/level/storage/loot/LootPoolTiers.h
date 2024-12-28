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
    ::ll::UntypedStorage<4, 4> mUnk6cee5e;
    ::ll::UntypedStorage<4, 4> mUnke79884;
    ::ll::UntypedStorage<4, 4> mUnk1edcd4;
    // NOLINTEND

public:
    // prevent constructor by default
    LootPoolTiers& operator=(LootPoolTiers const&);
    LootPoolTiers(LootPoolTiers const&);
    LootPoolTiers();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::unique_ptr<::LootPoolTiers> deserialize(::Json::Value tiers);
    // NOLINTEND
};
