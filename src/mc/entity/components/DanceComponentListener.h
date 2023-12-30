#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/events/LevelSoundEvent.h"

class DanceComponentListener {
public:
    // prevent constructor by default
    DanceComponentListener& operator=(DanceComponentListener const&);
    DanceComponentListener(DanceComponentListener const&);
    DanceComponentListener();

public:
    // NOLINTBEGIN
    // symbol: ?setLevel@DanceComponentListener@@QEAAXAEAVLevel@@@Z
    MCAPI void setLevel(class Level& level);

    // symbol: ??1DanceComponentListener@@QEAA@XZ
    MCAPI ~DanceComponentListener();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_onLevelSoundEvent@DanceComponentListener@@AEAAXW4LevelSoundEvent@Legacy@Puv@@AEBVVec3@@HAEBUActorDefinitionIdentifier@@_N3@Z
    MCAPI void _onLevelSoundEvent(
        ::Puv::Legacy::LevelSoundEvent,
        class Vec3 const&,
        int,
        struct ActorDefinitionIdentifier const&,
        bool,
        bool
    );

    // NOLINTEND
};
