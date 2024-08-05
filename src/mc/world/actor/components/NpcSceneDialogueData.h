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
    // vIndex: 0
    virtual ~NpcSceneDialogueData();

    // vIndex: 1
    virtual std::string const& getDialogueText() const;

    // vIndex: 2
    virtual std::string const& getRawDialogueText() const;

    // vIndex: 3
    virtual std::string const& getNameText() const;

    // vIndex: 4
    virtual std::string const& getNameRawText() const;

    // vIndex: 5
    virtual std::string const& getSceneName() const;

    // vIndex: 6
    virtual struct npc::ActionContainer const* getActionsContainer() const;

    // vIndex: 7
    virtual struct npc::ActionContainer* getActionsContainer();

    // vIndex: 8
    virtual struct ActorUniqueID getActorUniqueID();

    // vIndex: 9
    virtual class Actor const* getActor() const;

    // vIndex: 10
    virtual class Actor* getActor();

    // vIndex: 11
    virtual bool isRemoteFire();

    MCAPI NpcSceneDialogueData(class WeakEntityRef npc, std::string const&);

    // NOLINTEND
};
