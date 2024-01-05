#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/ViewT.h"
#include "mc/entity/components/SoundEventRequest.h"

class SoundEventSystem {
public:
    // prevent constructor by default
    SoundEventSystem& operator=(SoundEventSystem const&);
    SoundEventSystem(SoundEventSystem const&);
    SoundEventSystem();

public:
    // NOLINTBEGIN
    // symbol: ?_playSound@SoundEventSystem@@SAXAEAVILevel@@AEBUSoundEventRequest@@AEBUSynchronizedPlainData@3@@Z
    MCAPI static void _playSound(
        class ILevel&                                          level,
        struct SoundEventRequest const&                        request,
        struct SoundEventRequest::SynchronizedPlainData const& data
    );

    // symbol:
    // ?_tick@SoundEventSystem@@SAXAEBVStrictEntityContext@@AEAVLevelComponent@@AEAUSoundEventRequestQueueComponent@@@Z
    MCAPI static void
    _tick(class StrictEntityContext const&, class LevelComponent& level, struct SoundEventRequestQueueComponent&);

    // symbol:
    // ?_view@SoundEventSystem@@SAXV?$ViewT@VStrictEntityContext@@VLevelComponent@@USoundEventRequestQueueComponent@@@@@Z
    MCAPI static void
        _view(class ViewT<class StrictEntityContext, class LevelComponent, struct SoundEventRequestQueueComponent>);

    // symbol: ?create@SoundEventSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo create();

    // NOLINTEND
};
