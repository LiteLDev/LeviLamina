#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec2.h"
#include "mc/deps/shared_types/actor/BaseGoalDefinition.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::Legacy { struct BlockDescriptor; }
namespace SharedTypes::Legacy { struct ItemDescriptor; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_100 {

struct TransportItemsGoalDefinition : public ::SharedTypes::BaseGoalDefinition {
public:
    // TransportItemsGoalDefinition inner types define
    enum class PlaceStrategy : int {
        Any                 = 0,
        WithMatching        = 1,
        WithMatchingOrEmpty = 2,
    };

    enum class SearchStrategy : int {
        Nearest = 0,
        Random  = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::Legacy::BlockDescriptor>> mSourceContainerTypes;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::Legacy::BlockDescriptor>> mDestinationContainerTypes;
    ::ll::TypedStorage<4, 4, uint>                                                   mMaxStackSize;
    ::ll::TypedStorage<4, 4, float>                                                  mInteractionTime;
    ::ll::TypedStorage<1, 1, bool>                                                   mAllowSimultaneousInteraction;
    ::ll::TypedStorage<4, 4, ::SharedTypes::v1_21_100::TransportItemsGoalDefinition::SearchStrategy> mSearchStrategy;
    ::ll::TypedStorage<4, 8, ::Vec2>                                                                 mSearchDistance;
    ::ll::TypedStorage<4, 4, uint> mMaxVisitedContainers;
    ::ll::TypedStorage<4, 4, uint> mInitialCooldown;
    ::ll::TypedStorage<4, 4, uint> mIdleCooldown;
    ::ll::TypedStorage<4, 4, ::SharedTypes::v1_21_100::TransportItemsGoalDefinition::PlaceStrategy> mPlaceStrategy;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::Legacy::ItemDescriptor>>                 mAllowedItems;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::Legacy::ItemDescriptor>>                 mDisallowedItems;
    // NOLINTEND

public:
    // prevent constructor by default
    TransportItemsGoalDefinition& operator=(TransportItemsGoalDefinition const&);
    TransportItemsGoalDefinition(TransportItemsGoalDefinition const&);
    TransportItemsGoalDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI TransportItemsGoalDefinition(::SharedTypes::v1_21_100::TransportItemsGoalDefinition&&);

    MCAPI ::SharedTypes::v1_21_100::TransportItemsGoalDefinition&
    operator=(::SharedTypes::v1_21_100::TransportItemsGoalDefinition&&);

    MCAPI ~TransportItemsGoalDefinition();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static bool const& ALLOW_SIMULTANEOUS_INTERACTION();

    MCAPI static uint const& IDLE_COOLDOWN();

    MCAPI static uint const& INITIAL_COOLDOWN();

    MCAPI static float const& INTERACTION_TIME();

    MCAPI static uint const& MAX_STACK_SIZE();

    MCAPI static uint const& MAX_VISITED_CONTAINERS();

    MCAPI static ::std::string_view const& NAME();

    MCAPI static ::Vec2 const& SEARCH_DISTANCE();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SharedTypes::v1_21_100::TransportItemsGoalDefinition&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_100
