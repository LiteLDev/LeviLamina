/**
 * @file  MC/NpcSceneDialogueData.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
#include "NpcComponent.hpp"
#include "WeakEntityRef.hpp"
#undef BEFORE_EXTRA

/**
 * @brief MC class NpcSceneDialogueData.
 *
 */
class NpcSceneDialogueData {

#define AFTER_EXTRA
// Add Member There
#define ENABLE_VIRTUAL_FAKESYMBOL_NPCSCENEDIALOGUEDATA
public:
    WeakEntityRef mWer;
    string mString;
#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NPCSCENEDIALOGUEDATA
public:
    class NpcSceneDialogueData& operator=(class NpcSceneDialogueData const &) = delete;
    NpcSceneDialogueData(class NpcSceneDialogueData const &) = delete;
    NpcSceneDialogueData() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~NpcSceneDialogueData();
    /**
     * @hash   1373378054
     * @vftbl  1
     * @symbol ?getDialogueText@NpcSceneDialogueData@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string const & getDialogueText() const;
    /**
     * @vftbl  2
     * @symbol __unk_vfn_2
     */
    virtual void __unk_vfn_2();
    /**
     * @hash   1723928217
     * @vftbl  3
     * @symbol ?getNameText@NpcSceneDialogueData@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string const & getNameText() const;
    /**
     * @hash   -1988786497
     * @vftbl  4
     * @symbol ?getNameRawText@NpcSceneDialogueData@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string const & getNameRawText() const;
    /**
     * @hash   1006107324
     * @vftbl  5
     * @symbol ?getSceneName@NpcSceneDialogueData@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string const & getSceneName() const;
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
     * @hash   1910129768
     * @vftbl  8
     * @symbol ?getActorUniqueID@NpcSceneDialogueData@@UEAA?AUActorUniqueID@@XZ
     */
    virtual struct ActorUniqueID getActorUniqueID();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_NPCSCENEDIALOGUEDATA
    /**
     * @hash   -334024896
     * @symbol ?getActionsContainer@NpcSceneDialogueData@@UEAAPEAUNpcActionsContainer@@XZ
     */
    MCVAPI struct NpcActionsContainer * getActionsContainer();
    /**
     * @hash   -902066308
     * @symbol ?getActionsContainer@NpcSceneDialogueData@@UEBAPEBUNpcActionsContainer@@XZ
     */
    MCVAPI struct NpcActionsContainer const * getActionsContainer() const;
    /**
     * @hash   2072476066
     * @symbol ?getActor@NpcSceneDialogueData@@UEAAPEAVActor@@XZ
     */
    MCVAPI class Actor * getActor();
    /**
     * @hash   1354439710
     * @symbol ?getActor@NpcSceneDialogueData@@UEBAPEBVActor@@XZ
     */
    MCVAPI class Actor const * getActor() const;
#endif
    /**
     * @hash   797868339
     * @symbol ??0NpcSceneDialogueData@@QEAA@VWeakEntityRef@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI NpcSceneDialogueData(class WeakEntityRef, std::string const &);

};