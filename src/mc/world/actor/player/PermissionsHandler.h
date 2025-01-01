#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/server/commands/PlayerPermissionLevel.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
// clang-format on

class PermissionsHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::CommandPermissionLevel> mCommandPermissions;
    ::ll::TypedStorage<1, 1, ::PlayerPermissionLevel>  mPlayerPermissions;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PermissionsHandler();

    MCAPI PermissionsHandler(::PermissionsHandler const& rhs);

    MCAPI void addSaveData(::CompoundTag& tag) const;

    MCAPI ::CommandPermissionLevel getCommandPermissions() const;

    MCAPI ::PlayerPermissionLevel getPlayerPermissions() const;

    MCAPI bool loadSaveData(::CompoundTag const& tag);

    MCAPI void setCommandPermissions(::CommandPermissionLevel permissions);

    MCAPI void setPlayerPermissions(::PlayerPermissionLevel permissions);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::PlayerPermissionLevel playerPermissionLevelFromString(::std::string const& s);

    MCAPI static ::std::string playerPermissionLevelToString(::PlayerPermissionLevel const& permission);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string const& DIFF_COMMAND_PERMISSION();

    MCAPI static ::std::string const& DIFF_PLAYER_PERMISSION();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::PermissionsHandler const& rhs);
    // NOLINTEND
};
