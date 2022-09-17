/**
 * @file  GameDirectorEntityServerCommandOrigin.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
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
     * @hash   -1989497029
     */
    virtual ~GameDirectorEntityServerCommandOrigin();
    /**
     * @vftbl  9
     * @symbol ?getPermissionsLevel@GameDirectorEntityServerCommandOrigin@@UEBA?AW4CommandPermissionLevel@@XZ
     * @hash   -503377169
     */
    virtual enum class CommandPermissionLevel getPermissionsLevel() const;
    /**
     * @vftbl  10
     * @symbol ?clone@GameDirectorEntityServerCommandOrigin@@UEBA?AV?$unique_ptr@VCommandOrigin@@U?$default_delete@VCommandOrigin@@@std@@@std@@XZ
     * @hash   -829656459
     */
    virtual std::unique_ptr<class CommandOrigin> clone() const;
    /**
     * @vftbl  17
     * @symbol ?canUseCommandsWithoutCheatsEnabled@GameDirectorEntityServerCommandOrigin@@UEBA_NXZ
     * @hash   70988771
     */
    virtual bool canUseCommandsWithoutCheatsEnabled() const;
    /**
     * @vftbl  18
     * @symbol ?isSelectorExpansionAllowed@GameDirectorEntityServerCommandOrigin@@UEBA_NXZ
     * @hash   944376893
     */
    virtual bool isSelectorExpansionAllowed() const;
    /**
     * @vftbl  23
     * @symbol ?getOriginType@GameDirectorEntityServerCommandOrigin@@UEBA?AW4CommandOriginType@@XZ
     * @hash   -919692956
     */
    virtual enum CommandOriginType getOriginType() const;
    /**
     * @symbol ??0GameDirectorEntityServerCommandOrigin@@QEAA@UActorUniqueID@@AEAVLevel@@@Z
     * @hash   -1994923453
     */
    MCAPI GameDirectorEntityServerCommandOrigin(struct ActorUniqueID, class Level &);
    /**
     * @symbol ??0GameDirectorEntityServerCommandOrigin@@QEAA@AEAVActor@@@Z
     * @hash   -799529738
     */
    MCAPI GameDirectorEntityServerCommandOrigin(class Actor &);
    /**
     * @symbol ?load@GameDirectorEntityServerCommandOrigin@@SA?AV?$unique_ptr@VGameDirectorEntityServerCommandOrigin@@U?$default_delete@VGameDirectorEntityServerCommandOrigin@@@std@@@std@@AEBVCompoundTag@@AEAVLevel@@@Z
     * @hash   1738173118
     */
    MCAPI static std::unique_ptr<class GameDirectorEntityServerCommandOrigin> load(class CompoundTag const &, class Level &);

};