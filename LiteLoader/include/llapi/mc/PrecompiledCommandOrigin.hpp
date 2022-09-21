/**
 * @file  MC/PrecompiledCommandOrigin.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "CommandOrigin.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class PrecompiledCommandOrigin.
 *
 */
class PrecompiledCommandOrigin : public CommandOrigin {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PRECOMPILEDCOMMANDORIGIN
public:
    class PrecompiledCommandOrigin& operator=(class PrecompiledCommandOrigin const &) = delete;
    PrecompiledCommandOrigin(class PrecompiledCommandOrigin const &) = delete;
    PrecompiledCommandOrigin() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~PrecompiledCommandOrigin();
    /**
     * @hash   452412703
     * @vftbl  1
     * @symbol ?getRequestId@PrecompiledCommandOrigin@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string const & getRequestId() const;
    /**
     * @hash   -835019170
     * @vftbl  2
     * @symbol ?getName@PrecompiledCommandOrigin@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   1363926667
     * @vftbl  3
     * @symbol ?getBlockPosition@PrecompiledCommandOrigin@@UEBA?AVBlockPos@@XZ
     */
    virtual class BlockPos getBlockPosition() const;
    /**
     * @hash   1802803256
     * @vftbl  4
     * @symbol ?getWorldPosition@PrecompiledCommandOrigin@@UEBA?AVVec3@@XZ
     */
    virtual class Vec3 getWorldPosition() const;
    /**
     * @hash   114836551
     * @vftbl  5
     * @symbol ?getRotation@PrecompiledCommandOrigin@@UEBA?AV?$optional@VVec2@@@std@@XZ
     */
    virtual class std::optional<class Vec2> getRotation() const;
    /**
     * @hash   -1184614303
     * @vftbl  6
     * @symbol ?getLevel@PrecompiledCommandOrigin@@UEBAPEAVLevel@@XZ
     */
    virtual class Level * getLevel() const;
    /**
     * @hash   484251425
     * @vftbl  7
     * @symbol ?getDimension@PrecompiledCommandOrigin@@UEBAPEAVDimension@@XZ
     */
    virtual class Dimension * getDimension() const;
    /**
     * @hash   1687305307
     * @vftbl  8
     * @symbol ?getEntity@PrecompiledCommandOrigin@@UEBAPEAVActor@@XZ
     */
    virtual class Actor * getEntity() const;
    /**
     * @hash   -1503353505
     * @vftbl  9
     * @symbol ?getPermissionsLevel@PrecompiledCommandOrigin@@UEBA?AW4CommandPermissionLevel@@XZ
     */
    virtual enum CommandPermissionLevel getPermissionsLevel() const;
    /**
     * @hash   2137823525
     * @vftbl  10
     * @symbol ?clone@PrecompiledCommandOrigin@@UEBA?AV?$unique_ptr@VCommandOrigin@@U?$default_delete@VCommandOrigin@@@std@@@std@@XZ
     */
    virtual std::unique_ptr<class CommandOrigin> clone() const;
    /**
     * @hash   -1055144660
     * @vftbl  13
     * @symbol ?hasChatPerms@PrecompiledCommandOrigin@@UEBA_NXZ
     */
    virtual bool hasChatPerms() const;
    /**
     * @hash   219599891
     * @vftbl  14
     * @symbol ?hasTellPerms@PrecompiledCommandOrigin@@UEBA_NXZ
     */
    virtual bool hasTellPerms() const;
    /**
     * @hash   1704626362
     * @vftbl  15
     * @symbol ?canUseAbility@PrecompiledCommandOrigin@@UEBA_NW4AbilitiesIndex@@@Z
     */
    virtual bool canUseAbility(enum AbilitiesIndex) const;
    /**
     * @hash   881804366
     * @vftbl  16
     * @symbol ?isWorldBuilder@PrecompiledCommandOrigin@@UEBA_NXZ
     */
    virtual bool isWorldBuilder() const;
    /**
     * @hash   706264659
     * @vftbl  17
     * @symbol ?canUseCommandsWithoutCheatsEnabled@PrecompiledCommandOrigin@@UEBA_NXZ
     */
    virtual bool canUseCommandsWithoutCheatsEnabled() const;
    /**
     * @hash   -1090123731
     * @vftbl  18
     * @symbol ?isSelectorExpansionAllowed@PrecompiledCommandOrigin@@UEBA_NXZ
     */
    virtual bool isSelectorExpansionAllowed() const;
    /**
     * @hash   78681956
     * @vftbl  23
     * @symbol ?getOriginType@PrecompiledCommandOrigin@@UEBA?AW4CommandOriginType@@XZ
     */
    virtual enum CommandOriginType getOriginType() const;
    /**
     * @hash   1101959051
     * @vftbl  29
     * @symbol ?serialize@PrecompiledCommandOrigin@@UEBA?AVCompoundTag@@XZ
     */
    virtual class CompoundTag serialize() const;
    /**
     * @hash   -372415571
     * @vftbl  30
     * @symbol ?isValid@PrecompiledCommandOrigin@@UEBA_NXZ
     */
    virtual bool isValid() const;

};