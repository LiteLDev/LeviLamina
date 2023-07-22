/**
 * @file  GameDirectorEntityServerCommandOrigin.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "Json.hpp"
#include "ActorServerCommandOrigin.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class GameDirectorEntityServerCommandOrigin.
 *
 */
class GameDirectorEntityServerCommandOrigin : public ActorServerCommandOrigin {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GAMEDIRECTORENTITYSERVERCOMMANDORIGIN
public:
    class GameDirectorEntityServerCommandOrigin& operator=(class GameDirectorEntityServerCommandOrigin const &) = delete;
    GameDirectorEntityServerCommandOrigin(class GameDirectorEntityServerCommandOrigin const &) = delete;
    GameDirectorEntityServerCommandOrigin() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~GameDirectorEntityServerCommandOrigin();
    /**
     * @vftbl  9
     * @symbol  ?getPermissionsLevel\@GameDirectorEntityServerCommandOrigin\@\@UEBA?AW4CommandPermissionLevel\@\@XZ
     */
    virtual enum class CommandPermissionLevel getPermissionsLevel() const;
    /**
     * @vftbl  10
     * @symbol  ?clone\@GameDirectorEntityServerCommandOrigin\@\@UEBA?AV?$unique_ptr\@VCommandOrigin\@\@U?$default_delete\@VCommandOrigin\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class CommandOrigin> clone() const;
    /**
     * @vftbl  17
     * @symbol  ?canUseCommandsWithoutCheatsEnabled\@GameDirectorEntityServerCommandOrigin\@\@UEBA_NXZ
     */
    virtual bool canUseCommandsWithoutCheatsEnabled() const;
    /**
     * @vftbl  18
     * @symbol  ?isSelectorExpansionAllowed\@GameDirectorEntityServerCommandOrigin\@\@UEBA_NXZ
     */
    virtual bool isSelectorExpansionAllowed() const;
    /**
     * @vftbl  23
     * @symbol  ?getOriginType\@GameDirectorEntityServerCommandOrigin\@\@UEBA?AW4CommandOriginType\@\@XZ
     */
    virtual enum class CommandOriginType getOriginType() const;
    /**
     * @symbol  ??0GameDirectorEntityServerCommandOrigin\@\@QEAA\@AEAVActor\@\@\@Z
     */
    MCAPI GameDirectorEntityServerCommandOrigin(class Actor &);
    /**
     * @symbol  ?load\@GameDirectorEntityServerCommandOrigin\@\@SA?AV?$unique_ptr\@VGameDirectorEntityServerCommandOrigin\@\@U?$default_delete\@VGameDirectorEntityServerCommandOrigin\@\@\@std\@\@\@std\@\@AEBVCompoundTag\@\@AEAVLevel\@\@\@Z
     */
    MCAPI static std::unique_ptr<class GameDirectorEntityServerCommandOrigin> load(class CompoundTag const &, class Level &);

};