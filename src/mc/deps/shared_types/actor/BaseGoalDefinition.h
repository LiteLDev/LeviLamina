#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes {

struct BaseGoalDefinition {
public:
    // BaseGoalDefinition inner types define
    enum class Flag : int {
        None              = 0,
        Move              = 1,
        Look              = 2,
        Jump              = 4,
        EnttEnumAsBitmask = 5,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                     mPriority;
    ::ll::TypedStorage<4, 4, ::SharedTypes::BaseGoalDefinition::Flag> mControlFlags;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::vector<::SharedTypes::BaseGoalDefinition::Flag> flagsVec() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND
};

} // namespace SharedTypes
