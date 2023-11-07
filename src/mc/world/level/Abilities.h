#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/AbilitiesIndex.h"
#include "mc/world/actor/player/Ability.h"
#include "mc/world/actor/player/PlayerPermissionLevel.h"

class Abilities {
public:
    std::array<Ability, 19> mAbilities;
    // prevent constructor by default
    Abilities();

public:
    // NOLINTBEGIN
    // symbol: ??0Abilities@@QEAA@_N@Z
    MCAPI explicit Abilities(bool);

    // symbol: ??0Abilities@@QEAA@AEBV0@@Z
    MCAPI Abilities(class Abilities const&);

    // symbol: ?addSaveData@Abilities@@QEBAXAEAVCompoundTag@@@Z
    MCAPI void addSaveData(class CompoundTag&) const;

    // symbol:
    // ?forEachAbility@Abilities@@QEAAXAEBV?$function@$$A6AXAEAVAbility@@W4AbilitiesIndex@@@Z@std@@W4Options@Ability@@@Z
    MCAPI void forEachAbility(std::function<void(class Ability&, ::AbilitiesIndex)> const&, ::Ability::Options);

    // symbol:
    // ?forEachAbility@Abilities@@QEBAXAEBV?$function@$$A6AXAEBVAbility@@W4AbilitiesIndex@@@Z@std@@W4Options@Ability@@@Z
    MCAPI void
    forEachAbility(std::function<void(class Ability const&, ::AbilitiesIndex)> const&, ::Ability::Options) const;

    // symbol: ?getBool@Abilities@@QEBA_NW4AbilitiesIndex@@@Z
    MCAPI bool getBool(::AbilitiesIndex) const;

    // symbol: ?getFloat@Abilities@@QEBAMW4AbilitiesIndex@@@Z
    MCAPI float getFloat(::AbilitiesIndex) const;

    // symbol: ?isAnyAbilitySet@Abilities@@QEBA_NXZ
    MCAPI bool isAnyAbilitySet() const;

    // symbol: ?loadSaveData@Abilities@@QEAA_NAEBVCompoundTag@@@Z
    MCAPI bool loadSaveData(class CompoundTag const&);

    // symbol: ??4Abilities@@QEAAAEAV0@AEBV0@@Z
    MCAPI class Abilities& operator=(class Abilities const&);

    // symbol: ?setAbility@Abilities@@QEAAXW4AbilitiesIndex@@_N@Z
    MCAPI void setAbility(::AbilitiesIndex, bool);

    // symbol: ?setAbilityDiff@Abilities@@QEAAXW4AbilitiesIndex@@_NAEA_N@Z
    MCAPI void setAbilityDiff(::AbilitiesIndex, bool, bool&);

    // symbol: ?setDefault@Abilities@@QEAAXXZ
    MCAPI void setDefault();

    // symbol: ?setFromPermissions@Abilities@@QEAAXW4PlayerPermissionLevel@@@Z
    MCAPI void setFromPermissions(::PlayerPermissionLevel);

    // symbol: ?unSet@Abilities@@QEAAXXZ
    MCAPI void unSet();

    // symbol: ?unSet@Abilities@@QEAAXW4AbilitiesIndex@@@Z
    MCAPI void unSet(::AbilitiesIndex);

    // symbol: ?getAbilityName@Abilities@@SAPEBDW4AbilitiesIndex@@@Z
    MCAPI static char const* getAbilityName(::AbilitiesIndex);

    // symbol: ?getDefault@Abilities@@SAAEBVAbility@@W4AbilitiesIndex@@@Z
    MCAPI static class Ability const& getDefault(::AbilitiesIndex);

    // symbol:
    // ?nameToAbilityIndex@Abilities@@SA?AW4AbilitiesIndex@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI static ::AbilitiesIndex nameToAbilityIndex(std::string const&);

    // symbol: ?DIFF_ABILITIY_AT@Abilities@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const DIFF_ABILITIY_AT;

    // symbol: ?INVALID_ABILITY@Abilities@@2VAbility@@A
    MCAPI static class Ability INVALID_ABILITY;

    // symbol: ?SERIALIZATION_TAG@Abilities@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const SERIALIZATION_TAG;

    // NOLINTEND

private:
    // NOLINTBEGIN
    // symbol: ?ABILITY_NAMES@Abilities@@0V?$array@PEBD$0BD@@std@@A
    MCAPI static std::array<char const*, 19> ABILITY_NAMES;

    // NOLINTEND

    // member accessor
public:
    // NOLINTBEGIN
    static auto& $ABILITY_NAMES() { return ABILITY_NAMES; }

    // NOLINTEND
};
