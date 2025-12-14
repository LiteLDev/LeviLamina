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
    MCAPI void addSaveData(::CompoundTag& tag) const;

    MCAPI bool loadSaveData(::CompoundTag const& tag);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI_C static ::std::optional<::std::string>
    getDiff(::PermissionsHandler const& lhs, ::PermissionsHandler const& rhs);

    MCAPI static ::PlayerPermissionLevel playerPermissionLevelFromString(::std::string const& s);

    MCAPI static ::std::string playerPermissionLevelToString(::PlayerPermissionLevel const& permission);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string const& DIFF_COMMAND_PERMISSION();

    MCAPI static ::std::string const& DIFF_PLAYER_PERMISSION();
    // NOLINTEND
};
