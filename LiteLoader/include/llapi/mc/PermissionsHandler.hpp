/**
 * @file  PermissionsHandler.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class PermissionsHandler.
 *
 */
class PermissionsHandler {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PERMISSIONSHANDLER
public:
    class PermissionsHandler& operator=(class PermissionsHandler const &) = delete;
#endif

public:
    /**
     * @hash   190582866
     * @symbol ??0PermissionsHandler@@QEAA@XZ
     */
    MCAPI PermissionsHandler();
    /**
     * @hash   961088321
     * @symbol ??0PermissionsHandler@@QEAA@AEBV0@@Z
     */
    MCAPI PermissionsHandler(class PermissionsHandler const &);
    /**
     * @hash   2116262296
     * @symbol ?addSaveData@PermissionsHandler@@QEBAXAEAVCompoundTag@@@Z
     */
    MCAPI void addSaveData(class CompoundTag &) const;
    /**
     * @hash   1169515862
     * @symbol ?getCommandPermissions@PermissionsHandler@@QEBA?AW4CommandPermissionLevel@@XZ
     */
    MCAPI enum class CommandPermissionLevel getCommandPermissions() const;
    /**
     * @hash   -1495389454
     * @symbol ?getPlayerPermissions@PermissionsHandler@@QEBA?AW4PlayerPermissionLevel@@XZ
     */
    MCAPI enum class PlayerPermissionLevel getPlayerPermissions() const;
    /**
     * @hash   -1461807861
     * @symbol ?loadSaveData@PermissionsHandler@@QEAA_NAEBVCompoundTag@@@Z
     */
    MCAPI bool loadSaveData(class CompoundTag const &);
    /**
     * @hash   627594129
     * @symbol ??8PermissionsHandler@@QEBA_NAEBV0@@Z
     */
    MCAPI bool operator==(class PermissionsHandler const &) const;
    /**
     * @hash   2061812280
     * @symbol ?setCommandPermissions@PermissionsHandler@@QEAAXW4CommandPermissionLevel@@@Z
     */
    MCAPI void setCommandPermissions(enum class CommandPermissionLevel);
    /**
     * @hash   634424782
     * @symbol ?setPlayerPermissions@PermissionsHandler@@QEAAXW4PlayerPermissionLevel@@@Z
     */
    MCAPI void setPlayerPermissions(enum class PlayerPermissionLevel);
    /**
     * @hash   1487468149
     * @symbol ?playerPermissionLevelFromString@PermissionsHandler@@SA?AW4PlayerPermissionLevel@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI static enum class PlayerPermissionLevel playerPermissionLevelFromString(std::string const &);
    /**
     * @hash   -1441723133
     * @symbol ?playerPermissionLevelToString@PermissionsHandler@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBW4PlayerPermissionLevel@@@Z
     */
    MCAPI static std::string playerPermissionLevelToString(enum class PlayerPermissionLevel const &);

};