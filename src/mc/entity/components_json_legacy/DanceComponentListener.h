#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/LevelSoundEvent.h"

class DanceComponentListener {
public:
    // prevent constructor by default
    DanceComponentListener& operator=(DanceComponentListener const&);
    DanceComponentListener(DanceComponentListener const&);
    DanceComponentListener();

public:
    // NOLINTBEGIN
    MCAPI void setLevel(class Level& level);

    MCAPI ~DanceComponentListener();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _onLevelSoundEvent(
        ::Puv::Legacy::LevelSoundEvent          type,
        class Vec3 const&                       pos,
        int                                     data,
        struct ActorDefinitionIdentifier const& entityType,
        bool                                    isBabyMob,
        bool                                    isGlobal
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};
