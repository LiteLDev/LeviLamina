/**
 * @file  ScriptBlockGameplayHandler.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Scripting.hpp"
#include "ScriptModuleMinecraft.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ScriptBlockGameplayHandler.
 *
 */
class ScriptBlockGameplayHandler {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTBLOCKGAMEPLAYHANDLER
public:
    class ScriptBlockGameplayHandler& operator=(class ScriptBlockGameplayHandler const &) = delete;
    ScriptBlockGameplayHandler(class ScriptBlockGameplayHandler const &) = delete;
    ScriptBlockGameplayHandler() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~ScriptBlockGameplayHandler();
    /**
     * @vftbl  1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl  2
     * @symbol __unk_vfn_2
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl  3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol __unk_vfn_4
     */
    virtual void __unk_vfn_4();
    /**
     * @hash   -1468984357
     * @vftbl  5
     * @symbol ?handleEvent@ScriptBlockGameplayHandler@@UEAA?AU?$GameplayHandlerResult@W4CoordinatorResult@@@@AEAUExplosionStartedEvent@@@Z
     */
    virtual struct GameplayHandlerResult<enum CoordinatorResult> handleEvent(struct ExplosionStartedEvent &);
    /**
     * @vftbl  6
     * @symbol __unk_vfn_6
     */
    virtual void __unk_vfn_6();
    /**
     * @vftbl  7
     * @symbol __unk_vfn_7
     */
    virtual void __unk_vfn_7();
    /**
     * @vftbl  8
     * @symbol __unk_vfn_8
     */
    virtual void __unk_vfn_8();
    /**
     * @hash   -1024143397
     * @vftbl  9
     * @symbol ?handleEvent@ScriptBlockGameplayHandler@@UEAA?AU?$GameplayHandlerResult@W4CoordinatorResult@@@@AEBUPistonActionEvent@@@Z
     */
    virtual struct GameplayHandlerResult<enum CoordinatorResult> handleEvent(struct PistonActionEvent const &);

//private:
    /**
     * @hash   733214830
     * @symbol ?_handleExplosionStartedEvent@ScriptBlockGameplayHandler@@AEBA_NAEAUExplosionStartedEvent@@AEBVWeakLifetimeScope@Scripting@@U?$TypedObjectHandle@VScriptWorldEvents@ScriptModuleMinecraft@@@4@@Z
     */
    MCAPI bool _handleExplosionStartedEvent(struct ExplosionStartedEvent &, class Scripting::WeakLifetimeScope const &, struct Scripting::TypedObjectHandle<class ScriptModuleMinecraft::ScriptWorldEvents>) const;
    /**
     * @hash   -1869192111
     * @symbol ?_handlePistonActionEvent@ScriptBlockGameplayHandler@@AEBA_NAEBUPistonActionEvent@@AEBVWeakLifetimeScope@Scripting@@U?$TypedObjectHandle@VScriptWorldEvents@ScriptModuleMinecraft@@@4@@Z
     */
    MCAPI bool _handlePistonActionEvent(struct PistonActionEvent const &, class Scripting::WeakLifetimeScope const &, struct Scripting::TypedObjectHandle<class ScriptModuleMinecraft::ScriptWorldEvents>) const;

private:

};