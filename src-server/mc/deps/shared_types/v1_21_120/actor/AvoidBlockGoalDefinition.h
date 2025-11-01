#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/versionless/actor/BaseGoalDefinition.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_120 {

struct AvoidBlockGoalDefinition : public ::SharedTypes::BaseGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk401dae;
    ::ll::UntypedStorage<4, 4> mUnkfcdd7c;
    ::ll::UntypedStorage<4, 4> mUnkfb3abf;
    ::ll::UntypedStorage<4, 4> mUnk649bbd;
    ::ll::UntypedStorage<4, 4> mUnkb788ab;
    ::ll::UntypedStorage<8, 32> mUnk6e8ad3;
    ::ll::UntypedStorage<8, 24> mUnke64ca5;
    ::ll::UntypedStorage<8, 24> mUnk216ba1;
    ::ll::UntypedStorage<4, 4> mUnke49ebf;
    ::ll::UntypedStorage<4, 8> mUnk2532c8;
    // NOLINTEND

public:
    // prevent constructor by default
    AvoidBlockGoalDefinition& operator=(AvoidBlockGoalDefinition const&);
    AvoidBlockGoalDefinition(AvoidBlockGoalDefinition const&);
    AvoidBlockGoalDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::SharedTypes::v1_21_120::AvoidBlockGoalDefinition& operator=(::SharedTypes::v1_21_120::AvoidBlockGoalDefinition&&);

    MCNAPI ~AvoidBlockGoalDefinition();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static int const& DEFAULT_INTERVAL();

    MCNAPI static int const& DEFAULT_SEARCH_HEIGHT();

    MCNAPI static int const& DEFAULT_SEARCH_RANGE();

    MCNAPI static float const& DEFAULT_SPRINT_SPEED_MODIFIER();

    MCNAPI static ::std::string_view const& DEFAULT_TARGET_SELECTION_METHOD();

    MCNAPI static float const& DEFAULT_WALK_SPEED_MODIFIER();

    MCNAPI static ::std::string_view const& NAME();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
