/**
 * @file  MC/VirtualCommandOrigin.hpp
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
 * @brief MC class VirtualCommandOrigin.
 *
 */
class VirtualCommandOrigin : public CommandOrigin {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VIRTUALCOMMANDORIGIN
public:
    class VirtualCommandOrigin& operator=(class VirtualCommandOrigin const &) = delete;
    VirtualCommandOrigin(class VirtualCommandOrigin const &) = delete;
    VirtualCommandOrigin() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~VirtualCommandOrigin();
    /**
     * @hash   732757798
     * @vftbl  1
     * @symbol ?getRequestId@VirtualCommandOrigin@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string const & getRequestId() const;
    /**
     * @hash   -833996891
     * @vftbl  2
     * @symbol ?getName@VirtualCommandOrigin@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   1795009794
     * @vftbl  3
     * @symbol ?getBlockPosition@VirtualCommandOrigin@@UEBA?AVBlockPos@@XZ
     */
    virtual class BlockPos getBlockPosition() const;
    /**
     * @hash   2099859439
     * @vftbl  4
     * @symbol ?getWorldPosition@VirtualCommandOrigin@@UEBA?AVVec3@@XZ
     */
    virtual class Vec3 getWorldPosition() const;
    /**
     * @hash   89867854
     * @vftbl  5
     * @symbol ?getRotation@VirtualCommandOrigin@@UEBA?AV?$optional@VVec2@@@std@@XZ
     */
    virtual class std::optional<class Vec2> getRotation() const;
    /**
     * @hash   -466289992
     * @vftbl  6
     * @symbol ?getLevel@VirtualCommandOrigin@@UEBAPEAVLevel@@XZ
     */
    virtual class Level * getLevel() const;
    /**
     * @hash   495818040
     * @vftbl  7
     * @symbol ?getDimension@VirtualCommandOrigin@@UEBAPEAVDimension@@XZ
     */
    virtual class Dimension * getDimension() const;
    /**
     * @hash   1575363410
     * @vftbl  8
     * @symbol ?getEntity@VirtualCommandOrigin@@UEBAPEAVActor@@XZ
     */
    virtual class Actor * getEntity() const;
    /**
     * @hash   -656918794
     * @vftbl  9
     * @symbol ?getPermissionsLevel@VirtualCommandOrigin@@UEBA?AW4CommandPermissionLevel@@XZ
     */
    virtual enum CommandPermissionLevel getPermissionsLevel() const;
    /**
     * @hash   688507500
     * @vftbl  10
     * @symbol ?clone@VirtualCommandOrigin@@UEBA?AV?$unique_ptr@VCommandOrigin@@U?$default_delete@VCommandOrigin@@@std@@@std@@XZ
     */
    virtual std::unique_ptr<class CommandOrigin> clone() const;
    /**
     * @hash   -1344951837
     * @vftbl  13
     * @symbol ?hasChatPerms@VirtualCommandOrigin@@UEBA_NXZ
     */
    virtual bool hasChatPerms() const;
    /**
     * @hash   470115674
     * @vftbl  14
     * @symbol ?hasTellPerms@VirtualCommandOrigin@@UEBA_NXZ
     */
    virtual bool hasTellPerms() const;
    /**
     * @hash   1278279427
     * @vftbl  15
     * @symbol ?canUseAbility@VirtualCommandOrigin@@UEBA_NW4AbilitiesIndex@@@Z
     */
    virtual bool canUseAbility(enum AbilitiesIndex) const;
    /**
     * @hash   -1114661894
     * @vftbl  17
     * @symbol ?canUseCommandsWithoutCheatsEnabled@VirtualCommandOrigin@@UEBA_NXZ
     */
    virtual bool canUseCommandsWithoutCheatsEnabled() const;
    /**
     * @hash   1999682164
     * @vftbl  18
     * @symbol ?isSelectorExpansionAllowed@VirtualCommandOrigin@@UEBA_NXZ
     */
    virtual bool isSelectorExpansionAllowed() const;
    /**
     * @hash   927655044
     * @vftbl  19
     * @symbol ?getSourceId@VirtualCommandOrigin@@UEBAAEBVNetworkIdentifier@@XZ
     */
    virtual class NetworkIdentifier const & getSourceId() const;
    /**
     * @hash   1117481860
     * @vftbl  21
     * @symbol ?getOutputReceiver@VirtualCommandOrigin@@UEBAAEBVCommandOrigin@@XZ
     */
    virtual class CommandOrigin const & getOutputReceiver() const;
    /**
     * @hash   -1886322967
     * @vftbl  22
     * @symbol ?getIdentity@VirtualCommandOrigin@@UEBA?AUCommandOriginIdentity@@XZ
     */
    virtual struct CommandOriginIdentity getIdentity() const;
    /**
     * @hash   464264027
     * @vftbl  23
     * @symbol ?getOriginType@VirtualCommandOrigin@@UEBA?AW4CommandOriginType@@XZ
     */
    virtual enum CommandOriginType getOriginType() const;
    /**
     * @hash   -2103150692
     * @vftbl  27
     * @symbol ?updateValues@VirtualCommandOrigin@@UEAAXXZ
     */
    virtual void updateValues();
    /**
     * @hash   -1828038759
     * @vftbl  28
     * @symbol ?getExecutePosition@VirtualCommandOrigin@@UEBA?BVVec3@@HAEBVCommandPositionFloat@@@Z
     */
    virtual class Vec3 const getExecutePosition(int, class CommandPositionFloat const &) const;
    /**
     * @hash   639002738
     * @vftbl  29
     * @symbol ?serialize@VirtualCommandOrigin@@UEBA?AVCompoundTag@@XZ
     */
    virtual class CompoundTag serialize() const;
    /**
     * @hash   -2043709452
     * @vftbl  30
     * @symbol ?isValid@VirtualCommandOrigin@@UEBA_NXZ
     */
    virtual bool isValid() const;
    /**
     * @hash   22883650
     * @symbol ??0VirtualCommandOrigin@@QEAA@V?$unique_ptr@VCommandOrigin@@U?$default_delete@VCommandOrigin@@@std@@@std@@0AEBVCommandPositionFloat@@H@Z
     */
    MCAPI VirtualCommandOrigin(std::unique_ptr<class CommandOrigin>, std::unique_ptr<class CommandOrigin>, class CommandPositionFloat const &, int);
    /**
     * @hash   1457285022
     * @symbol ??0VirtualCommandOrigin@@QEAA@AEBVCommandOrigin@@AEAVActor@@AEBVCommandPositionFloat@@H@Z
     */
    MCAPI VirtualCommandOrigin(class CommandOrigin const &, class Actor &, class CommandPositionFloat const &, int);
    /**
     * @hash   650514131
     * @symbol ??0VirtualCommandOrigin@@QEAA@AEBVCommandOrigin@@0AEBVCommandPositionFloat@@H@Z
     */
    MCAPI VirtualCommandOrigin(class CommandOrigin const &, class CommandOrigin const &, class CommandPositionFloat const &, int);
    /**
     * @hash   1013151999
     * @symbol ?getOrigin@VirtualCommandOrigin@@QEBAPEAVCommandOrigin@@XZ
     */
    MCAPI class CommandOrigin * getOrigin() const;
    /**
     * @hash   -129292384
     * @symbol ?load@VirtualCommandOrigin@@SA?AV?$unique_ptr@VVirtualCommandOrigin@@U?$default_delete@VVirtualCommandOrigin@@@std@@@std@@AEBVCompoundTag@@AEAVServerLevel@@@Z
     */
    MCAPI static std::unique_ptr<class VirtualCommandOrigin> load(class CompoundTag const &, class ServerLevel &);

};