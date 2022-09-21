/**
 * @file  MC/Abilities.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Ability.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class Abilities.
 *
 */
class Abilities {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ABILITIES
public:
    Abilities() = delete;
#endif

public:
    /**
     * @hash   523836413
     * @symbol ??0Abilities@@QEAA@_N@Z
     */
    MCAPI Abilities(bool);
    /**
     * @hash   -1961837919
     * @symbol ??0Abilities@@QEAA@AEBV0@@Z
     */
    MCAPI Abilities(class Abilities const &);
    /**
     * @hash   -393917466
     * @symbol ?addSaveData@Abilities@@QEBAXAEAVCompoundTag@@@Z
     */
    MCAPI void addSaveData(class CompoundTag &) const;
    /**
     * @hash   -1112281706
     * @symbol ?forEachAbility@Abilities@@QEAAXAEBV?$function@$$A6AXAEAVAbility@@W4AbilitiesIndex@@@Z@std@@W4Options@Ability@@@Z
     */
    MCAPI void forEachAbility(class std::function<void (class Ability &, enum AbilitiesIndex)> const &, enum Ability::Options);
    /**
     * @hash   -414593708
     * @symbol ?forEachAbility@Abilities@@QEBAXAEBV?$function@$$A6AXAEBVAbility@@W4AbilitiesIndex@@@Z@std@@W4Options@Ability@@@Z
     */
    MCAPI void forEachAbility(class std::function<void (class Ability const &, enum AbilitiesIndex)> const &, enum Ability::Options) const;
    /**
     * @hash   1459513249
     * @symbol ?getAbility@Abilities@@QEAAAEAVAbility@@W4AbilitiesIndex@@@Z
     */
    MCAPI class Ability & getAbility(enum AbilitiesIndex);
    /**
     * @hash   2129180225
     * @symbol ?getAbility@Abilities@@QEBAAEBVAbility@@W4AbilitiesIndex@@@Z
     */
    MCAPI class Ability const & getAbility(enum AbilitiesIndex) const;
    /**
     * @hash   18642761
     * @symbol ?getBool@Abilities@@QEBA_NW4AbilitiesIndex@@@Z
     */
    MCAPI bool getBool(enum AbilitiesIndex) const;
    /**
     * @hash   1662307299
     * @symbol ?getFloat@Abilities@@QEBAMW4AbilitiesIndex@@@Z
     */
    MCAPI float getFloat(enum AbilitiesIndex) const;
    /**
     * @hash   -387993378
     * @symbol ?isAnyAbilitySet@Abilities@@QEBA_NXZ
     */
    MCAPI bool isAnyAbilitySet() const;
    /**
     * @hash   1071667927
     * @symbol ?loadSaveData@Abilities@@QEAA_NAEBVCompoundTag@@@Z
     */
    MCAPI bool loadSaveData(class CompoundTag const &);
    /**
     * @hash   -1434120452
     * @symbol ??4Abilities@@QEAAAEAV0@AEBV0@@Z
     */
    MCAPI class Abilities & operator=(class Abilities const &);
    /**
     * @hash   -2059693889
     * @symbol ??8Abilities@@QEBA_NAEBV0@@Z
     */
    MCAPI bool operator==(class Abilities const &) const;
    /**
     * @hash   143022311
     * @symbol ?setAbility@Abilities@@QEAAXW4AbilitiesIndex@@AEBVAbility@@@Z
     */
    MCAPI void setAbility(enum AbilitiesIndex, class Ability const &);
    /**
     * @hash   1990590527
     * @symbol ?setAbility@Abilities@@QEAAXW4AbilitiesIndex@@M@Z
     */
    MCAPI void setAbility(enum AbilitiesIndex, float);
    /**
     * @hash   -329498393
     * @symbol ?setAbility@Abilities@@QEAAXW4AbilitiesIndex@@_N@Z
     */
    MCAPI void setAbility(enum AbilitiesIndex, bool);
    /**
     * @hash   2068041913
     * @symbol ?setAbilityDiff@Abilities@@QEAAXW4AbilitiesIndex@@_NAEA_N@Z
     */
    MCAPI void setAbilityDiff(enum AbilitiesIndex, bool, bool &);
    /**
     * @hash   -1383853727
     * @symbol ?setDefault@Abilities@@QEAAXXZ
     */
    MCAPI void setDefault();
    /**
     * @hash   448727008
     * @symbol ?setFromPermissions@Abilities@@QEAAXW4PlayerPermissionLevel@@@Z
     */
    MCAPI void setFromPermissions(enum PlayerPermissionLevel);
    /**
     * @hash   259223492
     * @symbol ?unSet@Abilities@@QEAAXW4AbilitiesIndex@@@Z
     */
    MCAPI void unSet(enum AbilitiesIndex);
    /**
     * @hash   1001812343
     * @symbol ?unSet@Abilities@@QEAAXXZ
     */
    MCAPI void unSet();
    /**
     * @hash   1452794941
     * @symbol ?INVALID_ABILITY@Abilities@@2VAbility@@A
     */
    MCAPI static class Ability INVALID_ABILITY;
    /**
     * @hash   -1613066765
     * @symbol ?SERIALIZATION_TAG@Abilities@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const SERIALIZATION_TAG;
    /**
     * @hash   629696552
     * @symbol ?getAbilityName@Abilities@@SAPEBDW4AbilitiesIndex@@@Z
     */
    MCAPI static char const * getAbilityName(enum AbilitiesIndex);
    /**
     * @hash   1146133869
     * @symbol ?getDefault@Abilities@@SAAEBVAbility@@W4AbilitiesIndex@@@Z
     */
    MCAPI static class Ability const & getDefault(enum AbilitiesIndex);
    /**
     * @hash   -1718930905
     * @symbol ?nameToAbilityIndex@Abilities@@SA?AW4AbilitiesIndex@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI static enum AbilitiesIndex nameToAbilityIndex(std::string const &);

//private:

private:
    /**
     * @hash   -767147388
     * @symbol ?ABILITY_NAMES@Abilities@@0V?$array@PEBD$0BC@@std@@A
     */
    MCAPI static class std::array<char const *, 18> ABILITY_NAMES;

};