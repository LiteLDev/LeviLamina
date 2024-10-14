#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/npc/INpcDialogueData.h"

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

    MCAPI NpcSceneDialogueData(class WeakEntityRef npc, std::string const& sceneName);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    MCAPI struct npc::ActionContainer const* getActionsContainer$() const;

    MCAPI struct npc::ActionContainer* getActionsContainer$();

    MCAPI class Actor const* getActor$() const;

    MCAPI class Actor* getActor$();

    MCAPI struct ActorUniqueID getActorUniqueID$();

    MCAPI std::string const& getDialogueText$() const;

    MCAPI std::string const& getNameRawText$() const;

    MCAPI std::string const& getNameText$() const;

    MCAPI std::string const& getRawDialogueText$() const;

    MCAPI std::string const& getSceneName$() const;

    MCAPI bool isRemoteFire$();

    // NOLINTEND
};
