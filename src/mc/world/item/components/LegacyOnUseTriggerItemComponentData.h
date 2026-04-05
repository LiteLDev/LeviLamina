#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/DefinitionTrigger.h"

struct LegacyOnUseTriggerItemComponentData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::optional<::DefinitionTrigger>> mOnUseTrigger;
    // NOLINTEND

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    LegacyOnUseTriggerItemComponentData& operator=(LegacyOnUseTriggerItemComponentData const&);
    LegacyOnUseTriggerItemComponentData();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    LegacyOnUseTriggerItemComponentData& operator=(LegacyOnUseTriggerItemComponentData const&);
    LegacyOnUseTriggerItemComponentData(LegacyOnUseTriggerItemComponentData const&);
    LegacyOnUseTriggerItemComponentData();

#endif
public:
    // member functions
    // NOLINTBEGIN
    MCAPI LegacyOnUseTriggerItemComponentData(::LegacyOnUseTriggerItemComponentData&&);

#ifdef LL_PLAT_S
    MCAPI LegacyOnUseTriggerItemComponentData(::LegacyOnUseTriggerItemComponentData const&);
#endif

    MCAPI ~LegacyOnUseTriggerItemComponentData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::LegacyOnUseTriggerItemComponentData&&);

#ifdef LL_PLAT_S
    MCFOLD void* $ctor(::LegacyOnUseTriggerItemComponentData const&);
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
