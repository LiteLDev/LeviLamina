/**
 * @file  LayeredAbilities.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
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
     * @symbol  ??0LayeredAbilities\@\@QEAA\@XZ
     */
    MCAPI LayeredAbilities();
    /**
     * @symbol  ??0LayeredAbilities\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI LayeredAbilities(class LayeredAbilities const &);
    /**
     * @symbol  ?addSaveData\@LayeredAbilities\@\@QEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void addSaveData(class CompoundTag &) const;
    /**
     * @symbol  ?forEachAbility\@LayeredAbilities\@\@QEBAXAEBV?$function\@$$A6AXAEBVAbility\@\@PEBD\@Z\@std\@\@W4Options\@Ability\@\@\@Z
     */
    MCAPI void forEachAbility(class std::function<void (class Ability const &, char const *)> const &, enum class Ability::Options) const;
    /**
     * @symbol  ?forEachAbility\@LayeredAbilities\@\@QEBAXAEBV?$function\@$$A6AXAEBVAbility\@\@W4AbilitiesIndex\@\@\@Z\@std\@\@W4Options\@Ability\@\@\@Z
     */
    MCAPI void forEachAbility(class std::function<void (class Ability const &, enum class AbilitiesIndex)> const &, enum class Ability::Options) const;
    /**
     * @symbol  ?forEachLayer\@LayeredAbilities\@\@QEAAXAEBV?$function\@$$A6AXW4AbilitiesLayer\@\@AEAVAbilities\@\@\@Z\@std\@\@\@Z
     */
    MCAPI void forEachLayer(class std::function<void (enum class AbilitiesLayer, class Abilities &)> const &);
    /**
     * @symbol  ?forEachLayer\@LayeredAbilities\@\@QEBAXAEBV?$function\@$$A6AXW4AbilitiesLayer\@\@AEBVAbilities\@\@\@Z\@std\@\@\@Z
     */
    MCAPI void forEachLayer(class std::function<void (enum class AbilitiesLayer, class Abilities const &)> const &) const;
    /**
     * @symbol  ?getAbility\@LayeredAbilities\@\@QEAAAEAVAbility\@\@W4AbilitiesLayer\@\@W4AbilitiesIndex\@\@\@Z
     */
    MCAPI class Ability & getAbility(enum class AbilitiesLayer, enum class AbilitiesIndex);
    /**
     * @symbol  ?getAbility\@LayeredAbilities\@\@QEBAAEBVAbility\@\@W4AbilitiesIndex\@\@\@Z
     */
    MCAPI class Ability const & getAbility(enum class AbilitiesIndex) const;
    /**
     * @symbol  ?getBool\@LayeredAbilities\@\@QEBA_NW4AbilitiesIndex\@\@\@Z
     */
    MCAPI bool getBool(enum class AbilitiesIndex) const;
    /**
     * @symbol  ?getCommandPermissions\@LayeredAbilities\@\@QEBA?AW4CommandPermissionLevel\@\@XZ
     */
    MCAPI enum class CommandPermissionLevel getCommandPermissions() const;
    /**
     * @symbol  ?getFloat\@LayeredAbilities\@\@QEBAMW4AbilitiesIndex\@\@\@Z
     */
    MCAPI float getFloat(enum class AbilitiesIndex) const;
    /**
     * @symbol  ?getLayer\@LayeredAbilities\@\@QEAAAEAVAbilities\@\@W4AbilitiesLayer\@\@\@Z
     */
    MCAPI class Abilities & getLayer(enum class AbilitiesLayer);
    /**
     * @symbol  ?getPermissionsHandler\@LayeredAbilities\@\@QEAAAEAVPermissionsHandler\@\@XZ
     */
    MCAPI class PermissionsHandler & getPermissionsHandler();
    /**
     * @symbol  ?getPlayerPermissions\@LayeredAbilities\@\@QEBA?AW4PlayerPermissionLevel\@\@XZ
     */
    MCAPI enum class PlayerPermissionLevel getPlayerPermissions() const;
    /**
     * @symbol  ?loadSaveData\@LayeredAbilities\@\@QEAA_NAEBVCompoundTag\@\@\@Z
     */
    MCAPI bool loadSaveData(class CompoundTag const &);
    /**
     * @symbol  ??4LayeredAbilities\@\@QEAAAEAV0\@AEBV0\@\@Z
     */
    MCAPI class LayeredAbilities & operator=(class LayeredAbilities const &);
    /**
     * @symbol  ?setAbility\@LayeredAbilities\@\@QEAAXW4AbilitiesIndex\@\@M\@Z
     */
    MCAPI void setAbility(enum class AbilitiesIndex, float);
    /**
     * @symbol  ?setAbility\@LayeredAbilities\@\@QEAAXW4AbilitiesIndex\@\@_N\@Z
     */
    MCAPI void setAbility(enum class AbilitiesIndex, bool);
    /**
     * @symbol  ?setCommandPermissions\@LayeredAbilities\@\@QEAAXW4CommandPermissionLevel\@\@\@Z
     */
    MCAPI void setCommandPermissions(enum class CommandPermissionLevel);
    /**
     * @symbol  ?setPermissions\@LayeredAbilities\@\@QEAAXAEBVPermissionsHandler\@\@\@Z
     */
    MCAPI void setPermissions(class PermissionsHandler const &);
    /**
     * @symbol  ?setPlayerPermissions\@LayeredAbilities\@\@QEAAXW4PlayerPermissionLevel\@\@\@Z
     */
    MCAPI void setPlayerPermissions(enum class PlayerPermissionLevel);
    /**
     * @symbol  ?DIFF_LAYER_AT\@LayeredAbilities\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const DIFF_LAYER_AT;
    /**
     * @symbol  ?getDiff\@LayeredAbilities\@\@SA?AV?$optional\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@std\@\@AEBV1\@0\@Z
     */
    MCAPI static class std::optional<std::string> getDiff(class LayeredAbilities const &, class LayeredAbilities const &);

//private:
    /**
     * @symbol  ?_handlePlayerPermissionsChange\@LayeredAbilities\@\@AEAAXW4PlayerPermissionLevel\@\@0\@Z
     */
    MCAPI void _handlePlayerPermissionsChange(enum class PlayerPermissionLevel, enum class PlayerPermissionLevel);

private:

};