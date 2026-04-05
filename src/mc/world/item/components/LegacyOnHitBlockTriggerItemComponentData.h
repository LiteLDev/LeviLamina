#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/DefinitionTrigger.h"

struct LegacyOnHitBlockTriggerItemComponentData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::optional<::DefinitionTrigger>> mOnHitBlock;
    // NOLINTEND

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    LegacyOnHitBlockTriggerItemComponentData& operator=(LegacyOnHitBlockTriggerItemComponentData const&);
    LegacyOnHitBlockTriggerItemComponentData();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    LegacyOnHitBlockTriggerItemComponentData& operator=(LegacyOnHitBlockTriggerItemComponentData const&);
    LegacyOnHitBlockTriggerItemComponentData(LegacyOnHitBlockTriggerItemComponentData const&);
    LegacyOnHitBlockTriggerItemComponentData();

#endif
public:
    // member functions
    // NOLINTBEGIN
    MCAPI LegacyOnHitBlockTriggerItemComponentData(::LegacyOnHitBlockTriggerItemComponentData&&);

#ifdef LL_PLAT_S
    MCAPI LegacyOnHitBlockTriggerItemComponentData(::LegacyOnHitBlockTriggerItemComponentData const&);
#endif

    MCAPI ~LegacyOnHitBlockTriggerItemComponentData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::LegacyOnHitBlockTriggerItemComponentData&&);

#ifdef LL_PLAT_S
    MCFOLD void* $ctor(::LegacyOnHitBlockTriggerItemComponentData const&);
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
