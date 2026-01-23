#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"

// auto generated forward declare list
// clang-format off
class EntityRegistry;
struct PlayerMovementSettings;
// clang-format on

class PlayerMovementSettingsManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::WeakRef<::EntityRegistry>> mEntityRegistry;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::PlayerMovementSettings const& getPlayerMovementSettings() const;
    // NOLINTEND
};
