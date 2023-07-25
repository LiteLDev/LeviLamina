#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/ActorCommandOrigin.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace mce { class UUID; }
// clang-format on

class ActorServerCommandOrigin : public ::ActorCommandOrigin {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORSERVERCOMMANDORIGIN
public:
    ActorServerCommandOrigin& operator=(ActorServerCommandOrigin const&) = delete;
    ActorServerCommandOrigin(ActorServerCommandOrigin const&)            = delete;
    ActorServerCommandOrigin()                                           = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 9
     * @symbol ?getPermissionsLevel\@ActorServerCommandOrigin\@\@UEBA?AW4CommandPermissionLevel\@\@XZ
     */
    virtual enum class CommandPermissionLevel getPermissionsLevel() const;
    /**
     * @vftbl 10
     * @symbol
     * ?clone\@ActorServerCommandOrigin\@\@UEBA?AV?$unique_ptr\@VCommandOrigin\@\@U?$default_delete\@VCommandOrigin\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class CommandOrigin> clone() const;
    /**
     * @vftbl 18
     * @symbol ?isSelectorExpansionAllowed\@ActorServerCommandOrigin\@\@UEBA_NXZ
     */
    virtual bool isSelectorExpansionAllowed() const;
    /**
     * @vftbl 23
     * @symbol ?getOriginType\@ActorServerCommandOrigin\@\@UEBA?AW4CommandOriginType\@\@XZ
     */
    virtual enum class CommandOriginType getOriginType() const;
    /**
     * @vftbl 29
     * @symbol ?serialize\@ActorServerCommandOrigin\@\@UEBA?AVCompoundTag\@\@XZ
     */
    virtual class CompoundTag serialize() const;
    /**
     * @symbol ?getTargetOther\@ActorServerCommandOrigin\@\@QEBA?AUActorUniqueID\@\@XZ
     */
    MCAPI struct ActorUniqueID getTargetOther() const;
    /**
     * @symbol ?setTargetOther\@ActorServerCommandOrigin\@\@QEAAXUActorUniqueID\@\@\@Z
     */
    MCAPI void setTargetOther(struct ActorUniqueID);
};
