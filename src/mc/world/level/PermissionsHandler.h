#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PermissionsHandler {

public:
    // prevent constructor by default
    PermissionsHandler& operator=(PermissionsHandler const&) = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0PermissionsHandler\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI PermissionsHandler(class PermissionsHandler const&);
    /**
     * @symbol ??0PermissionsHandler\@\@QEAA\@XZ
     */
    MCAPI PermissionsHandler();
    /**
     * @symbol ?addSaveData\@PermissionsHandler\@\@QEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void addSaveData(class CompoundTag&) const;
    /**
     * @symbol ?getCommandPermissions\@PermissionsHandler\@\@QEBA?AW4CommandPermissionLevel\@\@XZ
     */
    MCAPI enum class CommandPermissionLevel getCommandPermissions() const;
    /**
     * @symbol ?getPlayerPermissions\@PermissionsHandler\@\@QEBA?AW4PlayerPermissionLevel\@\@XZ
     */
    MCAPI enum class PlayerPermissionLevel getPlayerPermissions() const;
    /**
     * @symbol ?loadSaveData\@PermissionsHandler\@\@QEAA_NAEBVCompoundTag\@\@\@Z
     */
    MCAPI bool loadSaveData(class CompoundTag const&);
    /**
     * @symbol
     * ?playerPermissionLevelFromString\@PermissionsHandler\@\@SA?AW4PlayerPermissionLevel\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static enum class PlayerPermissionLevel playerPermissionLevelFromString(std::string const&);
    /**
     * @symbol
     * ?playerPermissionLevelToString\@PermissionsHandler\@\@SA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBW4PlayerPermissionLevel\@\@\@Z
     */
    MCAPI static std::string playerPermissionLevelToString(enum class PlayerPermissionLevel const&);
    /**
     * @symbol ?setCommandPermissions\@PermissionsHandler\@\@QEAAXW4CommandPermissionLevel\@\@\@Z
     */
    MCAPI void setCommandPermissions(enum class CommandPermissionLevel);
    /**
     * @symbol ?setPlayerPermissions\@PermissionsHandler\@\@QEAAXW4PlayerPermissionLevel\@\@\@Z
     */
    MCAPI void setPlayerPermissions(enum class PlayerPermissionLevel);
    /**
     * @symbol
     * ?DIFF_COMMAND_PERMISSION\@PermissionsHandler\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const DIFF_COMMAND_PERMISSION;
    /**
     * @symbol
     * ?DIFF_PLAYER_PERMISSION\@PermissionsHandler\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const DIFF_PLAYER_PERMISSION;
    // NOLINTEND
};
