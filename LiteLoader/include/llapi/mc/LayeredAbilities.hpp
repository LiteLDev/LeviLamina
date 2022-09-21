/**
 * @file  MC/LayeredAbilities.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Ability.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class LayeredAbilities.
 *
 */
class LayeredAbilities {

#define AFTER_EXTRA

#undef AFTER_EXTRA
public:
    /**
     * @hash   -1198628108
     * @symbol ??0LayeredAbilities@@QEAA@XZ
     */
    MCAPI LayeredAbilities();
    /**
     * @hash   945810801
     * @symbol ??0LayeredAbilities@@QEAA@AEBV0@@Z
     */
    MCAPI LayeredAbilities(class LayeredAbilities const &);
    /**
     * @hash   1959454392
     * @symbol ?addSaveData@LayeredAbilities@@QEBAXAEAVCompoundTag@@@Z
     */
    MCAPI void addSaveData(class CompoundTag &) const;
    /**
     * @hash   -467768704
     * @symbol ?forEachAbility@LayeredAbilities@@QEBAXAEBV?$function@$$A6AXAEBVAbility@@PEBD@Z@std@@W4Options@Ability@@@Z
     */
    MCAPI void forEachAbility(class std::function<void (class Ability const &, char const *)> const &, enum Ability::Options) const;
    /**
     * @hash   473337522
     * @symbol ?forEachAbility@LayeredAbilities@@QEBAXAEBV?$function@$$A6AXAEBVAbility@@W4AbilitiesIndex@@@Z@std@@W4Options@Ability@@@Z
     */
    MCAPI void forEachAbility(class std::function<void (class Ability const &, enum AbilitiesIndex)> const &, enum Ability::Options) const;
    /**
     * @hash   -1867006007
     * @symbol ?forEachLayer@LayeredAbilities@@QEAAXAEBV?$function@$$A6AXW4AbilitiesLayer@@AEAVAbilities@@@Z@std@@@Z
     */
    MCAPI void forEachLayer(class std::function<void (enum AbilitiesLayer, class Abilities &)> const &);
    /**
     * @hash   2067008835
     * @symbol ?forEachLayer@LayeredAbilities@@QEBAXAEBV?$function@$$A6AXW4AbilitiesLayer@@AEBVAbilities@@@Z@std@@@Z
     */
    MCAPI void forEachLayer(class std::function<void (enum AbilitiesLayer, class Abilities const &)> const &) const;
    /**
     * @hash   2112274318
     * @symbol ?getAbility@LayeredAbilities@@QEAAAEAVAbility@@W4AbilitiesLayer@@W4AbilitiesIndex@@@Z
     */
    MCAPI class Ability & getAbility(enum AbilitiesLayer, enum AbilitiesIndex);
    /**
     * @hash   545807435
     * @symbol ?getAbility@LayeredAbilities@@QEBAAEBVAbility@@W4AbilitiesIndex@@@Z
     */
    MCAPI class Ability const & getAbility(enum AbilitiesIndex) const;
    /**
     * @hash   1790082667
     * @symbol ?getBool@LayeredAbilities@@QEBA_NW4AbilitiesIndex@@@Z
     */
    MCAPI bool getBool(enum AbilitiesIndex) const;
    /**
     * @hash   -164274382
     * @symbol ?getCommandPermissions@LayeredAbilities@@QEBA?AW4CommandPermissionLevel@@XZ
     */
    MCAPI enum CommandPermissionLevel getCommandPermissions() const;
    /**
     * @hash   969986809
     * @symbol ?getFloat@LayeredAbilities@@QEBAMW4AbilitiesIndex@@@Z
     */
    MCAPI float getFloat(enum AbilitiesIndex) const;
    /**
     * @hash   -944338577
     * @symbol ?getLayer@LayeredAbilities@@QEAAAEAVAbilities@@W4AbilitiesLayer@@@Z
     */
    MCAPI class Abilities & getLayer(enum AbilitiesLayer);
    /**
     * @hash   1127808778
     * @symbol ?getPermissionsHandler@LayeredAbilities@@QEAAAEAVPermissionsHandler@@XZ
     */
    MCAPI class PermissionsHandler & getPermissionsHandler();
    /**
     * @hash   2011926242
     * @symbol ?getPlayerPermissions@LayeredAbilities@@QEBA?AW4PlayerPermissionLevel@@XZ
     */
    MCAPI enum PlayerPermissionLevel getPlayerPermissions() const;
    /**
     * @hash   683846383
     * @symbol ?loadSaveData@LayeredAbilities@@QEAA_NAEBVCompoundTag@@@Z
     */
    MCAPI bool loadSaveData(class CompoundTag const &);
    /**
     * @hash   859444756
     * @symbol ??4LayeredAbilities@@QEAAAEAV0@AEBV0@@Z
     */
    MCAPI class LayeredAbilities & operator=(class LayeredAbilities const &);
    /**
     * @hash   1558724319
     * @symbol ??8LayeredAbilities@@QEBA_NAEBV0@@Z
     */
    MCAPI bool operator==(class LayeredAbilities const &) const;
    /**
     * @hash   -1585852595
     * @symbol ?setAbility@LayeredAbilities@@QEAAXW4AbilitiesIndex@@M@Z
     */
    MCAPI void setAbility(enum AbilitiesIndex, float);
    /**
     * @hash   774519449
     * @symbol ?setAbility@LayeredAbilities@@QEAAXW4AbilitiesIndex@@_N@Z
     */
    MCAPI void setAbility(enum AbilitiesIndex, bool);
    /**
     * @hash   -1487787700
     * @symbol ?setCommandPermissions@LayeredAbilities@@QEAAXW4CommandPermissionLevel@@@Z
     */
    MCAPI void setCommandPermissions(enum CommandPermissionLevel);
    /**
     * @hash   1533504682
     * @symbol ?setPermissions@LayeredAbilities@@QEAAXAEBVPermissionsHandler@@@Z
     */
    MCAPI void setPermissions(class PermissionsHandler const &);
    /**
     * @hash   638484606
     * @symbol ?setPlayerPermissions@LayeredAbilities@@QEAAXW4PlayerPermissionLevel@@@Z
     */
    MCAPI void setPlayerPermissions(enum PlayerPermissionLevel);

//private:
    /**
     * @hash   -855629088
     * @symbol ?_handlePlayerPermissionsChange@LayeredAbilities@@AEAAXW4PlayerPermissionLevel@@0@Z
     */
    MCAPI void _handlePlayerPermissionsChange(enum PlayerPermissionLevel, enum PlayerPermissionLevel);

private:

};