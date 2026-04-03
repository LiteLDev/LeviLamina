#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_26_10/actor/WorkGoalDefinition.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_10 {

struct WorkComposterGoalDefinition : public ::SharedTypes::v1_26_10::WorkGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>  mMinUseBlockDelay;
    ::ll::TypedStorage<4, 4, int>  mMaxUseBlockDelay;
    ::ll::TypedStorage<4, 4, int>  mMaxItemsPerUse;
    ::ll::TypedStorage<4, 4, int>  mMaxBlockInteractions;
    ::ll::TypedStorage<1, 1, bool> mCanFillComposter;
    ::ll::TypedStorage<1, 1, bool> mCanEmptyComposter;
    ::ll::TypedStorage<4, 4, int>  mMinItemCount;
    // NOLINTEND

public:
    // prevent constructor by default
    WorkComposterGoalDefinition& operator=(WorkComposterGoalDefinition const&);
    WorkComposterGoalDefinition(WorkComposterGoalDefinition const&);
    WorkComposterGoalDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI WorkComposterGoalDefinition(::SharedTypes::v1_26_10::WorkComposterGoalDefinition&&);

    MCAPI ::SharedTypes::v1_26_10::WorkComposterGoalDefinition&
    operator=(::SharedTypes::v1_26_10::WorkComposterGoalDefinition&&);

    MCAPI ~WorkComposterGoalDefinition();
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
    MCAPI void* $ctor(::SharedTypes::v1_26_10::WorkComposterGoalDefinition&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_10
