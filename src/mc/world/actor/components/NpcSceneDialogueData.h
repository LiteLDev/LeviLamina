#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/player/INpcDialogueData.h"

// auto generated forward declare list
// clang-format off
namespace npc { struct ActionContainer; }
// clang-format on

class NpcSceneDialogueData : public ::INpcDialogueData {
public:
    // prevent constructor by default
    NpcSceneDialogueData& operator=(NpcSceneDialogueData const&);
    NpcSceneDialogueData(NpcSceneDialogueData const&);
    NpcSceneDialogueData();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1NpcSceneDialogueData@@UEAA@XZ
    virtual ~NpcSceneDialogueData();

    // vIndex: 1, symbol:
    // ?getDialogueText@NpcSceneDialogueData@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string const& getDialogueText() const;

    // vIndex: 2, symbol:
    // ?getRawDialogueText@INpcDialogueData@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string const& getRawDialogueText() const;

    // vIndex: 3, symbol:
    // ?getNameText@NpcSceneDialogueData@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string const& getNameText() const;

    // vIndex: 4, symbol:
    // ?getNameRawText@NpcSceneDialogueData@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string const& getNameRawText() const;

    // vIndex: 5, symbol:
    // ?getSceneName@NpcSceneDialogueData@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string const& getSceneName() const;

    // vIndex: 6, symbol: __unk_vfn_6
    virtual void __unk_vfn_6();

    // vIndex: 7, symbol: __unk_vfn_7
    virtual void __unk_vfn_7();

    // vIndex: 8, symbol: ?getActorUniqueID@NpcSceneDialogueData@@UEAA?AUActorUniqueID@@XZ
    virtual struct ActorUniqueID getActorUniqueID();

    // vIndex: 9, symbol: __unk_vfn_9
    virtual void __unk_vfn_9();

    // vIndex: 10, symbol: __unk_vfn_10
    virtual void __unk_vfn_10();

    // vIndex: 11, symbol: ?isRemoteFire@INpcDialogueData@@UEAA_NXZ
    virtual bool isRemoteFire();

    // symbol: ?getActionsContainer@NpcSceneDialogueData@@UEAAPEAUActionContainer@npc@@XZ
    MCVAPI struct npc::ActionContainer* getActionsContainer();

    // symbol: ?getActionsContainer@NpcSceneDialogueData@@UEBAPEBUActionContainer@npc@@XZ
    MCVAPI struct npc::ActionContainer const* getActionsContainer() const;

    // symbol: ?getActor@NpcSceneDialogueData@@UEAAPEAVActor@@XZ
    MCVAPI class Actor* getActor();

    // symbol: ?getActor@NpcSceneDialogueData@@UEBAPEBVActor@@XZ
    MCVAPI class Actor const* getActor() const;

    // symbol:
    // ??0NpcSceneDialogueData@@QEAA@VWeakEntityRef@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI NpcSceneDialogueData(class WeakEntityRef npc, std::string const&);

    // NOLINTEND
};
