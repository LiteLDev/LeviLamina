#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/input/InputMode.h"
#include "mc/input/ClientPlayMode.h"
#include "mc/world/level/GameType.h"

// auto generated forward declare list
// clang-format off
class Vec3;
struct AdventureSettings;
// clang-format on

struct ExternalDataSnapshotComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::ClientPlayMode>    mPlayMode;
    ::ll::TypedStorage<4, 4, float>               mSmoothRotationSpeed;
    ::ll::TypedStorage<4, 4, ::InputMode>         mInputMode;
    ::ll::TypedStorage<4, 12, ::Vec3>             mWorldSpaceVRRealityGazeDir;
    ::ll::TypedStorage<4, 4, ::GameType>          mGameType;
    ::ll::TypedStorage<1, 5, ::AdventureSettings> mAdventureSettings;
    ::ll::TypedStorage<1, 1, bool>                mIsInWorldAndNotShowingAnyMenuScreens;
    // NOLINTEND
};
