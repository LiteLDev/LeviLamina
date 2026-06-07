#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/server/FileReadResult.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/server/commands/PlayerPermissionLevel.h"

// auto generated forward declare list
// clang-format off
class GameplayUserManager;
class Player;
class UserEntityIdentifierComponent;
namespace Core { class Path; }
namespace Json { class Value; }
// clang-format on

class PermissionsFile {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk795f1e;
    ::ll::UntypedStorage<8, 64> mUnk60e0b4;
    // NOLINTEND

public:
    // prevent constructor by default
    PermissionsFile& operator=(PermissionsFile const&);
    PermissionsFile(PermissionsFile const&);
    PermissionsFile();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCNAPI explicit PermissionsFile(::Core::Path const& filePath);
#endif

    MCNAPI void applyPlayerPermissionsFromDisk(
        ::Player&                              player,
        ::UserEntityIdentifierComponent const& userIdentifier,
        ::CommandPermissionLevel               opCommandPermissionLevel
    );

    MCNAPI ::std::unordered_map<::std::string, ::PlayerPermissionLevel> const& getPermissions() const;

    MCNAPI ::std::vector<::std::string> getXUIDsByPermission(::PlayerPermissionLevel permission) const;

    MCNAPI bool isPermissionsSet(::std::string const& xuid, ::PlayerPermissionLevel permission) const;

    MCNAPI void persistPlayerPermissionsToDisk(
        ::UserEntityIdentifierComponent const& userIdentifier,
        ::PlayerPermissionLevel                permission
    );

    MCNAPI void persistPlayerPermissionsToDisk(::std::string const& xuid, ::PlayerPermissionLevel permission);

    MCNAPI ::std::tuple<::FileReadResult, ::Json::Value> readPermissionFile();

    MCNAPI ::FileReadResult reload();

    MCNAPI ::FileReadResult reloadAndApply(
        ::Bedrock::NotNullNonOwnerPtr<::GameplayUserManager> userManager,
        ::CommandPermissionLevel                             opCommandPermissionLevel
    );

#ifdef LL_PLAT_S
    MCNAPI ~PermissionsFile();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCNAPI void* $ctor(::Core::Path const& filePath);
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCNAPI void $dtor();
#endif
    // NOLINTEND
};
