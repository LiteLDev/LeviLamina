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
    // symbol: ?getSyncInfo@ISynchedActorDataAdapter@@SAPEBU1@G@Z
    MCAPI static struct ISynchedActorDataAdapter const* getSyncInfo(ushort);

    // NOLINTEND
};
