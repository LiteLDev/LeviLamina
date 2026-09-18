#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_20/filter_groups/FilterGroupData.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::v1_26_50 { struct SoundDefinition; }
// clang-format on

namespace SharedTypes::v1_26_50 {

struct AngerLevelComponentDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                                                    mAngerDecrementIntervalSeconds;
    ::ll::TypedStorage<4, 4, int>                                                      mAngryBoost;
    ::ll::TypedStorage<4, 4, int>                                                      mAngryThreshold;
    ::ll::TypedStorage<4, 4, int>                                                      mAnnoyingness;
    ::ll::TypedStorage<4, 4, int>                                                      mMaxAngerLevel;
    ::ll::TypedStorage<8, 232, ::SharedTypes::v1_21_20::FilterGroupData>               mNuisanceFilter;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::v1_26_50::SoundDefinition>> mOnIncreaseSoundDefinitions;
    ::ll::TypedStorage<4, 4, int>                                                      mProjectileAnnoyingness;
    ::ll::TypedStorage<1, 1, bool>                                                     mShouldRemoveTarget;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI AngerLevelComponentDefinition();

    MCAPI void addOnIncreaseSoundDefinition(::SharedTypes::v1_26_50::SoundDefinition const& soundDefinition);

    MCAPI ~AngerLevelComponentDefinition();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_50
