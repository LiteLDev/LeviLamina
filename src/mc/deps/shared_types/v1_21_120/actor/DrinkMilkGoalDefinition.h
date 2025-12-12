#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/actor/BaseGoalDefinition.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_120 {

struct DrinkMilkGoalDefinition : public ::SharedTypes::BaseGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>   mUnk36bd64;
    ::ll::UntypedStorage<8, 328> mUnk5196d0;
    // NOLINTEND

public:
    // prevent constructor by default
    DrinkMilkGoalDefinition& operator=(DrinkMilkGoalDefinition const&);
    DrinkMilkGoalDefinition(DrinkMilkGoalDefinition const&);
    DrinkMilkGoalDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~DrinkMilkGoalDefinition();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static float const& DEFAULT_COOLDOWN_SECONDS();

    MCNAPI static ::std::string_view const& NAME();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_120
