#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/FileReadResult.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/world/actor/player/PlayerPermissionLevel.h"

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
    // symbol: ??0PermissionsFile@@QEAA@AEBVPath@Core@@@Z
    MCAPI explicit PermissionsFile(class Core::Path const& filePath);

    // symbol:
    // ?applyPlayerPermissionsFromDisk@PermissionsFile@@QEAAXAEAVPlayer@@AEBVUserEntityIdentifierComponent@@W4CommandPermissionLevel@@@Z
    MCAPI void applyPlayerPermissionsFromDisk(
        class Player& player,
        class UserEntityIdentifierComponent const&,
        ::CommandPermissionLevel opCommandPermissionLevel
    );

    // symbol:
    // ?getPermissions@PermissionsFile@@QEBAAEBV?$unordered_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4PlayerPermissionLevel@@U?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4PlayerPermissionLevel@@@std@@@2@@std@@XZ
    MCAPI std::unordered_map<std::string, ::PlayerPermissionLevel> const& getPermissions() const;

    // symbol:
    // ?getXUIDsByPermission@PermissionsFile@@QEBA?AV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@W4PlayerPermissionLevel@@@Z
    MCAPI std::vector<std::string> getXUIDsByPermission(::PlayerPermissionLevel) const;

    // symbol:
    // ?isPermissionsSet@PermissionsFile@@QEBA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4PlayerPermissionLevel@@@Z
    MCAPI bool isPermissionsSet(std::string const& xuid, ::PlayerPermissionLevel permission) const;

    // symbol:
    // ?persistPlayerPermissionsToDisk@PermissionsFile@@QEAAXAEBVUserEntityIdentifierComponent@@W4PlayerPermissionLevel@@@Z
    MCAPI void
    persistPlayerPermissionsToDisk(class UserEntityIdentifierComponent const&, ::PlayerPermissionLevel permission);

    // symbol:
    // ?persistPlayerPermissionsToDisk@PermissionsFile@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4PlayerPermissionLevel@@@Z
    MCAPI void persistPlayerPermissionsToDisk(std::string const& xuid, ::PlayerPermissionLevel permission);

    // symbol: ?reload@PermissionsFile@@QEAA?AW4FileReadResult@@XZ
    MCAPI ::FileReadResult reload();

    // symbol: ??1PermissionsFile@@QEAA@XZ
    MCAPI ~PermissionsFile();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?readPermissionFile@PermissionsFile@@AEAA?AV?$tuple@W4FileReadResult@@VValue@Json@@@std@@XZ
    MCAPI std::tuple<::FileReadResult, class Json::Value> readPermissionFile();

    // symbol: ?setDefaultPlayerPermission@PermissionsFile@@AEAAXAEAVPlayer@@W4CommandPermissionLevel@@@Z
    MCAPI void setDefaultPlayerPermission(class Player& player, ::CommandPermissionLevel opCommandPermissionLevel);

    // NOLINTEND
};
