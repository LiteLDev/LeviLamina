#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/DefinitionTrigger.h"

struct LegacyOnCompleteTriggerItemComponentData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::optional<::DefinitionTrigger>> mOnComplete;
    // NOLINTEND

public:
    // prevent constructor by default
    LegacyOnCompleteTriggerItemComponentData& operator=(LegacyOnCompleteTriggerItemComponentData const&);
    LegacyOnCompleteTriggerItemComponentData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LegacyOnCompleteTriggerItemComponentData(::LegacyOnCompleteTriggerItemComponentData&&);

    MCAPI LegacyOnCompleteTriggerItemComponentData(::LegacyOnCompleteTriggerItemComponentData const&);

    MCAPI ~LegacyOnCompleteTriggerItemComponentData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::LegacyOnCompleteTriggerItemComponentData&&);

    MCFOLD void* $ctor(::LegacyOnCompleteTriggerItemComponentData const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

};
