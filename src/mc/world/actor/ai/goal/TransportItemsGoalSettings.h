#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec2.h"

// auto generated forward declare list
// clang-format off
class BlockDescriptor;
class ItemDescriptor;
// clang-format on

struct TransportItemsGoalSettings {
public:
    // TransportItemsGoalSettings inner types define
    enum class SearchStrategy : int {
        Nearest = 0,
        Random  = 1,
    };

    enum class PlaceStrategy : int {
        Any                 = 0,
        WithMatching        = 1,
        WithMatchingOrEmpty = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockDescriptor>>            mSourceContainerTypes;
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockDescriptor>>            mDestinationContainerTypes;
    ::ll::TypedStorage<4, 4, uint>                                         mMaxStackSize;
    ::ll::TypedStorage<4, 4, float>                                        mInteractionTime;
    ::ll::TypedStorage<1, 1, bool>                                         mAllowSimultaneousInteraction;
    ::ll::TypedStorage<4, 4, ::TransportItemsGoalSettings::SearchStrategy> mSearchStrategy;
    ::ll::TypedStorage<4, 8, ::Vec2>                                       mSearchDistance;
    ::ll::TypedStorage<4, 4, uint>                                         mMaxVisitedContainers;
    ::ll::TypedStorage<4, 4, uint>                                         mIdleCooldown;
    ::ll::TypedStorage<4, 4, ::TransportItemsGoalSettings::PlaceStrategy>  mPlaceStrategy;
    ::ll::TypedStorage<8, 24, ::std::vector<::ItemDescriptor>>             mAllowedItems;
    ::ll::TypedStorage<8, 24, ::std::vector<::ItemDescriptor>>             mDisallowedItems;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~TransportItemsGoalSettings();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
