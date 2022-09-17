/**
 * @file  VirtualCommandOrigin.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
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
     * @hash   1277443664
     */
    virtual ~VirtualCommandOrigin();
    /**
     * @vftbl  1
     * @symbol ?getRequestId@VirtualCommandOrigin@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   732757798
     */
    virtual std::string const & getRequestId() const;
    /**
     * @vftbl  2
     * @symbol ?getName@VirtualCommandOrigin@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -833996891
     */
    virtual std::string getName() const;
    /**
     * @vftbl  3
     * @symbol ?getBlockPosition@VirtualCommandOrigin@@UEBA?AVBlockPos@@XZ
     * @hash   1795009794
     */
    virtual class BlockPos getBlockPosition() const;
    /**
     * @vftbl  4
     * @symbol ?getWorldPosition@VirtualCommandOrigin@@UEBA?AVVec3@@XZ
     * @hash   2099859439
     */
    virtual class Vec3 getWorldPosition() const;
    /**
     * @vftbl  5
     * @symbol ?getRotation@VirtualCommandOrigin@@UEBA?AV?$optional@VVec2@@@std@@XZ
     * @hash   89867854
     */
    virtual class std::optional<class Vec2> getRotation() const;
    /**
     * @vftbl  6
     * @symbol ?getLevel@VirtualCommandOrigin@@UEBAPEAVLevel@@XZ
     * @hash   -466289992
     */
    virtual class Level * getLevel() const;
    /**
     * @vftbl  7
     * @symbol ?getDimension@VirtualCommandOrigin@@UEBAPEAVDimension@@XZ
     * @hash   495818040
     */
    virtual class Dimension * getDimension() const;
    /**
     * @vftbl  8
     * @symbol ?getEntity@VirtualCommandOrigin@@UEBAPEAVActor@@XZ
     * @hash   1575363410
     */
    virtual class Actor * getEntity() const;
    /**
     * @vftbl  9
     * @symbol ?getPermissionsLevel@VirtualCommandOrigin@@UEBA?AW4CommandPermissionLevel@@XZ
     * @hash   -656918794
     */
    virtual enum class CommandPermissionLevel getPermissionsLevel() const;
    /**
     * @vftbl  10
     * @symbol ?clone@VirtualCommandOrigin@@UEBA?AV?$unique_ptr@VCommandOrigin@@U?$default_delete@VCommandOrigin@@@std@@@std@@XZ
     * @hash   688507500
     */
    virtual std::unique_ptr<class CommandOrigin> clone() const;
    /**
     * @vftbl  13
     * @symbol ?hasChatPerms@VirtualCommandOrigin@@UEBA_NXZ
     * @hash   -1344951837
     */
    virtual bool hasChatPerms() const;
    /**
     * @vftbl  14
     * @symbol ?hasTellPerms@VirtualCommandOrigin@@UEBA_NXZ
     * @hash   470115674
     */
    virtual bool hasTellPerms() const;
    /**
     * @vftbl  15
     * @symbol ?canUseAbility@VirtualCommandOrigin@@UEBA_NW4AbilitiesIndex@@@Z
     * @hash   1278279427
     */
    virtual bool canUseAbility(enum AbilitiesIndex) const;
    /**
     * @vftbl  17
     * @symbol ?canUseCommandsWithoutCheatsEnabled@VirtualCommandOrigin@@UEBA_NXZ
     * @hash   -1114661894
     */
    virtual bool canUseCommandsWithoutCheatsEnabled() const;
    /**
     * @vftbl  18
     * @symbol ?isSelectorExpansionAllowed@VirtualCommandOrigin@@UEBA_NXZ
     * @hash   1999682164
     */
    virtual bool isSelectorExpansionAllowed() const;
    /**
     * @vftbl  19
     * @symbol ?getSourceId@VirtualCommandOrigin@@UEBAAEBVNetworkIdentifier@@XZ
     * @hash   927655044
     */
    virtual class NetworkIdentifier const & getSourceId() const;
    /**
     * @vftbl  21
     * @symbol ?getOutputReceiver@VirtualCommandOrigin@@UEBAAEBVCommandOrigin@@XZ
     * @hash   1117481860
     */
    virtual class CommandOrigin const & getOutputReceiver() const;
    /**
     * @vftbl  22
     * @symbol ?getIdentity@VirtualCommandOrigin@@UEBA?AUCommandOriginIdentity@@XZ
     * @hash   -1886322967
     */
    virtual struct CommandOriginIdentity getIdentity() const;
    /**
     * @vftbl  23
     * @symbol ?getOriginType@VirtualCommandOrigin@@UEBA?AW4CommandOriginType@@XZ
     * @hash   464264027
     */
    virtual enum CommandOriginType getOriginType() const;
    /**
     * @vftbl  27
     * @symbol ?updateValues@VirtualCommandOrigin@@UEAAXXZ
     * @hash   -2103150692
     */
    virtual void updateValues();
    /**
     * @vftbl  28
     * @symbol ?getExecutePosition@VirtualCommandOrigin@@UEBA?BVVec3@@HAEBVCommandPositionFloat@@@Z
     * @hash   -1828038759
     */
    virtual class Vec3 const getExecutePosition(int, class CommandPositionFloat const &) const;
    /**
     * @vftbl  29
     * @symbol ?serialize@VirtualCommandOrigin@@UEBA?AVCompoundTag@@XZ
     * @hash   639002738
     */
    virtual class CompoundTag serialize() const;
    /**
     * @vftbl  30
     * @symbol ?isValid@VirtualCommandOrigin@@UEBA_NXZ
     * @hash   -2043709452
     */
    virtual bool isValid() const;
    /**
     * @symbol ??0VirtualCommandOrigin@@QEAA@V?$unique_ptr@VCommandOrigin@@U?$default_delete@VCommandOrigin@@@std@@@std@@0AEBVCommandPositionFloat@@H@Z
     * @hash   22883650
     */
    MCAPI VirtualCommandOrigin(std::unique_ptr<class CommandOrigin>, std::unique_ptr<class CommandOrigin>, class CommandPositionFloat const &, int);
    /**
     * @symbol ??0VirtualCommandOrigin@@QEAA@AEBVCommandOrigin@@AEAVActor@@AEBVCommandPositionFloat@@H@Z
     * @hash   1457285022
     */
    MCAPI VirtualCommandOrigin(class CommandOrigin const &, class Actor &, class CommandPositionFloat const &, int);
    /**
     * @symbol ??0VirtualCommandOrigin@@QEAA@AEBVCommandOrigin@@0AEBVCommandPositionFloat@@H@Z
     * @hash   650514131
     */
    MCAPI VirtualCommandOrigin(class CommandOrigin const &, class CommandOrigin const &, class CommandPositionFloat const &, int);
    /**
     * @symbol ?getOrigin@VirtualCommandOrigin@@QEBAPEAVCommandOrigin@@XZ
     * @hash   1013151999
     */
    MCAPI class CommandOrigin * getOrigin() const;
    /**
     * @symbol ?load@VirtualCommandOrigin@@SA?AV?$unique_ptr@VVirtualCommandOrigin@@U?$default_delete@VVirtualCommandOrigin@@@std@@@std@@AEBVCompoundTag@@AEAVServerLevel@@@Z
     * @hash   -129292384
     */
    MCAPI static std::unique_ptr<class VirtualCommandOrigin> load(class CompoundTag const &, class ServerLevel &);

};