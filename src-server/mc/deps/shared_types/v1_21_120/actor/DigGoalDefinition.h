#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/versionless/actor/BaseGoalDefinition.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_120 {

struct DigGoalDefinition : public ::SharedTypes::BaseGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk3d08ce;
    ::ll::UntypedStorage<4, 4> mUnkbacc0d;
    ::ll::UntypedStorage<1, 1> mUnkfc9c7c;
    ::ll::UntypedStorage<1, 1> mUnk5a21e2;
    ::ll::UntypedStorage<1, 1> mUnkcde5ca;
    ::ll::UntypedStorage<1, 1> mUnk8e7256;
    ::ll::UntypedStorage<8, 368> mUnk6b3205;
    // NOLINTEND

public:
    // prevent constructor by default
    DigGoalDefinition& operator=(DigGoalDefinition const&);
    DigGoalDefinition(DigGoalDefinition const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DigGoalDefinition();

    MCNAPI ::SharedTypes::v1_21_120::DigGoalDefinition& operator=(::SharedTypes::v1_21_120::DigGoalDefinition&&);

    MCNAPI ~DigGoalDefinition();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static bool const& DEFAULT_ALLOW_DIG_WHEN_NAMED();

    MCNAPI static bool const& DEFAULT_DIGS_IN_DAYLIGHT();

    MCNAPI static float const& DEFAULT_DURATION();

    MCNAPI static float const& DEFAULT_IDLE_TIME();

    MCNAPI static bool const& DEFAULT_SUSPICION_IS_DISTURBANCE();

    MCNAPI static bool const& DEFAULT_VIBRATION_IS_DISTURBANCE();

    MCNAPI static ::std::string_view const& NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
