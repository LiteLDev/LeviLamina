#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/actor/BaseGoalDefinition.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_110 {

struct SwimUpForBreathGoalDefinition : public ::SharedTypes::BaseGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnkd31cca;
    ::ll::UntypedStorage<4, 4>  mUnka6490a;
    ::ll::UntypedStorage<4, 4>  mUnkce4a4f;
    ::ll::UntypedStorage<8, 32> mUnk255705;
    // NOLINTEND

public:
    // prevent constructor by default
    SwimUpForBreathGoalDefinition& operator=(SwimUpForBreathGoalDefinition const&);
    SwimUpForBreathGoalDefinition(SwimUpForBreathGoalDefinition const&);
    SwimUpForBreathGoalDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::SharedTypes::v1_21_110::SwimUpForBreathGoalDefinition&
    operator=(::SharedTypes::v1_21_110::SwimUpForBreathGoalDefinition&&);

    MCNAPI ~SwimUpForBreathGoalDefinition();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::string_view const& DEFAULT_MATERIAL_TYPE_NAME();

    MCNAPI static int const& DEFAULT_SEARCH_HEIGHT();

    MCNAPI static int const& DEFAULT_SEARCH_RADIUS();

    MCNAPI static float const& DEFAULT_SPEED_MOD();

    MCNAPI static ::std::string_view const& NAME();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_110
