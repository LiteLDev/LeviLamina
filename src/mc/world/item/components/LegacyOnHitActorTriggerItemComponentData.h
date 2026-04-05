#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/DefinitionTrigger.h"

struct LegacyOnHitActorTriggerItemComponentData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::optional<::DefinitionTrigger>> mOnHitActor;
    // NOLINTEND

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    LegacyOnHitActorTriggerItemComponentData& operator=(LegacyOnHitActorTriggerItemComponentData const&);
    LegacyOnHitActorTriggerItemComponentData();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    LegacyOnHitActorTriggerItemComponentData& operator=(LegacyOnHitActorTriggerItemComponentData const&);
    LegacyOnHitActorTriggerItemComponentData(LegacyOnHitActorTriggerItemComponentData const&);
    LegacyOnHitActorTriggerItemComponentData();

#endif
public:
    // member functions
    // NOLINTBEGIN
    MCAPI LegacyOnHitActorTriggerItemComponentData(::LegacyOnHitActorTriggerItemComponentData&&);

#ifdef LL_PLAT_S
    MCAPI LegacyOnHitActorTriggerItemComponentData(::LegacyOnHitActorTriggerItemComponentData const&);
#endif

    MCAPI ~LegacyOnHitActorTriggerItemComponentData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::LegacyOnHitActorTriggerItemComponentData&&);

#ifdef LL_PLAT_S
    MCFOLD void* $ctor(::LegacyOnHitActorTriggerItemComponentData const&);
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
