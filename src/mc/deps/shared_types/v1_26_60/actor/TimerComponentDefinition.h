#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/shared_types/FloatRange.h"
#include "mc/deps/shared_types/v1_21_120/actor/ActorDefinitionTrigger.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_60 {

struct TimerComponentDefinition {
public:
    // TimerComponentDefinition inner types declare
    // clang-format off
    struct WeightChoiceEntry;
    // clang-format on

    // TimerComponentDefinition inner types define
    struct WeightChoiceEntry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, float> mValue;
        ::ll::TypedStorage<4, 4, int>   mWeight;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                               mLooping;
    ::ll::TypedStorage<1, 1, bool>                                               mRandomInterval;
    ::ll::TypedStorage<4, 12, ::std::optional<::SharedTypes::FloatRange>>        mTime;
    ::ll::TypedStorage<8, 272, ::SharedTypes::v1_21_120::ActorDefinitionTrigger> mOnTimeDown;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::v1_26_60::TimerComponentDefinition::WeightChoiceEntry>>
        mTimeChoices;
    // NOLINTEND

public:
    // prevent constructor by default
    TimerComponentDefinition(TimerComponentDefinition const&);
    TimerComponentDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI TimerComponentDefinition(::SharedTypes::v1_26_60::TimerComponentDefinition&&);

    MCAPI void
    addWeightedChoiceEntry(::SharedTypes::v1_26_60::TimerComponentDefinition::WeightChoiceEntry const& entry);

    MCAPI ::SharedTypes::v1_26_60::TimerComponentDefinition&
    operator=(::SharedTypes::v1_26_60::TimerComponentDefinition&&);

    MCAPI ::SharedTypes::v1_26_60::TimerComponentDefinition&
    operator=(::SharedTypes::v1_26_60::TimerComponentDefinition const&);

    MCAPI ~TimerComponentDefinition();
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
    MCAPI void* $ctor(::SharedTypes::v1_26_60::TimerComponentDefinition&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_60
