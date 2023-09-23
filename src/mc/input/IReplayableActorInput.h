#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/AdvanceFrameResult.h"

struct IReplayableActorInput {
public:
    // prevent constructor by default
    IReplayableActorInput& operator=(IReplayableActorInput const&);
    IReplayableActorInput(IReplayableActorInput const&);
    IReplayableActorInput();

public:
    // NOLINTBEGIN
    // symbol: ?advanceLiveFrame@IReplayableActorInput@@UEBA?AW4AdvanceFrameResult@@AEAVActor@@@Z
    MCVAPI ::AdvanceFrameResult advanceLiveFrame(class Actor&) const;

    // NOLINTEND
};
