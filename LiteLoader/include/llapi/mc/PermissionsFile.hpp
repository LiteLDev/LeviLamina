/**
 * @file  PermissionsFile.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Core.hpp"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class PermissionsFile.
 *
 */
class PermissionsFile {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PERMISSIONSFILE
public:
    class PermissionsFile& operator=(class PermissionsFile const &) = delete;
    PermissionsFile(class PermissionsFile const &) = delete;
    PermissionsFile() = delete;
#endif

public:
    /**
     * @hash   -29700533
     * @symbol ??0PermissionsFile@@QEAA@AEBVPath@Core@@@Z
     */
    MCAPI PermissionsFile(class Core::Path const &);
    /**
     * @hash   581155816
     * @symbol ?applyPlayerPermissionsFromDisk@PermissionsFile@@QEAAXAEAVPlayer@@AEBVUserEntityIdentifierComponent@@W4CommandPermissionLevel@@@Z
     */
    MCAPI void applyPlayerPermissionsFromDisk(class Player &, class UserEntityIdentifierComponent const &, enum CommandPermissionLevel);
    /**
     * @hash   -1250256422
     * @symbol ?getPermissions@PermissionsFile@@QEBAAEBV?$unordered_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4PlayerPermissionLevel@@U?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4PlayerPermissionLevel@@@std@@@2@@std@@XZ
     */
    MCAPI class std::unordered_map<std::string, enum PlayerPermissionLevel, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<struct std::pair<std::string const, enum PlayerPermissionLevel>>> const & getPermissions() const;
    /**
     * @hash   96478906
     * @symbol ?getXUIDsByPermission@PermissionsFile@@QEBA?AV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@W4PlayerPermissionLevel@@@Z
     */
    MCAPI std::vector<std::string> getXUIDsByPermission(enum PlayerPermissionLevel) const;
    /**
     * @hash   -16850294
     * @symbol ?isPermissionsSet@PermissionsFile@@QEBA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4PlayerPermissionLevel@@@Z
     */
    MCAPI bool isPermissionsSet(std::string const &, enum PlayerPermissionLevel) const;
    /**
     * @hash   1659128091
     * @symbol ?persistPlayerPermissionsToDisk@PermissionsFile@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4PlayerPermissionLevel@@@Z
     */
    MCAPI void persistPlayerPermissionsToDisk(std::string const &, enum PlayerPermissionLevel);
    /**
     * @hash   849613603
     * @symbol ?persistPlayerPermissionsToDisk@PermissionsFile@@QEAAXAEBVUserEntityIdentifierComponent@@W4PlayerPermissionLevel@@@Z
     */
    MCAPI void persistPlayerPermissionsToDisk(class UserEntityIdentifierComponent const &, enum PlayerPermissionLevel);
    /**
     * @hash   147569290
     * @symbol ?reload@PermissionsFile@@QEAA?AW4FileReadResult@@XZ
     */
    MCAPI enum FileReadResult reload();

//private:
    /**
     * @hash   -1218335922
     * @symbol ?readPermissionFile@PermissionsFile@@AEAA?AV?$tuple@W4FileReadResult@@VValue@Json@@@std@@XZ
     */
    MCAPI class std::tuple<enum FileReadResult, class Json::Value> readPermissionFile();
    /**
     * @hash   442925634
     * @symbol ?setDefaultPlayerPermission@PermissionsFile@@AEAAXAEAVPlayer@@W4CommandPermissionLevel@@@Z
     */
    MCAPI void setDefaultPlayerPermission(class Player &, enum CommandPermissionLevel);

private:

};