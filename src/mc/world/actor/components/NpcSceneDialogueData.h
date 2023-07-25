#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace npc { struct ActionContainer; }
// clang-format on

class NpcSceneDialogueData {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NPCSCENEDIALOGUEDATA
public:
    NpcSceneDialogueData& operator=(NpcSceneDialogueData const&) = delete;
    NpcSceneDialogueData(NpcSceneDialogueData const&)            = delete;
    NpcSceneDialogueData()                                       = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol
     * ?getDialogueText\@NpcSceneDialogueData\@\@UEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string const& getDialogueText() const;
    /**
     * @vftbl 2
     * @symbol __unk_vfn_2
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl 3
     * @symbol
     * ?getNameText\@NpcSceneDialogueData\@\@UEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string const& getNameText() const;
    /**
     * @vftbl 4
     * @symbol
     * ?getNameRawText\@NpcSceneDialogueData\@\@UEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string const& getNameRawText() const;
    /**
     * @vftbl 5
     * @symbol
     * ?getSceneName\@NpcSceneDialogueData\@\@UEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string const& getSceneName() const;
    /**
     * @vftbl 6
     * @symbol __unk_vfn_6
     */
    virtual void __unk_vfn_6();
    /**
     * @vftbl 7
     * @symbol __unk_vfn_7
     */
    virtual void __unk_vfn_7();
    /**
     * @vftbl 8
     * @symbol ?getActorUniqueID\@NpcSceneDialogueData\@\@UEAA?AUActorUniqueID\@\@XZ
     */
    virtual struct ActorUniqueID getActorUniqueID();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_NPCSCENEDIALOGUEDATA
    /**
     * @symbol ?getActionsContainer\@NpcSceneDialogueData\@\@UEAAPEAUActionContainer\@npc\@\@XZ
     */
    MCVAPI struct npc::ActionContainer* getActionsContainer();
    /**
     * @symbol ?getActionsContainer\@NpcSceneDialogueData\@\@UEBAPEBUActionContainer\@npc\@\@XZ
     */
    MCVAPI struct npc::ActionContainer const* getActionsContainer() const;
    /**
     * @symbol ?getActor\@NpcSceneDialogueData\@\@UEAAPEAVActor\@\@XZ
     */
    MCVAPI class Actor* getActor();
    /**
     * @symbol ?getActor\@NpcSceneDialogueData\@\@UEBAPEBVActor\@\@XZ
     */
    MCVAPI class Actor const* getActor() const;
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~NpcSceneDialogueData();
#endif
    /**
     * @symbol
     * ??0NpcSceneDialogueData\@\@QEAA\@VWeakEntityRef\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI NpcSceneDialogueData(class WeakEntityRef, std::string const&);
};
