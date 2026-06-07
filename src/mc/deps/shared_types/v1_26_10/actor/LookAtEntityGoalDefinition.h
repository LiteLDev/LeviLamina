#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec2.h"
#include "mc/deps/shared_types/shared_types/FloatRange.h"
#include "mc/deps/shared_types/v1_21_130/actor/brain/MemoryIdentifierDefinition.h"
#include "mc/deps/shared_types/v1_26_10/actor/brain/MemoryGoalDefinition.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::Brain { struct EntityRefMemory; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_10::Brain::MemoryGoals {

struct LookAtEntityGoalDefinition : public ::SharedTypes::v1_26_10::Brain::MemoryGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                                             mLookDistance;
    ::ll::TypedStorage<4, 8, ::Vec2>                                            mLookAngle;
    ::ll::TypedStorage<4, 12, ::std::variant<float, ::SharedTypes::FloatRange>> mLookTimeSeconds;
    ::ll::TypedStorage<
        8,
        48,
        ::SharedTypes::v1_21_130::Brain::MemoryIdentifierDefinition<::SharedTypes::Brain::EntityRefMemory>>
        mTargetEntityMemory;
    // NOLINTEND

public:
    // prevent constructor by default
    LookAtEntityGoalDefinition& operator=(LookAtEntityGoalDefinition const&);
    LookAtEntityGoalDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LookAtEntityGoalDefinition(::SharedTypes::v1_26_10::Brain::MemoryGoals::LookAtEntityGoalDefinition const&);
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

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SharedTypes::v1_26_10::Brain::MemoryGoals::LookAtEntityGoalDefinition const&);
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_10::Brain::MemoryGoals
