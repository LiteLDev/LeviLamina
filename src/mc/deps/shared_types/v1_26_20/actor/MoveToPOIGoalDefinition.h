#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/actor/BaseMoveToGoalDefinition.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_20 {

struct MoveToPOIGoalDefinition : public ::SharedTypes::BaseMoveToGoalDefinition {
public:
    // MoveToPOIGoalDefinition inner types define
    enum class POIType : int {
        InvalidPOI  = 4294967295,
        Bed         = 0,
        MeetingArea = 1,
        Jobsite     = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::SharedTypes::v1_26_20::MoveToPOIGoalDefinition::POIType> mPOIType;
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
};

} // namespace SharedTypes::v1_26_20
