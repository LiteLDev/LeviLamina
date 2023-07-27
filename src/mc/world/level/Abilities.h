#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/player/Ability.h"

class Abilities {

public:
    std::array<Ability, 19> mAbilities;
    // prevent constructor by default
    Abilities() = delete;

public:
    /**
     * @symbol ??0Abilities\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI Abilities(class Abilities const&); // NOLINT
    /**
     * @symbol ??0Abilities\@\@QEAA\@_N\@Z
     */
    MCAPI Abilities(bool); // NOLINT
    /**
     * @symbol ?addSaveData\@Abilities\@\@QEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void addSaveData(class CompoundTag&) const; // NOLINT
    /**
     * @symbol
     * ?forEachAbility\@Abilities\@\@QEAAXAEBV?$function\@$$A6AXAEAVAbility\@\@W4AbilitiesIndex\@\@\@Z\@std\@\@W4Options\@Ability\@\@\@Z
     */
    MCAPI void forEachAbility(
        class std::function<void(class Ability&, enum class AbilitiesIndex)> const&,
        enum class Ability::Options
    ); // NOLINT
    /**
     * @symbol
     * ?forEachAbility\@Abilities\@\@QEBAXAEBV?$function\@$$A6AXAEBVAbility\@\@W4AbilitiesIndex\@\@\@Z\@std\@\@W4Options\@Ability\@\@\@Z
     */
    MCAPI void forEachAbility(
        class std::function<void(class Ability const&, enum class AbilitiesIndex)> const&,
        enum class Ability::Options
    ) const; // NOLINT
    /**
     * @symbol ?getBool\@Abilities\@\@QEBA_NW4AbilitiesIndex\@\@\@Z
     */
    MCAPI bool getBool(enum class AbilitiesIndex) const; // NOLINT
    /**
     * @symbol ?getFloat\@Abilities\@\@QEBAMW4AbilitiesIndex\@\@\@Z
     */
    MCAPI float getFloat(enum class AbilitiesIndex) const; // NOLINT
    /**
     * @symbol ?isAnyAbilitySet\@Abilities\@\@QEBA_NXZ
     */
    MCAPI bool isAnyAbilitySet() const; // NOLINT
    /**
     * @symbol ?loadSaveData\@Abilities\@\@QEAA_NAEBVCompoundTag\@\@\@Z
     */
    MCAPI bool loadSaveData(class CompoundTag const&); // NOLINT
    /**
     * @symbol ??4Abilities\@\@QEAAAEAV0\@AEBV0\@\@Z
     */
    MCAPI class Abilities& operator=(class Abilities const&); // NOLINT
    /**
     * @symbol ?setAbility\@Abilities\@\@QEAAXW4AbilitiesIndex\@\@_N\@Z
     */
    MCAPI void setAbility(enum class AbilitiesIndex, bool); // NOLINT
    /**
     * @symbol ?setAbilityDiff\@Abilities\@\@QEAAXW4AbilitiesIndex\@\@_NAEA_N\@Z
     */
    MCAPI void setAbilityDiff(enum class AbilitiesIndex, bool, bool&); // NOLINT
    /**
     * @symbol ?setDefault\@Abilities\@\@QEAAXXZ
     */
    MCAPI void setDefault(); // NOLINT
    /**
     * @symbol ?setFromPermissions\@Abilities\@\@QEAAXW4PlayerPermissionLevel\@\@\@Z
     */
    MCAPI void setFromPermissions(enum class PlayerPermissionLevel); // NOLINT
    /**
     * @symbol ?unSet\@Abilities\@\@QEAAXXZ
     */
    MCAPI void unSet(); // NOLINT
    /**
     * @symbol ?unSet\@Abilities\@\@QEAAXW4AbilitiesIndex\@\@\@Z
     */
    MCAPI void unSet(enum class AbilitiesIndex); // NOLINT
    /**
     * @symbol ?getAbilityName\@Abilities\@\@SAPEBDW4AbilitiesIndex\@\@\@Z
     */
    MCAPI static char const* getAbilityName(enum class AbilitiesIndex); // NOLINT
    /**
     * @symbol ?getDefault\@Abilities\@\@SAAEBVAbility\@\@W4AbilitiesIndex\@\@\@Z
     */
    MCAPI static class Ability const& getDefault(enum class AbilitiesIndex); // NOLINT
    /**
     * @symbol
     * ?nameToAbilityIndex\@Abilities\@\@SA?AW4AbilitiesIndex\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static enum class AbilitiesIndex nameToAbilityIndex(std::string const&); // NOLINT
    /**
     * @symbol
     * ?DIFF_ABILITIY_AT\@Abilities\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const DIFF_ABILITIY_AT; // NOLINT
    /**
     * @symbol ?INVALID_ABILITY\@Abilities\@\@2VAbility\@\@A
     */
    MCAPI static class Ability INVALID_ABILITY; // NOLINT
    /**
     * @symbol
     * ?SERIALIZATION_TAG\@Abilities\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const SERIALIZATION_TAG; // NOLINT

    // private:

private:
    /**
     * @symbol ?ABILITY_NAMES\@Abilities\@\@0V?$array\@PEBD$0BD\@\@std\@\@A
     */
    MCAPI static class std::array<char const*, 19> ABILITY_NAMES; // NOLINT
};
