#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/actor/BaseMoveToBlockGoalDefinition.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_10 {

struct RaidGardenGoalDefinition : public ::SharedTypes::BaseMoveToBlockGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                           mMaxToEat;
    ::ll::TypedStorage<4, 4, int>                           mFullDelay;
    ::ll::TypedStorage<4, 4, int>                           mEatDelay;
    ::ll::TypedStorage<4, 4, int>                           mInitialEatDelay;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>> mEatBlocks;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~RaidGardenGoalDefinition();
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

} // namespace SharedTypes::v1_26_10
