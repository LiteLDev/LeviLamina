#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorFlags.h"

// auto generated forward declare list
// clang-format off
class SynchedActorData;
class SynchedActorDataReader;
struct ActorDataDirtyFlagsComponent;
struct ActorDataFlagComponent;
struct SynchedActorDataComponent;
// clang-format on

class SynchedActorDataWriter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::SynchedActorDataComponent*>>    mComponent;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::ActorDataFlagComponent*>>       mFlagComponent;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::ActorDataDirtyFlagsComponent*>> mDirtyFlagsComponent;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::gsl::not_null<::SynchedActorData*> _get();

    MCFOLD ::SynchedActorDataReader reader() const;

#ifdef LL_PLAT_S
    MCAPI void setStatusFlag(::ActorFlags flag, bool value);
#endif
    // NOLINTEND
};
