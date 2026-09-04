#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/actor/BaseGoalDefinition.h"
#include "mc/deps/shared_types/shared_types/FloatRange.h"
#include "mc/deps/shared_types/v1_21_120/actor/ActorDefinitionTrigger.h"

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
    AdmireItemGoalDefinition& operator=(AdmireItemGoalDefinition const&);
    AdmireItemGoalDefinition(AdmireItemGoalDefinition const&);
    AdmireItemGoalDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI AdmireItemGoalDefinition(::SharedTypes::v1_26_20::AdmireItemGoalDefinition&&);

    MCAPI ::SharedTypes::v1_26_20::AdmireItemGoalDefinition&
    operator=(::SharedTypes::v1_26_20::AdmireItemGoalDefinition&&);

    MCAPI ~AdmireItemGoalDefinition();
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
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_20
