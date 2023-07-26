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

public:
    // prevent constructor by default
    ActorServerCommandOrigin& operator=(ActorServerCommandOrigin const&) = delete;
    ActorServerCommandOrigin(ActorServerCommandOrigin const&)            = delete;
    ActorServerCommandOrigin()                                           = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 9
     * @symbol ?getPermissionsLevel\@ActorServerCommandOrigin\@\@UEBA?AW4CommandPermissionLevel\@\@XZ
     */
    virtual enum class CommandPermissionLevel getPermissionsLevel() const; // NOLINT
    /**
     * @vftbl 10
     * @symbol
     * ?clone\@ActorServerCommandOrigin\@\@UEBA?AV?$unique_ptr\@VCommandOrigin\@\@U?$default_delete\@VCommandOrigin\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class CommandOrigin> clone() const; // NOLINT
    /**
     * @vftbl 18
     * @symbol ?isSelectorExpansionAllowed\@ActorServerCommandOrigin\@\@UEBA_NXZ
     */
    virtual bool isSelectorExpansionAllowed() const; // NOLINT
    /**
     * @vftbl 23
     * @symbol ?getOriginType\@ActorServerCommandOrigin\@\@UEBA?AW4CommandOriginType\@\@XZ
     */
    virtual enum class CommandOriginType getOriginType() const; // NOLINT
    /**
     * @vftbl 29
     * @symbol ?serialize\@ActorServerCommandOrigin\@\@UEBA?AVCompoundTag\@\@XZ
     */
    virtual class CompoundTag serialize() const; // NOLINT
    /**
     * @symbol ?getTargetOther\@ActorServerCommandOrigin\@\@QEBA?AUActorUniqueID\@\@XZ
     */
    MCAPI struct ActorUniqueID getTargetOther() const; // NOLINT
    /**
     * @symbol ?setTargetOther\@ActorServerCommandOrigin\@\@QEAAXUActorUniqueID\@\@\@Z
     */
    MCAPI void setTargetOther(struct ActorUniqueID); // NOLINT
};
