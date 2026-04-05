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

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    LegacyOnCompleteTriggerItemComponentData& operator=(LegacyOnCompleteTriggerItemComponentData const&);
    LegacyOnCompleteTriggerItemComponentData();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    LegacyOnCompleteTriggerItemComponentData& operator=(LegacyOnCompleteTriggerItemComponentData const&);
    LegacyOnCompleteTriggerItemComponentData(LegacyOnCompleteTriggerItemComponentData const&);
    LegacyOnCompleteTriggerItemComponentData();

#endif
public:
    // member functions
    // NOLINTBEGIN
    MCAPI LegacyOnCompleteTriggerItemComponentData(::LegacyOnCompleteTriggerItemComponentData&&);

#ifdef LL_PLAT_S
    MCAPI LegacyOnCompleteTriggerItemComponentData(::LegacyOnCompleteTriggerItemComponentData const&);
#endif

    MCAPI ~LegacyOnCompleteTriggerItemComponentData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::LegacyOnCompleteTriggerItemComponentData&&);

#ifdef LL_PLAT_S
    MCFOLD void* $ctor(::LegacyOnCompleteTriggerItemComponentData const&);
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
