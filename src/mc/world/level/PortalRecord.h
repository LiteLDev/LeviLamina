#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PortalRecord {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnkbca024;
    ::ll::UntypedStorage<1, 1>  mUnk52fedb;
    ::ll::UntypedStorage<1, 1>  mUnk36be8e;
    ::ll::UntypedStorage<1, 1>  mUnked72d3;
    // NOLINTEND

public:
    // prevent constructor by default
    PortalRecord& operator=(PortalRecord const&);
    PortalRecord(PortalRecord const&);
    PortalRecord();
};
