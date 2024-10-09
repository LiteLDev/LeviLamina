#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/FileReadResult.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/server/commands/PlayerPermissionLevel.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
namespace Json { class Value; }
// clang-format on

class PermissionsFile {
public:
    // prevent constructor by default
    PermissionsFile& operator=(PermissionsFile const&);
    PermissionsFile(PermissionsFile const&);
    PermissionsFile();

public:
    // NOLINTBEGIN
    MCAPI explicit PermissionsFile(class Core::Path const& filePath);

    MCAPI void applyPlayerPermissionsFromDisk(
        class Player&                              player,
        class UserEntityIdentifierComponent const& userIdentifier,
        ::CommandPermissionLevel                   opCommandPermissionLevel
    );

    MCAPI std::unordered_map<std::string, ::PlayerPermissionLevel> const& getPermissions() const;

    MCAPI std::vector<std::string> getXUIDsByPermission(::PlayerPermissionLevel permission) const;

    MCAPI bool isPermissionsSet(std::string const& xuid, ::PlayerPermissionLevel permission) const;

    MCAPI void persistPlayerPermissionsToDisk(
        class UserEntityIdentifierComponent const& userIdentifier,
        ::PlayerPermissionLevel                    permission
    );

    MCAPI void persistPlayerPermissionsToDisk(std::string const& xuid, ::PlayerPermissionLevel permission);

    MCAPI ::FileReadResult reload();

    MCAPI ~PermissionsFile();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI std::tuple<::FileReadResult, class Json::Value> readPermissionFile();

    MCAPI void setDefaultPlayerPermission(class Player& player, ::CommandPermissionLevel opCommandPermissionLevel);

    // NOLINTEND
};
