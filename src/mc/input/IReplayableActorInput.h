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
    // symbol: ?advanceLiveFrame@IReplayableActorInput@@UEBAXAEAVActor@@@Z
    MCVAPI void advanceLiveFrame(class Actor&) const;

    // symbol: ?getAdvanceFrameResult@IReplayableActorInput@@UEBA?AW4AdvanceFrameResult@@AEBVEntityContext@@@Z
    MCVAPI ::AdvanceFrameResult getAdvanceFrameResult(class EntityContext const&) const;

    // symbol: ?isExplicitCorrection@IReplayableActorInput@@UEBA_NXZ
    MCVAPI bool isExplicitCorrection() const;

    // NOLINTEND
};
