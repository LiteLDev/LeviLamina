/**
 * @file  PermissionsHandler.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @hash   -755902190
     * @symbol  ??0PermissionsHandler\@\@QEAA\@XZ
     */
    MCAPI PermissionsHandler();
    /**
     * @hash   14603265
     * @symbol  ??0PermissionsHandler\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI PermissionsHandler(class PermissionsHandler const &);
    /**
     * @hash   1169746488
     * @symbol  ?addSaveData\@PermissionsHandler\@\@QEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void addSaveData(class CompoundTag &) const;
    /**
     * @hash   1301395814
     * @symbol  ?getCommandPermissions\@PermissionsHandler\@\@QEBA?AW4CommandPermissionLevel\@\@XZ
     */
    MCAPI enum class CommandPermissionLevel getCommandPermissions() const;
    /**
     * @hash   -1363447998
     * @symbol  ?getPlayerPermissions\@PermissionsHandler\@\@QEBA?AW4PlayerPermissionLevel\@\@XZ
     */
    MCAPI enum class PlayerPermissionLevel getPlayerPermissions() const;
    /**
     * @hash   1887443179
     * @symbol  ?loadSaveData\@PermissionsHandler\@\@QEAA_NAEBVCompoundTag\@\@\@Z
     */
    MCAPI bool loadSaveData(class CompoundTag const &);
    /**
     * @hash   -2101275064
     * @symbol  ?setCommandPermissions\@PermissionsHandler\@\@QEAAXW4CommandPermissionLevel\@\@\@Z
     */
    MCAPI void setCommandPermissions(enum class CommandPermissionLevel);
    /**
     * @hash   766320110
     * @symbol  ?setPlayerPermissions\@PermissionsHandler\@\@QEAAXW4PlayerPermissionLevel\@\@\@Z
     */
    MCAPI void setPlayerPermissions(enum class PlayerPermissionLevel);
    /**
     * @hash   528981771
     * @symbol  ?DIFF_COMMAND_PERMISSION\@PermissionsHandler\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const DIFF_COMMAND_PERMISSION;
    /**
     * @hash   -1919795211
     * @symbol  ?DIFF_PLAYER_PERMISSION\@PermissionsHandler\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const DIFF_PLAYER_PERMISSION;
    /**
     * @hash   1612300252
     * @symbol  ?getDiff\@PermissionsHandler\@\@SA?AV?$optional\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@std\@\@AEBV1\@0\@Z
     */
    MCAPI static class std::optional<std::string> getDiff(class PermissionsHandler const &, class PermissionsHandler const &);
    /**
     * @hash   541751893
     * @symbol  ?playerPermissionLevelFromString\@PermissionsHandler\@\@SA?AW4PlayerPermissionLevel\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static enum class PlayerPermissionLevel playerPermissionLevelFromString(std::string const &);
    /**
     * @hash   1907527907
     * @symbol  ?playerPermissionLevelToString\@PermissionsHandler\@\@SA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBW4PlayerPermissionLevel\@\@\@Z
     */
    MCAPI static std::string playerPermissionLevelToString(enum class PlayerPermissionLevel const &);

};