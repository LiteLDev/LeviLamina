#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct LowMemoryReport {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk363604;
    ::ll::UntypedStorage<8, 8>  mUnkbe0b7d;
    ::ll::UntypedStorage<8, 8>  mUnkc37521;
    ::ll::UntypedStorage<8, 8>  mUnk15c21a;
    ::ll::UntypedStorage<8, 8>  mUnk4e2970;
    ::ll::UntypedStorage<4, 4>  mUnk1f6cff;
    ::ll::UntypedStorage<4, 4>  mUnk2c58ea;
    ::ll::UntypedStorage<8, 24> mUnk66a49e;
    // NOLINTEND

public:
    // prevent constructor by default
    LowMemoryReport& operator=(LowMemoryReport const&);
    LowMemoryReport(LowMemoryReport const&);
    LowMemoryReport();
};
