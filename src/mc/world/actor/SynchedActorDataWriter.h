#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
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
};
