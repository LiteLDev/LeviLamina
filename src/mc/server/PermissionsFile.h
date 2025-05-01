#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/FileReadResult.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/server/commands/PlayerPermissionLevel.h"

// auto generated forward declare list
// clang-format off
class Player;
class UserEntityIdentifierComponent;
namespace Json { class Value; }
// clang-format on

class PermissionsFile {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkb52563;
    ::ll::UntypedStorage<8, 64> mUnk8a7a23;
    // NOLINTEND

public:
    // prevent constructor by default
    PermissionsFile& operator=(PermissionsFile const&);
    PermissionsFile(PermissionsFile const&);
    PermissionsFile();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void applyPlayerPermissionsFromDisk(
        ::Player&                              player,
        ::UserEntityIdentifierComponent const& userIdentifier,
        ::CommandPermissionLevel               opCommandPermissionLevel
    );

    MCNAPI bool fileExists() const;

    MCNAPI ::std::vector<::std::string> getXUIDsByPermission(::PlayerPermissionLevel permission) const;

    MCNAPI bool isPermissionsSet(::std::string const& xuid, ::PlayerPermissionLevel permission) const;

    MCNAPI void persistPlayerPermissionsToDisk(
        ::UserEntityIdentifierComponent const& userIdentifier,
        ::PlayerPermissionLevel                permission
    );

    MCNAPI void persistPlayerPermissionsToDisk(::std::string const& xuid, ::PlayerPermissionLevel permission);

    MCNAPI ::std::tuple<::FileReadResult, ::Json::Value> readPermissionFile();

    MCNAPI ::FileReadResult reload();

    MCNAPI void setDefaultPlayerPermission(::Player& player, ::CommandPermissionLevel opCommandPermissionLevel);
    // NOLINTEND
};
