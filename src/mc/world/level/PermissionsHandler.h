#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/world/actor/player/PlayerPermissionLevel.h"

class PermissionsHandler {
public:
    // prevent constructor by default
    PermissionsHandler& operator=(PermissionsHandler const&);

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

    MCAPI static std::string playerPermissionLevelToString(::PlayerPermissionLevel const&);

    MCAPI static std::string const DIFF_COMMAND_PERMISSION;

    MCAPI static std::string const DIFF_PLAYER_PERMISSION;

    // NOLINTEND
};
