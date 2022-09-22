/**
 * @file  ClientAutomationCommandOrigin.hpp
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
 * @brief MC class ClientAutomationCommandOrigin.
 *
 */
class ClientAutomationCommandOrigin : public CommandOrigin {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CLIENTAUTOMATIONCOMMANDORIGIN
public:
    class ClientAutomationCommandOrigin& operator=(class ClientAutomationCommandOrigin const &) = delete;
    ClientAutomationCommandOrigin(class ClientAutomationCommandOrigin const &) = delete;
    ClientAutomationCommandOrigin() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~ClientAutomationCommandOrigin();
    /**
     * @hash   -833274867
     * @vftbl  1
     * @symbol ?getRequestId@ClientAutomationCommandOrigin@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string const & getRequestId() const;
    /**
     * @hash   1274049468
     * @vftbl  2
     * @symbol ?getName@ClientAutomationCommandOrigin@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   2116896857
     * @vftbl  3
     * @symbol ?getBlockPosition@ClientAutomationCommandOrigin@@UEBA?AVBlockPos@@XZ
     */
    virtual class BlockPos getBlockPosition() const;
    /**
     * @hash   662992070
     * @vftbl  4
     * @symbol ?getWorldPosition@ClientAutomationCommandOrigin@@UEBA?AVVec3@@XZ
     */
    virtual class Vec3 getWorldPosition() const;
    /**
     * @hash   -1854887787
     * @vftbl  5
     * @symbol ?getRotation@ClientAutomationCommandOrigin@@UEBA?AV?$optional@VVec2@@@std@@XZ
     */
    virtual class std::optional<class Vec2> getRotation() const;
    /**
     * @hash   -1366815057
     * @vftbl  6
     * @symbol ?getLevel@ClientAutomationCommandOrigin@@UEBAPEAVLevel@@XZ
     */
    virtual class Level * getLevel() const;
    /**
     * @hash   -469041937
     * @vftbl  7
     * @symbol ?getDimension@ClientAutomationCommandOrigin@@UEBAPEAVDimension@@XZ
     */
    virtual class Dimension * getDimension() const;
    /**
     * @hash   -1811358871
     * @vftbl  8
     * @symbol ?getEntity@ClientAutomationCommandOrigin@@UEBAPEAVActor@@XZ
     */
    virtual class Actor * getEntity() const;
    /**
     * @hash   898980461
     * @vftbl  9
     * @symbol ?getPermissionsLevel@ClientAutomationCommandOrigin@@UEBA?AW4CommandPermissionLevel@@XZ
     */
    virtual enum CommandPermissionLevel getPermissionsLevel() const;
    /**
     * @hash   1189989219
     * @vftbl  10
     * @symbol ?clone@ClientAutomationCommandOrigin@@UEBA?AV?$unique_ptr@VCommandOrigin@@U?$default_delete@VCommandOrigin@@@std@@@std@@XZ
     */
    virtual std::unique_ptr<class CommandOrigin> clone() const;
    /**
     * @hash   539687457
     * @vftbl  17
     * @symbol ?canUseCommandsWithoutCheatsEnabled@ClientAutomationCommandOrigin@@UEBA_NXZ
     */
    virtual bool canUseCommandsWithoutCheatsEnabled() const;
    /**
     * @hash   1202786939
     * @vftbl  18
     * @symbol ?isSelectorExpansionAllowed@ClientAutomationCommandOrigin@@UEBA_NXZ
     */
    virtual bool isSelectorExpansionAllowed() const;
    /**
     * @hash   1848732258
     * @vftbl  23
     * @symbol ?getOriginType@ClientAutomationCommandOrigin@@UEBA?AW4CommandOriginType@@XZ
     */
    virtual enum CommandOriginType getOriginType() const;
    /**
     * @hash   992644896
     * @vftbl  24
     * @symbol ?toCommandOriginData@ClientAutomationCommandOrigin@@UEBA?AUCommandOriginData@@XZ
     */
    virtual struct CommandOriginData toCommandOriginData() const;
    /**
     * @hash   -688804391
     * @vftbl  29
     * @symbol ?serialize@ClientAutomationCommandOrigin@@UEBA?AVCompoundTag@@XZ
     */
    virtual class CompoundTag serialize() const;
    /**
     * @hash   456224875
     * @vftbl  30
     * @symbol ?isValid@ClientAutomationCommandOrigin@@UEBA_NXZ
     */
    virtual bool isValid() const;
    /**
     * @hash   569665750
     * @symbol ??0ClientAutomationCommandOrigin@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI ClientAutomationCommandOrigin(std::string const &);

};