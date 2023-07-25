#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/ActorServerCommandOrigin.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace mce { class UUID; }
// clang-format on

class GameDirectorEntityServerCommandOrigin : public ::ActorServerCommandOrigin {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GAMEDIRECTORENTITYSERVERCOMMANDORIGIN
public:
    GameDirectorEntityServerCommandOrigin& operator=(GameDirectorEntityServerCommandOrigin const&) = delete;
    GameDirectorEntityServerCommandOrigin(GameDirectorEntityServerCommandOrigin const&)            = delete;
    GameDirectorEntityServerCommandOrigin()                                                        = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 9
     * @symbol ?getPermissionsLevel\@GameDirectorEntityServerCommandOrigin\@\@UEBA?AW4CommandPermissionLevel\@\@XZ
     */
    virtual enum class CommandPermissionLevel getPermissionsLevel() const;
    /**
     * @vftbl 10
     * @symbol
     * ?clone\@GameDirectorEntityServerCommandOrigin\@\@UEBA?AV?$unique_ptr\@VCommandOrigin\@\@U?$default_delete\@VCommandOrigin\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class CommandOrigin> clone() const;
    /**
     * @vftbl 17
     * @symbol ?canUseCommandsWithoutCheatsEnabled\@GameDirectorEntityServerCommandOrigin\@\@UEBA_NXZ
     */
    virtual bool canUseCommandsWithoutCheatsEnabled() const;
    /**
     * @vftbl 18
     * @symbol ?isSelectorExpansionAllowed\@GameDirectorEntityServerCommandOrigin\@\@UEBA_NXZ
     */
    virtual bool isSelectorExpansionAllowed() const;
    /**
     * @vftbl 23
     * @symbol ?getOriginType\@GameDirectorEntityServerCommandOrigin\@\@UEBA?AW4CommandOriginType\@\@XZ
     */
    virtual enum class CommandOriginType getOriginType() const;
    /**
     * @symbol ??0GameDirectorEntityServerCommandOrigin\@\@QEAA\@AEAVActor\@\@\@Z
     */
    MCAPI GameDirectorEntityServerCommandOrigin(class Actor&);
};
