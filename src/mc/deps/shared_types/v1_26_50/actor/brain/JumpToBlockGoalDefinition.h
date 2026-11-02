#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_130/actor/brain/MemoryIdentifierDefinition.h"
#include "mc/deps/shared_types/v1_26_10/actor/BaseGenericGoalDefinition.h"

// auto generated forward declare list
// clang-format off
class Vec3;
struct WorldBlockPosition;
namespace SharedTypes::v1_21_120 { struct ActorDefinitionTrigger; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_50::Brain::MemoryGoals {

struct JumpToBlockGoalDefinition : public ::SharedTypes::v1_26_10::Brain::BaseGenericGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::SharedTypes::v1_21_130::Brain::MemoryIdentifierDefinition<::WorldBlockPosition>>
                                                                                                   mTargetBlockMemory;
    ::ll::TypedStorage<8, 48, ::SharedTypes::v1_21_130::Brain::MemoryIdentifierDefinition<::Vec3>> mJumpVelocityMemory;
    ::ll::TypedStorage<4, 4, float>                                                                mScaleFactor;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::v1_21_120::ActorDefinitionTrigger>>     mOnCompleteTriggers;
    // NOLINTEND

public:
    // prevent constructor by default
    JumpToBlockGoalDefinition& operator=(JumpToBlockGoalDefinition const&);
    JumpToBlockGoalDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI JumpToBlockGoalDefinition(::SharedTypes::v1_26_50::Brain::MemoryGoals::JumpToBlockGoalDefinition const&);

    MCNAPI ::SharedTypes::v1_26_50::Brain::MemoryGoals::JumpToBlockGoalDefinition&
    operator=(::SharedTypes::v1_26_50::Brain::MemoryGoals::JumpToBlockGoalDefinition&&);

    MCNAPI ~JumpToBlockGoalDefinition();
    // NOLINTEND

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

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SharedTypes::v1_26_50::Brain::MemoryGoals::JumpToBlockGoalDefinition const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_50::Brain::MemoryGoals
