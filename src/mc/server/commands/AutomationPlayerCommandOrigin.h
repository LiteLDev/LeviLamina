#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/PlayerCommandOrigin.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace mce { class UUID; }
// clang-format on

class AutomationPlayerCommandOrigin : public ::PlayerCommandOrigin {

public:
    // prevent constructor by default
    AutomationPlayerCommandOrigin& operator=(AutomationPlayerCommandOrigin const&) = delete;
    AutomationPlayerCommandOrigin(AutomationPlayerCommandOrigin const&)            = delete;
    AutomationPlayerCommandOrigin()                                                = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol
     * ?getRequestId\@AutomationPlayerCommandOrigin\@\@UEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string const& getRequestId() const;
    /**
     * @vftbl 2
     * @symbol
     * ?getName\@AutomationPlayerCommandOrigin\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 10
     * @symbol
     * ?clone\@AutomationPlayerCommandOrigin\@\@UEBA?AV?$unique_ptr\@VCommandOrigin\@\@U?$default_delete\@VCommandOrigin\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class CommandOrigin> clone() const;
    /**
     * @vftbl 19
     * @symbol ?getSourceId\@AutomationPlayerCommandOrigin\@\@UEBAAEBVNetworkIdentifier\@\@XZ
     */
    virtual class NetworkIdentifier const& getSourceId() const;
    /**
     * @vftbl 23
     * @symbol ?getOriginType\@AutomationPlayerCommandOrigin\@\@UEBA?AW4CommandOriginType\@\@XZ
     */
    virtual enum class CommandOriginType getOriginType() const;
    /**
     * @vftbl 24
     * @symbol ?toCommandOriginData\@AutomationPlayerCommandOrigin\@\@UEBA?AUCommandOriginData\@\@XZ
     */
    virtual struct CommandOriginData toCommandOriginData() const;
    /**
     * @vftbl 29
     * @symbol ?serialize\@AutomationPlayerCommandOrigin\@\@UEBA?AVCompoundTag\@\@XZ
     */
    virtual class CompoundTag serialize() const;
    /**
     * @vftbl 30
     * @symbol ?isValid\@AutomationPlayerCommandOrigin\@\@UEBA_NXZ
     */
    virtual bool isValid() const;
    /**
     * @symbol
     * ??0AutomationPlayerCommandOrigin\@\@QEAA\@UActorUniqueID\@\@AEAVLevel\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVNetworkIdentifier\@\@\@Z
     */
    MCAPI
    AutomationPlayerCommandOrigin(struct ActorUniqueID, class Level&, std::string const&, class NetworkIdentifier const&);
    /**
     * @symbol
     * ??0AutomationPlayerCommandOrigin\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAVPlayer\@\@\@Z
     */
    MCAPI AutomationPlayerCommandOrigin(std::string const&, class Player&);
    // NOLINTEND
};
