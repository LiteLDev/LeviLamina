#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/shared_types/actor/BaseGoalDefinition.h"
#include "mc/deps/shared_types/v1_21_20/filter_groups/FilterGroupData.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_10 {

struct OfferFlowerGoalDefinition : public ::SharedTypes::BaseGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                                      mMaxOfferFlowerDurationSeconds;
    ::ll::TypedStorage<4, 4, float>                                      mChanceToStart;
    ::ll::TypedStorage<8, 232, ::SharedTypes::v1_21_20::FilterGroupData> mFilters;
    ::ll::TypedStorage<4, 12, ::Vec3>                                    mSearchArea;
    ::ll::TypedStorage<4, 4, float>                                      mMaxRotationX;
    ::ll::TypedStorage<4, 4, float>                                      mMaxHeadRotationY;
    // NOLINTEND

public:
    // prevent constructor by default
    OfferFlowerGoalDefinition& operator=(OfferFlowerGoalDefinition const&);
    OfferFlowerGoalDefinition(OfferFlowerGoalDefinition const&);
    OfferFlowerGoalDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI OfferFlowerGoalDefinition(::SharedTypes::v1_26_10::OfferFlowerGoalDefinition&&);

    MCAPI ~OfferFlowerGoalDefinition();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::Vec3 const& DEFAULT_SEARCH_AREA();

    MCAPI static ::std::string_view const& NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SharedTypes::v1_26_10::OfferFlowerGoalDefinition&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_10
