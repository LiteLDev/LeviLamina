#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace librarySearch {

struct TelemetryData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk9e568e;
    ::ll::UntypedStorage<4, 4> mUnk88c739;
    ::ll::UntypedStorage<4, 4> mUnk639b91;
    ::ll::UntypedStorage<4, 4> mUnk75897e;
    ::ll::UntypedStorage<4, 4> mUnkb7b7c6;
    ::ll::UntypedStorage<4, 4> mUnk7a1061;
    ::ll::UntypedStorage<8, 32> mUnk9ddb27;
    // NOLINTEND

public:
    // prevent constructor by default
    TelemetryData& operator=(TelemetryData const&);
    TelemetryData(TelemetryData const&);
    TelemetryData();

};

}
