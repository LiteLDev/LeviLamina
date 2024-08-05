#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorFlags.h"

class SynchedActorDataWriter {
public:
    // prevent constructor by default
    SynchedActorDataWriter& operator=(SynchedActorDataWriter const&);
    SynchedActorDataWriter(SynchedActorDataWriter const&);
    SynchedActorDataWriter();

public:
    // NOLINTBEGIN
    MCAPI class SynchedActorDataReader reader() const;

    MCAPI void setStatusFlag(::ActorFlags flag, bool value);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI gsl::not_null<class SynchedActorData*> _get();

    // NOLINTEND
};
