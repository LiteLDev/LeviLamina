/**
 * @file  AutomationPlayerCommandOrigin.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "../../Json.hpp"
#include "../../PlayerCommandOrigin.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class AutomationPlayerCommandOrigin.
 *
 */
class AutomationPlayerCommandOrigin : public PlayerCommandOrigin {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AUTOMATIONPLAYERCOMMANDORIGIN
public:
    class AutomationPlayerCommandOrigin& operator=(class AutomationPlayerCommandOrigin const &) = delete;
    AutomationPlayerCommandOrigin(class AutomationPlayerCommandOrigin const &) = delete;
    AutomationPlayerCommandOrigin() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~AutomationPlayerCommandOrigin();
    /**
     * @hash   166323299
     * @vftbl  1
     * @symbol  ?getRequestId\@AutomationPlayerCommandOrigin\@\@UEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string const & getRequestId() const;
    /**
     * @hash   -1676095150
     * @vftbl  2
     * @symbol  ?getName\@AutomationPlayerCommandOrigin\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   -717857693
     * @vftbl  9
     * @symbol  ?getPermissionsLevel\@AutomationPlayerCommandOrigin\@\@UEBA?AW4CommandPermissionLevel\@\@XZ
     */
    virtual enum class CommandPermissionLevel getPermissionsLevel() const;
    /**
     * @hash   -245641591
     * @vftbl  10
     * @symbol  ?clone\@AutomationPlayerCommandOrigin\@\@UEBA?AV?$unique_ptr\@VCommandOrigin\@\@U?$default_delete\@VCommandOrigin\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class CommandOrigin> clone() const;
    /**
     * @hash   -1765852000
     * @vftbl  13
     * @symbol  ?hasChatPerms\@AutomationPlayerCommandOrigin\@\@UEBA_NXZ
     */
    virtual bool hasChatPerms() const;
    /**
     * @hash   -2101909177
     * @vftbl  14
     * @symbol  ?hasTellPerms\@AutomationPlayerCommandOrigin\@\@UEBA_NXZ
     */
    virtual bool hasTellPerms() const;
    /**
     * @hash   1055323857
     * @vftbl  19
     * @symbol  ?getSourceId\@AutomationPlayerCommandOrigin\@\@UEBAAEBVNetworkIdentifier\@\@XZ
     */
    virtual class NetworkIdentifier const & getSourceId() const;
    /**
     * @hash   -684047560
     * @vftbl  23
     * @symbol  ?getOriginType\@AutomationPlayerCommandOrigin\@\@UEBA?AW4CommandOriginType\@\@XZ
     */
    virtual enum class CommandOriginType getOriginType() const;
    /**
     * @hash   -1212643690
     * @vftbl  24
     * @symbol  ?toCommandOriginData\@AutomationPlayerCommandOrigin\@\@UEBA?AUCommandOriginData\@\@XZ
     */
    virtual struct CommandOriginData toCommandOriginData() const;
    /**
     * @hash   272312831
     * @vftbl  29
     * @symbol  ?serialize\@AutomationPlayerCommandOrigin\@\@UEBA?AVCompoundTag\@\@XZ
     */
    virtual class CompoundTag serialize() const;
    /**
     * @hash   740419137
     * @vftbl  30
     * @symbol  ?isValid\@AutomationPlayerCommandOrigin\@\@UEBA_NXZ
     */
    virtual bool isValid() const;
    /**
     * @hash   -1956413664
     * @symbol  ??0AutomationPlayerCommandOrigin\@\@QEAA\@UActorUniqueID\@\@AEAVLevel\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4CommandPermissionLevel\@\@AEBVNetworkIdentifier\@\@\@Z
     */
    MCAPI AutomationPlayerCommandOrigin(struct ActorUniqueID, class Level &, std::string const &, enum class CommandPermissionLevel, class NetworkIdentifier const &);
    /**
     * @hash   1799652537
     * @symbol  ??0AutomationPlayerCommandOrigin\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAVPlayer\@\@\@Z
     */
    MCAPI AutomationPlayerCommandOrigin(std::string const &, class Player &);

};