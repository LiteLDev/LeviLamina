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

struct TakeBlockGoalDefinition : public ::SharedTypes::BaseGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::Legacy::BlockDescriptor>> mValidBlocks;
    ::ll::TypedStorage<8, 232, ::SharedTypes::v1_21_20::FilterGroupData>             mCanTake;
    ::ll::TypedStorage<8, 272, ::SharedTypes::v1_21_120::ActorDefinitionTrigger>     mOnTake;
    ::ll::TypedStorage<4, 8, ::SharedTypes::IntRange>                                mXZRange;
    ::ll::TypedStorage<4, 8, ::SharedTypes::IntRange>                                mYRange;
    ::ll::TypedStorage<4, 4, float>                                                  mChance;
    ::ll::TypedStorage<1, 1, bool>                                                   mAffectedByGriefingRule;
    ::ll::TypedStorage<1, 1, bool>                                                   mRequiresLineOfSight;
    // NOLINTEND

public:
    // prevent constructor by default
    TakeBlockGoalDefinition& operator=(TakeBlockGoalDefinition const&);
    TakeBlockGoalDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI TakeBlockGoalDefinition(::SharedTypes::v1_26_30::TakeBlockGoalDefinition&&);

    MCNAPI TakeBlockGoalDefinition(::SharedTypes::v1_26_30::TakeBlockGoalDefinition const&);

    MCNAPI ::SharedTypes::v1_26_30::TakeBlockGoalDefinition&
    operator=(::SharedTypes::v1_26_30::TakeBlockGoalDefinition&&);

    MCNAPI bool operator==(::SharedTypes::v1_26_30::TakeBlockGoalDefinition const&) const;

    MCNAPI ~TakeBlockGoalDefinition();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::string_view const& NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SharedTypes::v1_26_30::TakeBlockGoalDefinition&&);

    MCNAPI void* $ctor(::SharedTypes::v1_26_30::TakeBlockGoalDefinition const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_30
