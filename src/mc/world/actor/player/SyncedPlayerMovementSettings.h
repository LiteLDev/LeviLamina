#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/ServerAuthMovementMode.h"

// auto generated forward declare list
// clang-format off
struct PlayerMovementSettings;
// clang-format on

struct SyncedPlayerMovementSettings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::ServerAuthMovementMode> AuthorityMode;
    ::ll::TypedStorage<4, 4, int>                      mRewindHistorySize;
    ::ll::TypedStorage<1, 1, bool>                     ServerAuthBlockBreaking;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SyncedPlayerMovementSettings();

    MCAPI explicit SyncedPlayerMovementSettings(::PlayerMovementSettings const& settings);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::PlayerMovementSettings const& settings);
    // NOLINTEND
};
