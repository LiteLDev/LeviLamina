/**
 * @file  GameDirectorEntityServerCommandOrigin.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
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
     * @symbol __unk_destructor_0
     */
    virtual ~GameDirectorEntityServerCommandOrigin();
    /**
     * @hash   -503377169
     * @vftbl  9
     * @symbol ?getPermissionsLevel@GameDirectorEntityServerCommandOrigin@@UEBA?AW4CommandPermissionLevel@@XZ
     */
    virtual enum CommandPermissionLevel getPermissionsLevel() const;
    /**
     * @hash   -829656459
     * @vftbl  10
     * @symbol ?clone@GameDirectorEntityServerCommandOrigin@@UEBA?AV?$unique_ptr@VCommandOrigin@@U?$default_delete@VCommandOrigin@@@std@@@std@@XZ
     */
    virtual std::unique_ptr<class CommandOrigin> clone() const;
    /**
     * @hash   70988771
     * @vftbl  17
     * @symbol ?canUseCommandsWithoutCheatsEnabled@GameDirectorEntityServerCommandOrigin@@UEBA_NXZ
     */
    virtual bool canUseCommandsWithoutCheatsEnabled() const;
    /**
     * @hash   944376893
     * @vftbl  18
     * @symbol ?isSelectorExpansionAllowed@GameDirectorEntityServerCommandOrigin@@UEBA_NXZ
     */
    virtual bool isSelectorExpansionAllowed() const;
    /**
     * @hash   -919692956
     * @vftbl  23
     * @symbol ?getOriginType@GameDirectorEntityServerCommandOrigin@@UEBA?AW4CommandOriginType@@XZ
     */
    virtual enum CommandOriginType getOriginType() const;
    /**
     * @hash   -1994923453
     * @symbol ??0GameDirectorEntityServerCommandOrigin@@QEAA@UActorUniqueID@@AEAVLevel@@@Z
     */
    MCAPI GameDirectorEntityServerCommandOrigin(struct ActorUniqueID, class Level &);
    /**
     * @hash   -799529738
     * @symbol ??0GameDirectorEntityServerCommandOrigin@@QEAA@AEAVActor@@@Z
     */
    MCAPI GameDirectorEntityServerCommandOrigin(class Actor &);
    /**
     * @hash   1738173118
     * @symbol ?load@GameDirectorEntityServerCommandOrigin@@SA?AV?$unique_ptr@VGameDirectorEntityServerCommandOrigin@@U?$default_delete@VGameDirectorEntityServerCommandOrigin@@@std@@@std@@AEBVCompoundTag@@AEAVLevel@@@Z
     */
    MCAPI static std::unique_ptr<class GameDirectorEntityServerCommandOrigin> load(class CompoundTag const &, class Level &);

};