#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/timelines/Timeline.h"

class ServerTimeline : public ::Timeline {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk637b00;
    ::ll::UntypedStorage<4, 8>  mUnkc08a2b;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerTimeline& operator=(ServerTimeline const&);
    ServerTimeline(ServerTimeline const&);
    ServerTimeline();
};
