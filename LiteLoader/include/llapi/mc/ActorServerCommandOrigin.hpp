/**
 * @file  ActorServerCommandOrigin.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "ActorCommandOrigin.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ActorServerCommandOrigin.
 *
 */
class ActorServerCommandOrigin : public ActorCommandOrigin {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORSERVERCOMMANDORIGIN
public:
    class ActorServerCommandOrigin& operator=(class ActorServerCommandOrigin const &) = delete;
    ActorServerCommandOrigin(class ActorServerCommandOrigin const &) = delete;
    ActorServerCommandOrigin() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~ActorServerCommandOrigin();
    /**
     * @hash   803170851
     * @vftbl  9
     * @symbol ?getPermissionsLevel@ActorServerCommandOrigin@@UEBA?AW4CommandPermissionLevel@@XZ
     */
    virtual enum CommandPermissionLevel getPermissionsLevel() const;
    /**
     * @hash   -1496134743
     * @vftbl  10
     * @symbol ?clone@ActorServerCommandOrigin@@UEBA?AV?$unique_ptr@VCommandOrigin@@U?$default_delete@VCommandOrigin@@@std@@@std@@XZ
     */
    virtual std::unique_ptr<class CommandOrigin> clone() const;
    /**
     * @hash   -1205491695
     * @vftbl  18
     * @symbol ?isSelectorExpansionAllowed@ActorServerCommandOrigin@@UEBA_NXZ
     */
    virtual bool isSelectorExpansionAllowed() const;
    /**
     * @hash   817924200
     * @vftbl  23
     * @symbol ?getOriginType@ActorServerCommandOrigin@@UEBA?AW4CommandOriginType@@XZ
     */
    virtual enum CommandOriginType getOriginType() const;
    /**
     * @hash   -1152449889
     * @vftbl  29
     * @symbol ?serialize@ActorServerCommandOrigin@@UEBA?AVCompoundTag@@XZ
     */
    virtual class CompoundTag serialize() const;
    /**
     * @hash   706282384
     * @symbol ?getTargetOther@ActorServerCommandOrigin@@QEBA?AUActorUniqueID@@XZ
     */
    MCAPI struct ActorUniqueID getTargetOther() const;
    /**
     * @hash   1382686810
     * @symbol ?setTargetOther@ActorServerCommandOrigin@@QEAAXUActorUniqueID@@@Z
     */
    MCAPI void setTargetOther(struct ActorUniqueID);
    /**
     * @hash   1420607668
     * @symbol ?load@ActorServerCommandOrigin@@SA?AV?$unique_ptr@VActorServerCommandOrigin@@U?$default_delete@VActorServerCommandOrigin@@@std@@@std@@AEBVCompoundTag@@AEAVLevel@@@Z
     */
    MCAPI static std::unique_ptr<class ActorServerCommandOrigin> load(class CompoundTag const &, class Level &);

};