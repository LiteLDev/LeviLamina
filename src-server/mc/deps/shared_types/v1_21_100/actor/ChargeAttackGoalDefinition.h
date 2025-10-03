#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/versionless/actor/BaseGoalDefinition.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_100 {

struct ChargeAttackGoalDefinition : public ::SharedTypes::BaseGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkf1e61e;
    ::ll::UntypedStorage<4, 4> mUnk20b2cf;
    ::ll::UntypedStorage<4, 4> mUnk69d38e;
    ::ll::UntypedStorage<4, 4> mUnke5e694;
    ::ll::UntypedStorage<4, 4> mUnk258b83;
    // NOLINTEND

public:
    // prevent constructor by default
    ChargeAttackGoalDefinition& operator=(ChargeAttackGoalDefinition const&);
    ChargeAttackGoalDefinition(ChargeAttackGoalDefinition const&);
    ChargeAttackGoalDefinition();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static float const& DEFAULT_SUCCESS_RATE();

    MCNAPI static ::std::string_view const& NAME();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_100
