#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/actor/ActorDamageCause.h"
#include "mc/deps/shared_types/v1_21_130/actor/brain/MemoryIdentifierDefinition.h"
#include "mc/deps/shared_types/v1_26_10/actor/BaseGenericGoalDefinition.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::Brain { struct EntityRef; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_30::Brain::MemoryGoals {

struct PanicGoalDefinition : public ::SharedTypes::v1_26_10::Brain::BaseGenericGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::Legacy::ActorDamageCause>> mPanicCauses;
    ::ll::TypedStorage<
        8,
        48,
        ::SharedTypes::v1_21_130::Brain::MemoryIdentifierDefinition<::SharedTypes::Legacy::ActorDamageCause>>
        mHurtByCauseMemory;
    ::ll::TypedStorage<
        8,
        56,
        ::std::optional<::SharedTypes::v1_21_130::Brain::MemoryIdentifierDefinition<::SharedTypes::Brain::EntityRef>>>
        mHurtByEntityMemory;
    // NOLINTEND

public:
    // prevent constructor by default
    PanicGoalDefinition& operator=(PanicGoalDefinition const&);
    PanicGoalDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PanicGoalDefinition(::SharedTypes::v1_26_30::Brain::MemoryGoals::PanicGoalDefinition const&);

    MCAPI ::SharedTypes::v1_26_30::Brain::MemoryGoals::PanicGoalDefinition&
    operator=(::SharedTypes::v1_26_30::Brain::MemoryGoals::PanicGoalDefinition&&);

    MCAPI ~PanicGoalDefinition();
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
    MCAPI void* $ctor(::SharedTypes::v1_26_30::Brain::MemoryGoals::PanicGoalDefinition const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_30::Brain::MemoryGoals
