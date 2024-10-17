#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/entity/components/SoundEventRequest.h"

class SoundEventSystem {
public:
    // prevent constructor by default
    SoundEventSystem& operator=(SoundEventSystem const&);
    SoundEventSystem(SoundEventSystem const&);
    SoundEventSystem();

public:
    // NOLINTBEGIN
    MCAPI static void _playSound(
        class ILevel&                                          level,
        struct SoundEventRequest const&                        request,
        struct SoundEventRequest::SynchronizedPlainData const& data
    );

    MCAPI static void _tick(
        class StrictEntityContext const&,
        class LevelComponent&                   level,
        struct SoundEventRequestQueueComponent& requests
    );

    MCAPI static void
        _view(class ViewT<class StrictEntityContext, class LevelComponent, struct SoundEventRequestQueueComponent>);

    MCAPI static struct TickingSystemWithInfo create();

    // NOLINTEND
};
