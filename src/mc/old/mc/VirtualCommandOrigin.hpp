/**
 * @file  VirtualCommandOrigin.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
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
     * @symbol  __unk_destructor_0
     */
    virtual ~VirtualCommandOrigin();
    /**
     * @vftbl  1
     * @symbol  ?getRequestId\@VirtualCommandOrigin\@\@UEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string const & getRequestId() const;
    /**
     * @vftbl  2
     * @symbol  ?getName\@VirtualCommandOrigin\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl  3
     * @symbol  ?getBlockPosition\@VirtualCommandOrigin\@\@UEBA?AVBlockPos\@\@XZ
     */
    virtual class BlockPos getBlockPosition() const;
    /**
     * @vftbl  4
     * @symbol  ?getWorldPosition\@VirtualCommandOrigin\@\@UEBA?AVVec3\@\@XZ
     */
    virtual class Vec3 getWorldPosition() const;
    /**
     * @vftbl  5
     * @symbol  ?getRotation\@VirtualCommandOrigin\@\@UEBA?AV?$optional\@VVec2\@\@\@std\@\@XZ
     */
    virtual class std::optional<class Vec2> getRotation() const;
    /**
     * @vftbl  6
     * @symbol  ?getLevel\@VirtualCommandOrigin\@\@UEBAPEAVLevel\@\@XZ
     */
    virtual class Level * getLevel() const;
    /**
     * @vftbl  7
     * @symbol  ?getDimension\@VirtualCommandOrigin\@\@UEBAPEAVDimension\@\@XZ
     */
    virtual class Dimension * getDimension() const;
    /**
     * @vftbl  8
     * @symbol  ?getEntity\@VirtualCommandOrigin\@\@UEBAPEAVActor\@\@XZ
     */
    virtual class Actor * getEntity() const;
    /**
     * @vftbl  9
     * @symbol  ?getPermissionsLevel\@VirtualCommandOrigin\@\@UEBA?AW4CommandPermissionLevel\@\@XZ
     */
    virtual enum class CommandPermissionLevel getPermissionsLevel() const;
    /**
     * @vftbl  10
     * @symbol  ?clone\@VirtualCommandOrigin\@\@UEBA?AV?$unique_ptr\@VCommandOrigin\@\@U?$default_delete\@VCommandOrigin\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class CommandOrigin> clone() const;
    /**
     * @vftbl  13
     * @symbol  ?hasChatPerms\@VirtualCommandOrigin\@\@UEBA_NXZ
     */
    virtual bool hasChatPerms() const;
    /**
     * @vftbl  14
     * @symbol  ?hasTellPerms\@VirtualCommandOrigin\@\@UEBA_NXZ
     */
    virtual bool hasTellPerms() const;
    /**
     * @vftbl  15
     * @symbol  ?canUseAbility\@VirtualCommandOrigin\@\@UEBA_NW4AbilitiesIndex\@\@\@Z
     */
    virtual bool canUseAbility(enum class AbilitiesIndex) const;
    /**
     * @vftbl  17
     * @symbol  ?canUseCommandsWithoutCheatsEnabled\@VirtualCommandOrigin\@\@UEBA_NXZ
     */
    virtual bool canUseCommandsWithoutCheatsEnabled() const;
    /**
     * @vftbl  18
     * @symbol  ?isSelectorExpansionAllowed\@VirtualCommandOrigin\@\@UEBA_NXZ
     */
    virtual bool isSelectorExpansionAllowed() const;
    /**
     * @vftbl  19
     * @symbol  ?getSourceId\@VirtualCommandOrigin\@\@UEBAAEBVNetworkIdentifier\@\@XZ
     */
    virtual class NetworkIdentifier const & getSourceId() const;
    /**
     * @vftbl  21
     * @symbol  ?getOutputReceiver\@VirtualCommandOrigin\@\@UEBAAEBVCommandOrigin\@\@XZ
     */
    virtual class CommandOrigin const & getOutputReceiver() const;
    /**
     * @vftbl  22
     * @symbol  ?getIdentity\@VirtualCommandOrigin\@\@UEBA?AUCommandOriginIdentity\@\@XZ
     */
    virtual struct CommandOriginIdentity getIdentity() const;
    /**
     * @vftbl  23
     * @symbol  ?getOriginType\@VirtualCommandOrigin\@\@UEBA?AW4CommandOriginType\@\@XZ
     */
    virtual enum class CommandOriginType getOriginType() const;
    /**
     * @vftbl  27
     * @symbol  ?updateValues\@VirtualCommandOrigin\@\@UEAAXXZ
     */
    virtual void updateValues();
    /**
     * @vftbl  28
     * @symbol  ?getExecutePosition\@VirtualCommandOrigin\@\@UEBA?BVVec3\@\@HAEBVCommandPositionFloat\@\@\@Z
     */
    virtual class Vec3 const getExecutePosition(int, class CommandPositionFloat const &) const;
    /**
     * @vftbl  29
     * @symbol  ?serialize\@VirtualCommandOrigin\@\@UEBA?AVCompoundTag\@\@XZ
     */
    virtual class CompoundTag serialize() const;
    /**
     * @vftbl  30
     * @symbol  ?isValid\@VirtualCommandOrigin\@\@UEBA_NXZ
     */
    virtual bool isValid() const;
    /**
     * @symbol  ??0VirtualCommandOrigin\@\@QEAA\@V?$unique_ptr\@VCommandOrigin\@\@U?$default_delete\@VCommandOrigin\@\@\@std\@\@\@std\@\@0AEBVCommandPositionFloat\@\@H\@Z
     */
    MCAPI VirtualCommandOrigin(std::unique_ptr<class CommandOrigin>, std::unique_ptr<class CommandOrigin>, class CommandPositionFloat const &, int);
    /**
     * @symbol  ??0VirtualCommandOrigin\@\@QEAA\@AEBVCommandOrigin\@\@AEAVActor\@\@AEBVCommandPositionFloat\@\@H\@Z
     */
    MCAPI VirtualCommandOrigin(class CommandOrigin const &, class Actor &, class CommandPositionFloat const &, int);
    /**
     * @symbol  ??0VirtualCommandOrigin\@\@QEAA\@AEBVCommandOrigin\@\@0AEBVCommandPositionFloat\@\@H\@Z
     */
    MCAPI VirtualCommandOrigin(class CommandOrigin const &, class CommandOrigin const &, class CommandPositionFloat const &, int);
    /**
     * @symbol  ?getOrigin\@VirtualCommandOrigin\@\@QEBAPEAVCommandOrigin\@\@XZ
     */
    MCAPI class CommandOrigin * getOrigin() const;
    /**
     * @symbol  ?load\@VirtualCommandOrigin\@\@SA?AV?$unique_ptr\@VVirtualCommandOrigin\@\@U?$default_delete\@VVirtualCommandOrigin\@\@\@std\@\@\@std\@\@AEBVCompoundTag\@\@AEAVServerLevel\@\@\@Z
     */
    MCAPI static std::unique_ptr<class VirtualCommandOrigin> load(class CompoundTag const &, class ServerLevel &);

};