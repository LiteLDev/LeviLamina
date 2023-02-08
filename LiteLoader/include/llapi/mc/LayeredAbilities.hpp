/**
 * @file  LayeredAbilities.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Ability.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class LayeredAbilities.
 *
 */
class LayeredAbilities {

#define AFTER_EXTRA
private:
    char filler[32];
#undef AFTER_EXTRA
public:
    /**
     * @hash   -1885581660
     * @symbol  ??0LayeredAbilities\@\@QEAA\@XZ
     */
    MCAPI LayeredAbilities();
    /**
     * @hash   258857249
     * @symbol  ??0LayeredAbilities\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI LayeredAbilities(class LayeredAbilities const &);
    /**
     * @hash   1272377832
     * @symbol  ?addSaveData\@LayeredAbilities\@\@QEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void addSaveData(class CompoundTag &) const;
    /**
     * @hash   -1154845264
     * @symbol  ?forEachAbility\@LayeredAbilities\@\@QEBAXAEBV?$function\@$$A6AXAEBVAbility\@\@PEBD\@Z\@std\@\@W4Options\@Ability\@\@\@Z
     */
    MCAPI void forEachAbility(class std::function<void (class Ability const &, char const *)> const &, enum class Ability::Options) const;
    /**
     * @hash   -213723662
     * @symbol  ?forEachAbility\@LayeredAbilities\@\@QEBAXAEBV?$function\@$$A6AXAEBVAbility\@\@W4AbilitiesIndex\@\@\@Z\@std\@\@W4Options\@Ability\@\@\@Z
     */
    MCAPI void forEachAbility(class std::function<void (class Ability const &, enum class AbilitiesIndex)> const &, enum class Ability::Options) const;
    /**
     * @hash   1740915481
     * @symbol  ?forEachLayer\@LayeredAbilities\@\@QEAAXAEBV?$function\@$$A6AXW4AbilitiesLayer\@\@AEAVAbilities\@\@\@Z\@std\@\@\@Z
     */
    MCAPI void forEachLayer(class std::function<void (enum class AbilitiesLayer, class Abilities &)> const &);
    /**
     * @hash   1379963027
     * @symbol  ?forEachLayer\@LayeredAbilities\@\@QEBAXAEBV?$function\@$$A6AXW4AbilitiesLayer\@\@AEBVAbilities\@\@\@Z\@std\@\@\@Z
     */
    MCAPI void forEachLayer(class std::function<void (enum class AbilitiesLayer, class Abilities const &)> const &) const;
    /**
     * @hash   1425243886
     * @symbol  ?getAbility\@LayeredAbilities\@\@QEAAAEAVAbility\@\@W4AbilitiesLayer\@\@W4AbilitiesIndex\@\@\@Z
     */
    MCAPI class Ability & getAbility(enum class AbilitiesLayer, enum class AbilitiesIndex);
    /**
     * @hash   -141222997
     * @symbol  ?getAbility\@LayeredAbilities\@\@QEBAAEBVAbility\@\@W4AbilitiesIndex\@\@\@Z
     */
    MCAPI class Ability const & getAbility(enum class AbilitiesIndex) const;
    /**
     * @hash   1103052235
     * @symbol  ?getBool\@LayeredAbilities\@\@QEBA_NW4AbilitiesIndex\@\@\@Z
     */
    MCAPI bool getBool(enum class AbilitiesIndex) const;
    /**
     * @hash   -851304814
     * @symbol  ?getCommandPermissions\@LayeredAbilities\@\@QEBA?AW4CommandPermissionLevel\@\@XZ
     */
    MCAPI enum class CommandPermissionLevel getCommandPermissions() const;
    /**
     * @hash   283940441
     * @symbol  ?getFloat\@LayeredAbilities\@\@QEBAMW4AbilitiesIndex\@\@\@Z
     */
    MCAPI float getFloat(enum class AbilitiesIndex) const;
    /**
     * @hash   -1630384945
     * @symbol  ?getLayer\@LayeredAbilities\@\@QEAAAEAVAbilities\@\@W4AbilitiesLayer\@\@\@Z
     */
    MCAPI class Abilities & getLayer(enum class AbilitiesLayer);
    /**
     * @hash   1224431562
     * @symbol  ?getPermissionsHandler\@LayeredAbilities\@\@QEAAAEAVPermissionsHandler\@\@XZ
     */
    MCAPI class PermissionsHandler & getPermissionsHandler();
    /**
     * @hash   1325879874
     * @symbol  ?getPlayerPermissions\@LayeredAbilities\@\@QEBA?AW4PlayerPermissionLevel\@\@XZ
     */
    MCAPI enum class PlayerPermissionLevel getPlayerPermissions() const;
    /**
     * @hash   -2199985
     * @symbol  ?loadSaveData\@LayeredAbilities\@\@QEAA_NAEBVCompoundTag\@\@\@Z
     */
    MCAPI bool loadSaveData(class CompoundTag const &);
    /**
     * @hash   172491204
     * @symbol  ??4LayeredAbilities\@\@QEAAAEAV0\@AEBV0\@\@Z
     */
    MCAPI class LayeredAbilities & operator=(class LayeredAbilities const &);
    /**
     * @hash   2023068333
     * @symbol  ?setAbility\@LayeredAbilities\@\@QEAAXW4AbilitiesIndex\@\@M\@Z
     */
    MCAPI void setAbility(enum class AbilitiesIndex, float);
    /**
     * @hash   88473081
     * @symbol  ?setAbility\@LayeredAbilities\@\@QEAAXW4AbilitiesIndex\@\@_N\@Z
     */
    MCAPI void setAbility(enum class AbilitiesIndex, bool);
    /**
     * @hash   2121133228
     * @symbol  ?setCommandPermissions\@LayeredAbilities\@\@QEAAXW4CommandPermissionLevel\@\@\@Z
     */
    MCAPI void setCommandPermissions(enum class CommandPermissionLevel);
    /**
     * @hash   847458314
     * @symbol  ?setPermissions\@LayeredAbilities\@\@QEAAXAEBVPermissionsHandler\@\@\@Z
     */
    MCAPI void setPermissions(class PermissionsHandler const &);
    /**
     * @hash   -47561762
     * @symbol  ?setPlayerPermissions\@LayeredAbilities\@\@QEAAXW4PlayerPermissionLevel\@\@\@Z
     */
    MCAPI void setPlayerPermissions(enum class PlayerPermissionLevel);
    /**
     * @hash   -2014426213
     * @symbol  ?DIFF_LAYER_AT\@LayeredAbilities\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const DIFF_LAYER_AT;
    /**
     * @hash   793946956
     * @symbol  ?getDiff\@LayeredAbilities\@\@SA?AV?$optional\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@std\@\@AEBV1\@0\@Z
     */
    MCAPI static class std::optional<std::string> getDiff(class LayeredAbilities const &, class LayeredAbilities const &);

//private:
    /**
     * @hash   -1542705648
     * @symbol  ?_handlePlayerPermissionsChange\@LayeredAbilities\@\@AEAAXW4PlayerPermissionLevel\@\@0\@Z
     */
    MCAPI void _handlePlayerPermissionsChange(enum class PlayerPermissionLevel, enum class PlayerPermissionLevel);

private:

};