#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/actor/BaseGoalDefinition.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_100 {

struct DragonFlamingGoalDefinition : public ::SharedTypes::BaseGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk534f24;
    ::ll::UntypedStorage<4, 4>  mUnk3f19db;
    ::ll::UntypedStorage<4, 4>  mUnk4cdb88;
    ::ll::UntypedStorage<4, 4>  mUnkfe3d3b;
    ::ll::UntypedStorage<4, 4>  mUnkc3b153;
    ::ll::UntypedStorage<4, 4>  mUnkbc99ff;
    ::ll::UntypedStorage<8, 32> mUnkf188ba;
    // NOLINTEND

public:
    // prevent constructor by default
    DragonFlamingGoalDefinition& operator=(DragonFlamingGoalDefinition const&);
    DragonFlamingGoalDefinition(DragonFlamingGoalDefinition const&);
    DragonFlamingGoalDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::SharedTypes::v1_21_100::DragonFlamingGoalDefinition&
    operator=(::SharedTypes::v1_21_100::DragonFlamingGoalDefinition&&);

    MCNAPI ~DragonFlamingGoalDefinition();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static int const& DEFAULT_GROUND_FLAME_COUNT();

    MCNAPI static ::std::string_view const& DEFAULT_SMOKE_COLOR();

    MCNAPI static float const& DEFAULT_SMOKE_RADIUS();

    MCNAPI static float const& DEFAULT_SMOKE_TIME();

    MCNAPI static ::std::string_view const& NAME();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_100
