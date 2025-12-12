#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct ActorDataFlagComponent;
struct SynchedActorDataComponent;
// clang-format on

class SynchedActorDataReader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::SynchedActorDataComponent const*>> mComponent;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::ActorDataFlagComponent const*>>    mFlagComponent;
    // NOLINTEND
};
