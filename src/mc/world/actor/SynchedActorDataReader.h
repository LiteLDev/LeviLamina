#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SynchedActorDataReader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk27686e;
    ::ll::UntypedStorage<8, 8> mUnkada985;
    // NOLINTEND

public:
    // prevent constructor by default
    SynchedActorDataReader& operator=(SynchedActorDataReader const&);
    SynchedActorDataReader(SynchedActorDataReader const&);
    SynchedActorDataReader();
};
