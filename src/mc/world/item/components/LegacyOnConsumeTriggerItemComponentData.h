#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/DefinitionTrigger.h"

struct LegacyOnConsumeTriggerItemComponentData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::optional<::DefinitionTrigger>> mOnConsumeTrigger;
    // NOLINTEND

public:
    // prevent constructor by default
    LegacyOnConsumeTriggerItemComponentData& operator=(LegacyOnConsumeTriggerItemComponentData const&);
    LegacyOnConsumeTriggerItemComponentData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LegacyOnConsumeTriggerItemComponentData(::LegacyOnConsumeTriggerItemComponentData&&);

    MCAPI LegacyOnConsumeTriggerItemComponentData(::LegacyOnConsumeTriggerItemComponentData const&);

    MCAPI ~LegacyOnConsumeTriggerItemComponentData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::LegacyOnConsumeTriggerItemComponentData&&);

    MCFOLD void* $ctor(::LegacyOnConsumeTriggerItemComponentData const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
