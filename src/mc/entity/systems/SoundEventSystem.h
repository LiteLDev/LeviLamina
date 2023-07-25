#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/ViewT.h"
#include "mc/entity/components/SoundEventRequest.h"

class SoundEventSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SOUNDEVENTSYSTEM
public:
    SoundEventSystem& operator=(SoundEventSystem const&) = delete;
    SoundEventSystem(SoundEventSystem const&)            = delete;
    SoundEventSystem()                                   = delete;
#endif

public:
    /**
     * @symbol
     * ?_playSound\@SoundEventSystem\@\@SAXAEAVILevel\@\@AEBUSoundEventRequest\@\@AEBUSynchronizedPlainData\@3\@\@Z
     */
    MCAPI static void
    _playSound(class ILevel&, struct SoundEventRequest const&, struct SoundEventRequest::SynchronizedPlainData const&);
    /**
     * @symbol
     * ?_tick\@SoundEventSystem\@\@SAXAEBVStrictEntityContext\@\@AEAVLevelComponent\@\@AEAUSoundEventRequestQueueComponent\@\@\@Z
     */
    MCAPI static void
    _tick(class StrictEntityContext const&, class LevelComponent&, struct SoundEventRequestQueueComponent&);
    /**
     * @symbol
     * ?_view\@SoundEventSystem\@\@SAXV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@VLevelComponent\@\@USoundEventRequestQueueComponent\@\@\@\@\@Z
     */
    MCAPI static void _view(class ViewT<
                            class StrictEntityContext,
                            class EntityRegistryBase,
                            class LevelComponent,
                            struct SoundEventRequestQueueComponent>);
    /**
     * @symbol ?create\@SoundEventSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo create();
};
