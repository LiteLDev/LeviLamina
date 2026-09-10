#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/server/FileReadResult.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/server/commands/PlayerPermissionLevel.h"

// auto generated forward declare list
// clang-format off
class GameplayUserManager;
class Player;
namespace Core { class Path; }
namespace Json { class Value; }
// clang-format on

class PermissionsFile {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string> const>                      mFilePath;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::PlayerPermissionLevel>> mPermissions;
    // NOLINTEND

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    PermissionsFile();

#else // LL_PLAT_C
#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCAPI explicit PermissionsFile(::Core::Path const& filePath);
#endif

    MCAPI void applyPlayerPermissionsFromDisk(::Player& player, ::CommandPermissionLevel opCommandPermissionLevel);

    MCAPI void persistPlayerPermissionsToDisk(::Player& player, ::PlayerPermissionLevel permission);

    MCAPI ::std::tuple<::FileReadResult, ::Json::Value> readPermissionFile();

    MCAPI ::FileReadResult reload();

    MCAPI ::FileReadResult reloadAndApply(
        ::Bedrock::NotNullNonOwnerPtr<::GameplayUserManager> userManager,
        ::CommandPermissionLevel                             opCommandPermissionLevel
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::string _getPermissionIdForPlayer(::Player& player);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCAPI void* $ctor(::Core::Path const& filePath);
#endif
    // NOLINTEND
};
