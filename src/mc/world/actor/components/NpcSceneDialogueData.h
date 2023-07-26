#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace npc { struct ActionContainer; }
// clang-format on

class NpcSceneDialogueData {

public:
    // prevent constructor by default
    NpcSceneDialogueData& operator=(NpcSceneDialogueData const&) = delete;
    NpcSceneDialogueData(NpcSceneDialogueData const&)            = delete;
    NpcSceneDialogueData()                                       = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol
     * ?getDialogueText\@NpcSceneDialogueData\@\@UEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string const& getDialogueText() const; // NOLINT
    /**
     * @vftbl 2
     * @symbol __unk_vfn_2
     */
    virtual void __unk_vfn_2(); // NOLINT
    /**
     * @vftbl 3
     * @symbol
     * ?getNameText\@NpcSceneDialogueData\@\@UEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string const& getNameText() const; // NOLINT
    /**
     * @vftbl 4
     * @symbol
     * ?getNameRawText\@NpcSceneDialogueData\@\@UEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string const& getNameRawText() const; // NOLINT
    /**
     * @vftbl 5
     * @symbol
     * ?getSceneName\@NpcSceneDialogueData\@\@UEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string const& getSceneName() const; // NOLINT
    /**
     * @vftbl 6
     * @symbol __unk_vfn_6
     */
    virtual void __unk_vfn_6(); // NOLINT
    /**
     * @vftbl 7
     * @symbol __unk_vfn_7
     */
    virtual void __unk_vfn_7(); // NOLINT
    /**
     * @vftbl 8
     * @symbol ?getActorUniqueID\@NpcSceneDialogueData\@\@UEAA?AUActorUniqueID\@\@XZ
     */
    virtual struct ActorUniqueID getActorUniqueID(); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_NPCSCENEDIALOGUEDATA
    /**
     * @symbol ?getActionsContainer\@NpcSceneDialogueData\@\@UEAAPEAUActionContainer\@npc\@\@XZ
     */
    MCVAPI struct npc::ActionContainer* getActionsContainer(); // NOLINT
    /**
     * @symbol ?getActionsContainer\@NpcSceneDialogueData\@\@UEBAPEBUActionContainer\@npc\@\@XZ
     */
    MCVAPI struct npc::ActionContainer const* getActionsContainer() const; // NOLINT
    /**
     * @symbol ?getActor\@NpcSceneDialogueData\@\@UEAAPEAVActor\@\@XZ
     */
    MCVAPI class Actor* getActor(); // NOLINT
    /**
     * @symbol ?getActor\@NpcSceneDialogueData\@\@UEBAPEBVActor\@\@XZ
     */
    MCVAPI class Actor const* getActor() const; // NOLINT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~NpcSceneDialogueData(); // NOLINT
#endif
    /**
     * @symbol
     * ??0NpcSceneDialogueData\@\@QEAA\@VWeakEntityRef\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI NpcSceneDialogueData(class WeakEntityRef, std::string const&); // NOLINT
};
