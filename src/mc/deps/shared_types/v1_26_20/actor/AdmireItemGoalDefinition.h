#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/actor/BaseGoalDefinition.h"
#include "mc/deps/shared_types/shared_types/FloatRange.h"
#include "mc/deps/shared_types/v1_21_120/actor/ActorDefinitionTrigger.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_20 {

struct AdmireItemGoalDefinition : public ::SharedTypes::BaseGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                                     mAdmireItemSound;
    ::ll::TypedStorage<4, 8, ::SharedTypes::FloatRange>                          mSoundInterval;
    ::ll::TypedStorage<8, 272, ::SharedTypes::v1_21_120::ActorDefinitionTrigger> mOnAdmireItemStart;
    ::ll::TypedStorage<8, 272, ::SharedTypes::v1_21_120::ActorDefinitionTrigger> mOnAdmireItemStop;
    // NOLINTEND

public:
    // prevent constructor by default
    AdmireItemGoalDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI AdmireItemGoalDefinition(::SharedTypes::v1_26_20::AdmireItemGoalDefinition&&);

    MCAPI AdmireItemGoalDefinition(::SharedTypes::v1_26_20::AdmireItemGoalDefinition const&);

    MCAPI ::SharedTypes::v1_26_20::AdmireItemGoalDefinition&
    operator=(::SharedTypes::v1_26_20::AdmireItemGoalDefinition&&);

    MCAPI ::SharedTypes::v1_26_20::AdmireItemGoalDefinition&
    operator=(::SharedTypes::v1_26_20::AdmireItemGoalDefinition const&);

    MCAPI ~AdmireItemGoalDefinition();
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
    MCAPI void* $ctor(::SharedTypes::v1_26_20::AdmireItemGoalDefinition&&);

    MCAPI void* $ctor(::SharedTypes::v1_26_20::AdmireItemGoalDefinition const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_20
