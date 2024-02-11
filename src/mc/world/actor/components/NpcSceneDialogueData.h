#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/entity/WeakEntityRef.h"

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

    WeakEntityRef mOwner;     // this+0x8
    std::string   mSceneName; // this+0x20

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

    // vIndex: 6, symbol: ?getActionsContainer@NpcSceneDialogueData@@UEBAPEBUActionContainer@npc@@XZ
    virtual struct npc::ActionContainer const* getActionsContainer() const;

    // vIndex: 7, symbol: ?getActionsContainer@NpcSceneDialogueData@@UEAAPEAUActionContainer@npc@@XZ
    virtual struct npc::ActionContainer* getActionsContainer();

    // vIndex: 8, symbol: ?getActorUniqueID@NpcSceneDialogueData@@UEAA?AUActorUniqueID@@XZ
    virtual struct ActorUniqueID getActorUniqueID();

    // vIndex: 9, symbol: ?getActor@NpcSceneDialogueData@@UEBAPEBVActor@@XZ
    virtual class Actor const* getActor() const;

    // vIndex: 10, symbol: ?getActor@NpcSceneDialogueData@@UEAAPEAVActor@@XZ
    virtual class Actor* getActor();

    // vIndex: 11, symbol: ?isRemoteFire@INpcDialogueData@@UEAA_NXZ
    virtual bool isRemoteFire();

    // symbol:
    // ??0NpcSceneDialogueData@@QEAA@VWeakEntityRef@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI NpcSceneDialogueData(class WeakEntityRef npc, std::string const&);

    // NOLINTEND
};
