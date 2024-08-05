#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ISynchedActorDataAdapter {
public:
    // prevent constructor by default
    ISynchedActorDataAdapter& operator=(ISynchedActorDataAdapter const&);
    ISynchedActorDataAdapter(ISynchedActorDataAdapter const&);
    ISynchedActorDataAdapter();

public:
    // NOLINTBEGIN
    MCAPI static struct ISynchedActorDataAdapter const* getSyncInfo(ushort);

    // NOLINTEND
};
