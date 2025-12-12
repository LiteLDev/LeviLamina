#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/world/actor/npc/INpcDialogueData.h"

// auto generated forward declare list
// clang-format off
class Actor;
struct ActorUniqueID;
namespace npc { struct ActionContainer; }
// clang-format on

struct NpcComponentDialogueData : public ::INpcDialogueData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::WeakEntityRef> mOwner;
    ::ll::TypedStorage<1, 1, bool>             mIsRemoteFire;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::std::string const& getDialogueText() const /*override*/;

    // vIndex: 2
    virtual ::std::string const& getRawDialogueText() const /*override*/;

    // vIndex: 3
    virtual ::std::string const& getNameText() const /*override*/;

    // vIndex: 4
    virtual ::std::string const& getNameRawText() const /*override*/;

    // vIndex: 5
    virtual ::std::string const& getSceneName() const /*override*/;

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

    // vIndex: 11
    virtual bool isRemoteFire() /*override*/;

    // vIndex: 0
    virtual ~NpcComponentDialogueData() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
