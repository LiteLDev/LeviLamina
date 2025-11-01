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
    MCNAPI void addSaveData(::CompoundTag& tag) const;

    MCNAPI bool loadSaveData(::CompoundTag const& tag);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::PlayerPermissionLevel playerPermissionLevelFromString(::std::string const& s);

    MCNAPI static ::std::string playerPermissionLevelToString(::PlayerPermissionLevel const& permission);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::string const& DIFF_COMMAND_PERMISSION();

    MCNAPI static ::std::string const& DIFF_PLAYER_PERMISSION();
    // NOLINTEND
};
