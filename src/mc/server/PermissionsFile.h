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
namespace Core { class Path; }
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
    MCAPI explicit PermissionsFile(::Core::Path const& filePath);

    MCAPI void applyPlayerPermissionsFromDisk(
        ::Player&                              player,
        ::UserEntityIdentifierComponent const& userIdentifier,
        ::CommandPermissionLevel               opCommandPermissionLevel
    );

    MCAPI ::std::unordered_map<::std::string, ::PlayerPermissionLevel> const& getPermissions() const;

    MCAPI ::std::vector<::std::string> getXUIDsByPermission(::PlayerPermissionLevel permission) const;

    MCAPI bool isPermissionsSet(::std::string const& xuid, ::PlayerPermissionLevel permission) const;

    MCAPI void persistPlayerPermissionsToDisk(
        ::UserEntityIdentifierComponent const& userIdentifier,
        ::PlayerPermissionLevel                permission
    );

    MCAPI void persistPlayerPermissionsToDisk(::std::string const& xuid, ::PlayerPermissionLevel permission);

    MCAPI ::std::tuple<::FileReadResult, ::Json::Value> readPermissionFile();

    MCAPI ::FileReadResult reload();

    MCAPI void setDefaultPlayerPermission(::Player& player, ::CommandPermissionLevel opCommandPermissionLevel);

    MCAPI ~PermissionsFile();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Core::Path const& filePath);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
