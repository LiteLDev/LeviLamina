#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_20/filter_groups/FilterGroupData.h"
#include "mc/deps/shared_types/v1_26_0/actor/LookAtActorBaseGoalDefinition.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_0 {

struct LookAtEntityGoalDefinition : public ::SharedTypes::v1_26_0::LookAtActorBaseGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 232, ::SharedTypes::v1_21_20::FilterGroupData> mFilters;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~LookAtEntityGoalDefinition();
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
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_0
