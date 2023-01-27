/**
 * @file  GameDirectorEntityServerCommandOrigin.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "../../Json.hpp"
#include "../../ActorServerCommandOrigin.hpp"

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
     * @hash   -403479297
     * @vftbl  9
     * @symbol  ?getPermissionsLevel\@GameDirectorEntityServerCommandOrigin\@\@UEBA?AW4CommandPermissionLevel\@\@XZ
     */
    virtual enum class CommandPermissionLevel getPermissionsLevel() const;
    /**
     * @hash   -1565459563
     * @vftbl  10
     * @symbol  ?clone\@GameDirectorEntityServerCommandOrigin\@\@UEBA?AV?$unique_ptr\@VCommandOrigin\@\@U?$default_delete\@VCommandOrigin\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class CommandOrigin> clone() const;
    /**
     * @hash   170886643
     * @vftbl  17
     * @symbol  ?canUseCommandsWithoutCheatsEnabled\@GameDirectorEntityServerCommandOrigin\@\@UEBA_NXZ
     */
    virtual bool canUseCommandsWithoutCheatsEnabled() const;
    /**
     * @hash   1044274765
     * @vftbl  18
     * @symbol  ?isSelectorExpansionAllowed\@GameDirectorEntityServerCommandOrigin\@\@UEBA_NXZ
     */
    virtual bool isSelectorExpansionAllowed() const;
    /**
     * @hash   -1654142972
     * @vftbl  23
     * @symbol  ?getOriginType\@GameDirectorEntityServerCommandOrigin\@\@UEBA?AW4CommandOriginType\@\@XZ
     */
    virtual enum class CommandOriginType getOriginType() const;
    /**
     * @hash   -1535517354
     * @symbol  ??0GameDirectorEntityServerCommandOrigin\@\@QEAA\@AEAVActor\@\@\@Z
     */
    MCAPI GameDirectorEntityServerCommandOrigin(class Actor &);
    /**
     * @hash   1004245886
     * @symbol  ?load\@GameDirectorEntityServerCommandOrigin\@\@SA?AV?$unique_ptr\@VGameDirectorEntityServerCommandOrigin\@\@U?$default_delete\@VGameDirectorEntityServerCommandOrigin\@\@\@std\@\@\@std\@\@AEBVCompoundTag\@\@AEAVLevel\@\@\@Z
     */
    MCAPI static std::unique_ptr<class GameDirectorEntityServerCommandOrigin> load(class CompoundTag const &, class Level &);

};