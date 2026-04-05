#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/DefinitionTrigger.h"

struct LegacyOnHurtActorTriggerItemComponentData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::optional<::DefinitionTrigger>> mOnHurtActor;
    // NOLINTEND

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    LegacyOnHurtActorTriggerItemComponentData& operator=(LegacyOnHurtActorTriggerItemComponentData const&);
    LegacyOnHurtActorTriggerItemComponentData();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    LegacyOnHurtActorTriggerItemComponentData& operator=(LegacyOnHurtActorTriggerItemComponentData const&);
    LegacyOnHurtActorTriggerItemComponentData(LegacyOnHurtActorTriggerItemComponentData const&);
    LegacyOnHurtActorTriggerItemComponentData();

#endif
public:
    // member functions
    // NOLINTBEGIN
    MCAPI LegacyOnHurtActorTriggerItemComponentData(::LegacyOnHurtActorTriggerItemComponentData&&);

#ifdef LL_PLAT_S
    MCAPI LegacyOnHurtActorTriggerItemComponentData(::LegacyOnHurtActorTriggerItemComponentData const&);
#endif

    MCAPI ~LegacyOnHurtActorTriggerItemComponentData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::LegacyOnHurtActorTriggerItemComponentData&&);

#ifdef LL_PLAT_S
    MCFOLD void* $ctor(::LegacyOnHurtActorTriggerItemComponentData const&);
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
