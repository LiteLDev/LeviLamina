#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/versionless/actor/BaseGoalDefinition.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_110 {

struct SlimeAttackGoalDefinition : public ::SharedTypes::BaseGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkc7b897;
    ::ll::UntypedStorage<4, 4> mUnk5d46a4;
    ::ll::UntypedStorage<4, 4> mUnk21e0c1;
    ::ll::UntypedStorage<4, 4> mUnk977e5e;
    ::ll::UntypedStorage<1, 1> mUnkf43c55;
    // NOLINTEND

public:
    // prevent constructor by default
    SlimeAttackGoalDefinition& operator=(SlimeAttackGoalDefinition const&);
    SlimeAttackGoalDefinition(SlimeAttackGoalDefinition const&);
    SlimeAttackGoalDefinition();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static bool const& DEFAULT_SET_PERSISTENT();

    MCNAPI static ::std::string_view const& NAME();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_110
