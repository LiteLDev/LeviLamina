#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/versionless/actor/BaseGoalDefinition.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_100 {

struct ControlledByPlayerGoalDefinition : public ::SharedTypes::BaseGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkd38b6d;
    ::ll::UntypedStorage<4, 4> mUnk106260;
    ::ll::UntypedStorage<4, 4> mUnk681a60;
    // NOLINTEND

public:
    // prevent constructor by default
    ControlledByPlayerGoalDefinition& operator=(ControlledByPlayerGoalDefinition const&);
    ControlledByPlayerGoalDefinition(ControlledByPlayerGoalDefinition const&);
    ControlledByPlayerGoalDefinition();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::string_view const& NAME();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_100
