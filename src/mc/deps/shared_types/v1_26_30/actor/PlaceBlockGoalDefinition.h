#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/actor/BaseGoalDefinition.h"
#include "mc/deps/shared_types/legacy/BlockDescriptor.h"
#include "mc/deps/shared_types/shared_types/IntRange.h"
#include "mc/deps/shared_types/v1_21_120/actor/ActorDefinitionTrigger.h"
#include "mc/deps/shared_types/v1_21_20/filter_groups/FilterGroupData.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_30 {

struct PlaceBlockGoalDefinition : public ::SharedTypes::BaseGoalDefinition {
public:
    // PlaceBlockGoalDefinition inner types declare
    // clang-format off
    struct WeightedBlockDescriptor;
    // clang-format on

    // PlaceBlockGoalDefinition inner types define
    struct WeightedBlockDescriptor {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 80, ::SharedTypes::Legacy::BlockDescriptor>    mBlock;
        ::ll::TypedStorage<8, 232, ::SharedTypes::v1_21_20::FilterGroupData> mFilter;
        ::ll::TypedStorage<4, 4, int>                                        mWeight;
        // NOLINTEND

    public:
        // prevent constructor by default
        WeightedBlockDescriptor& operator=(WeightedBlockDescriptor const&);
        WeightedBlockDescriptor();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI WeightedBlockDescriptor(::SharedTypes::v1_26_30::PlaceBlockGoalDefinition::WeightedBlockDescriptor&&);

        MCAPI
        WeightedBlockDescriptor(::SharedTypes::v1_26_30::PlaceBlockGoalDefinition::WeightedBlockDescriptor const&);

        MCAPI bool operator==(::SharedTypes::v1_26_30::PlaceBlockGoalDefinition::WeightedBlockDescriptor const&) const;
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor(::SharedTypes::v1_26_30::PlaceBlockGoalDefinition::WeightedBlockDescriptor&&);

        MCAPI void* $ctor(::SharedTypes::v1_26_30::PlaceBlockGoalDefinition::WeightedBlockDescriptor const&);
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::Legacy::BlockDescriptor>> mPlaceableCarriedBlocks;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::v1_26_30::PlaceBlockGoalDefinition::WeightedBlockDescriptor>>
                                                                                 mRandomlyPlaceableBlocks;
    ::ll::TypedStorage<8, 232, ::SharedTypes::v1_21_20::FilterGroupData>         mCanPlace;
    ::ll::TypedStorage<8, 272, ::SharedTypes::v1_21_120::ActorDefinitionTrigger> mOnPlace;
    ::ll::TypedStorage<4, 8, ::SharedTypes::IntRange>                            mXZRange;
    ::ll::TypedStorage<4, 8, ::SharedTypes::IntRange>                            mYRange;
    ::ll::TypedStorage<4, 4, float>                                              mChance;
    ::ll::TypedStorage<1, 1, bool>                                               mAffectedByGriefingRule;
    // NOLINTEND

public:
    // prevent constructor by default
    PlaceBlockGoalDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PlaceBlockGoalDefinition(::SharedTypes::v1_26_30::PlaceBlockGoalDefinition&&);

    MCAPI PlaceBlockGoalDefinition(::SharedTypes::v1_26_30::PlaceBlockGoalDefinition const&);

    MCAPI ::SharedTypes::v1_26_30::PlaceBlockGoalDefinition&
    operator=(::SharedTypes::v1_26_30::PlaceBlockGoalDefinition&&);

    MCAPI ::SharedTypes::v1_26_30::PlaceBlockGoalDefinition&
    operator=(::SharedTypes::v1_26_30::PlaceBlockGoalDefinition const&);

    MCAPI bool operator==(::SharedTypes::v1_26_30::PlaceBlockGoalDefinition const&) const;

    MCAPI ~PlaceBlockGoalDefinition();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SharedTypes::v1_26_30::PlaceBlockGoalDefinition&&);

    MCAPI void* $ctor(::SharedTypes::v1_26_30::PlaceBlockGoalDefinition const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_30
