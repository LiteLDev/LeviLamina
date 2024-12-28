#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/ecs/WeakEntityRef.h"

// auto generated inclusion list
#include "mc/world/actor/npc/INpcDialogueData.h"

// auto generated forward declare list
// clang-format off
class Actor;
class WeakEntityRef;
struct ActorUniqueID;
namespace npc { struct ActionContainer; }
// clang-format on

struct NpcSceneDialogueData : public ::INpcDialogueData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::WeakEntityRef> mOwner;
    ::ll::TypedStorage<8, 32, ::std::string>   mSceneName;
    // NOLINTEND

public:
    // prevent constructor by default
    NpcSceneDialogueData& operator=(NpcSceneDialogueData const&);
    NpcSceneDialogueData(NpcSceneDialogueData const&);
    NpcSceneDialogueData();

    WeakEntityRef mOwner;     // this+0x8
    std::string   mSceneName; // this+0x20

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::std::string const& getDialogueText() const /*override*/;

    // vIndex: 5
    virtual ::std::string const& getSceneName() const /*override*/;

    // vIndex: 3
    virtual ::std::string const& getNameText() const /*override*/;

    // vIndex: 4
    virtual ::std::string const& getNameRawText() const /*override*/;

    // vIndex: 7
    virtual ::npc::ActionContainer* getActionsContainer() /*override*/;

    // vIndex: 6
    virtual ::npc::ActionContainer const* getActionsContainer() const /*override*/;

    // vIndex: 8
    virtual ::ActorUniqueID getActorUniqueID() /*override*/;

    // vIndex: 10
    virtual ::Actor* getActor() /*override*/;

    // vIndex: 9
    virtual ::Actor const* getActor() const /*override*/;

    // vIndex: 0
    virtual ~NpcSceneDialogueData() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI NpcSceneDialogueData(::WeakEntityRef npc, ::std::string const& sceneName);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::WeakEntityRef npc, ::std::string const& sceneName);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::string const& $getDialogueText() const;

    MCAPI ::std::string const& $getSceneName() const;

    MCAPI ::std::string const& $getNameText() const;

    MCAPI ::std::string const& $getNameRawText() const;

    MCAPI ::npc::ActionContainer* $getActionsContainer();

    MCAPI ::npc::ActionContainer const* $getActionsContainer() const;

    MCAPI ::ActorUniqueID $getActorUniqueID();

    MCAPI ::Actor* $getActor();

    MCAPI ::Actor const* $getActor() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
