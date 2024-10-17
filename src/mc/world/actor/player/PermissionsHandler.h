#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/server/commands/PlayerPermissionLevel.h"

class PermissionsHandler {
public:
    CommandPermissionLevel mCommandPermissions;
    PlayerPermissionLevel  mPlayerPermissions;

public:
    // NOLINTBEGIN
    MCAPI PermissionsHandler();

    MCAPI PermissionsHandler(class PermissionsHandler const& rhs);

    MCAPI void addSaveData(class CompoundTag& tag) const;

    MCAPI ::CommandPermissionLevel getCommandPermissions() const;

    MCAPI ::PlayerPermissionLevel getPlayerPermissions() const;

    MCAPI bool loadSaveData(class CompoundTag const& tag);

    MCAPI void setCommandPermissions(::CommandPermissionLevel permissions);

    MCAPI void setPlayerPermissions(::PlayerPermissionLevel permissions);

    MCAPI static ::PlayerPermissionLevel playerPermissionLevelFromString(std::string const& s);

    MCAPI static std::string playerPermissionLevelToString(::PlayerPermissionLevel const& permission);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(class PermissionsHandler const& rhs);

    MCAPI void* ctor$();

    MCAPI static std::string const& DIFF_COMMAND_PERMISSION();

    MCAPI static std::string const& DIFF_PLAYER_PERMISSION();

    // NOLINTEND
};
