#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/player/Ability.h"

class LayeredAbilities {

public:
    /**
     * @symbol ??0LayeredAbilities\@\@QEAA\@XZ
     */
    MCAPI LayeredAbilities(); // NOLINT
    /**
     * @symbol ??0LayeredAbilities\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI LayeredAbilities(class LayeredAbilities const&); // NOLINT
    /**
     * @symbol ?addSaveData\@LayeredAbilities\@\@QEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void addSaveData(class CompoundTag&) const; // NOLINT
    /**
     * @symbol
     * ?forEachAbility\@LayeredAbilities\@\@QEBAXAEBV?$function\@$$A6AXAEBVAbility\@\@PEBD\@Z\@std\@\@W4Options\@Ability\@\@\@Z
     */
    MCAPI void forEachAbility(
        class std::function<void(class Ability const&, char const*)> const&,
        enum class Ability::Options
    ) const; // NOLINT
    /**
     * @symbol
     * ?forEachAbility\@LayeredAbilities\@\@QEBAXAEBV?$function\@$$A6AXAEBVAbility\@\@W4AbilitiesIndex\@\@\@Z\@std\@\@W4Options\@Ability\@\@\@Z
     */
    MCAPI void forEachAbility(
        class std::function<void(class Ability const&, enum class AbilitiesIndex)> const&,
        enum class Ability::Options
    ) const; // NOLINT
    /**
     * @symbol
     * ?forEachLayer\@LayeredAbilities\@\@QEAAXAEBV?$function\@$$A6AXW4AbilitiesLayer\@\@AEAVAbilities\@\@\@Z\@std\@\@\@Z
     */
    MCAPI void forEachLayer(class std::function<void(enum class AbilitiesLayer, class Abilities&)> const&); // NOLINT
    /**
     * @symbol
     * ?forEachLayer\@LayeredAbilities\@\@QEBAXAEBV?$function\@$$A6AXW4AbilitiesLayer\@\@AEBVAbilities\@\@\@Z\@std\@\@\@Z
     */
    MCAPI void
    forEachLayer(class std::function<void(enum class AbilitiesLayer, class Abilities const&)> const&) const; // NOLINT
    /**
     * @symbol ?getAbility\@LayeredAbilities\@\@QEAAAEAVAbility\@\@W4AbilitiesLayer\@\@W4AbilitiesIndex\@\@\@Z
     */
    MCAPI class Ability& getAbility(enum class AbilitiesLayer, enum class AbilitiesIndex); // NOLINT
    /**
     * @symbol ?getAbility\@LayeredAbilities\@\@QEBAAEBVAbility\@\@W4AbilitiesIndex\@\@\@Z
     */
    MCAPI class Ability const& getAbility(enum class AbilitiesIndex) const; // NOLINT
    /**
     * @symbol ?getBool\@LayeredAbilities\@\@QEBA_NW4AbilitiesIndex\@\@\@Z
     */
    MCAPI bool getBool(enum class AbilitiesIndex) const; // NOLINT
    /**
     * @symbol ?getCommandPermissions\@LayeredAbilities\@\@QEBA?AW4CommandPermissionLevel\@\@XZ
     */
    MCAPI enum class CommandPermissionLevel getCommandPermissions() const; // NOLINT
    /**
     * @symbol ?getFloat\@LayeredAbilities\@\@QEBAMW4AbilitiesIndex\@\@\@Z
     */
    MCAPI float getFloat(enum class AbilitiesIndex) const; // NOLINT
    /**
     * @symbol ?getLayer\@LayeredAbilities\@\@QEAAAEAVAbilities\@\@W4AbilitiesLayer\@\@\@Z
     */
    MCAPI class Abilities& getLayer(enum class AbilitiesLayer); // NOLINT
    /**
     * @symbol ?getPermissionsHandler\@LayeredAbilities\@\@QEAAAEAVPermissionsHandler\@\@XZ
     */
    MCAPI class PermissionsHandler& getPermissionsHandler(); // NOLINT
    /**
     * @symbol ?getPlayerPermissions\@LayeredAbilities\@\@QEBA?AW4PlayerPermissionLevel\@\@XZ
     */
    MCAPI enum class PlayerPermissionLevel getPlayerPermissions() const; // NOLINT
    /**
     * @symbol ??4LayeredAbilities\@\@QEAAAEAV0\@AEBV0\@\@Z
     */
    MCAPI class LayeredAbilities& operator=(class LayeredAbilities const&); // NOLINT
    /**
     * @symbol ?setAbility\@LayeredAbilities\@\@QEAAXW4AbilitiesIndex\@\@M\@Z
     */
    MCAPI void setAbility(enum class AbilitiesIndex, float); // NOLINT
    /**
     * @symbol ?setAbility\@LayeredAbilities\@\@QEAAXW4AbilitiesIndex\@\@_N\@Z
     */
    MCAPI void setAbility(enum class AbilitiesIndex, bool); // NOLINT
    /**
     * @symbol ?setCommandPermissions\@LayeredAbilities\@\@QEAAXW4CommandPermissionLevel\@\@\@Z
     */
    MCAPI void setCommandPermissions(enum class CommandPermissionLevel); // NOLINT
    /**
     * @symbol ?setPlayerPermissions\@LayeredAbilities\@\@QEAAXW4PlayerPermissionLevel\@\@\@Z
     */
    MCAPI void setPlayerPermissions(enum class PlayerPermissionLevel); // NOLINT
    /**
     * @symbol
     * ?DIFF_LAYER_AT\@LayeredAbilities\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const DIFF_LAYER_AT; // NOLINT

    // private:
    /**
     * @symbol ?_handlePlayerPermissionsChange\@LayeredAbilities\@\@AEAAXW4PlayerPermissionLevel\@\@0\@Z
     */
    MCAPI void
        _handlePlayerPermissionsChange(enum class PlayerPermissionLevel, enum class PlayerPermissionLevel); // NOLINT

private:
};
