/**
 * @file  ScriptItemGameplayHandler.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Scripting.hpp"
#include "ScriptModuleMinecraft.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ScriptItemGameplayHandler.
 *
 */
class ScriptItemGameplayHandler {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTITEMGAMEPLAYHANDLER
public:
    class ScriptItemGameplayHandler& operator=(class ScriptItemGameplayHandler const &) = delete;
    ScriptItemGameplayHandler(class ScriptItemGameplayHandler const &) = delete;
    ScriptItemGameplayHandler() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~ScriptItemGameplayHandler();
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
     * @vftbl  5
     * @symbol __unk_vfn_5
     */
    virtual void __unk_vfn_5();
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
     * @hash   465311526
     * @vftbl  9
     * @symbol ?handleEvent@ScriptItemGameplayHandler@@UEAA?AU?$GameplayHandlerResult@W4CoordinatorResult@@@@AEAUItemDefinitionEventTriggeredEvent@@@Z
     */
    virtual struct GameplayHandlerResult<enum class CoordinatorResult> handleEvent(struct ItemDefinitionEventTriggeredEvent &);
    /**
     * @hash   -234403032
     * @vftbl  10
     * @symbol ?handleEvent@ScriptItemGameplayHandler@@UEAA?AU?$GameplayHandlerResult@W4CoordinatorResult@@@@AEAUItemUseOnEvent@@@Z
     */
    virtual struct GameplayHandlerResult<enum class CoordinatorResult> handleEvent(struct ItemUseOnEvent &);
    /**
     * @hash   -387495351
     * @vftbl  11
     * @symbol ?handleEvent@ScriptItemGameplayHandler@@UEAA?AU?$GameplayHandlerResult@W4CoordinatorResult@@@@AEAUItemUseEvent@@@Z
     */
    virtual struct GameplayHandlerResult<enum class CoordinatorResult> handleEvent(struct ItemUseEvent &);

//private:
    /**
     * @hash   134002215
     * @symbol ?_handleItemDefinitionEventTriggered@ScriptItemGameplayHandler@@AEAA_NAEAUItemDefinitionEventTriggeredEvent@@AEBVWeakLifetimeScope@Scripting@@U?$TypedObjectHandle@VScriptWorldEvents@ScriptModuleMinecraft@@@4@@Z
     */
    MCAPI bool _handleItemDefinitionEventTriggered(struct ItemDefinitionEventTriggeredEvent &, class Scripting::WeakLifetimeScope const &, struct Scripting::TypedObjectHandle<class ScriptModuleMinecraft::ScriptWorldEvents>);
    /**
     * @hash   -1485302817
     * @symbol ?_handleItemUseEvent@ScriptItemGameplayHandler@@AEAA_NAEAUItemUseEvent@@AEBVWeakLifetimeScope@Scripting@@U?$TypedObjectHandle@VScriptWorldEvents@ScriptModuleMinecraft@@@4@@Z
     */
    MCAPI bool _handleItemUseEvent(struct ItemUseEvent &, class Scripting::WeakLifetimeScope const &, struct Scripting::TypedObjectHandle<class ScriptModuleMinecraft::ScriptWorldEvents>);
    /**
     * @hash   -2045153667
     * @symbol ?_handleItemUseOnEvent@ScriptItemGameplayHandler@@AEAA_NAEAUItemUseOnEvent@@AEBVWeakLifetimeScope@Scripting@@U?$TypedObjectHandle@VScriptWorldEvents@ScriptModuleMinecraft@@@4@@Z
     */
    MCAPI bool _handleItemUseOnEvent(struct ItemUseOnEvent &, class Scripting::WeakLifetimeScope const &, struct Scripting::TypedObjectHandle<class ScriptModuleMinecraft::ScriptWorldEvents>);

private:

};