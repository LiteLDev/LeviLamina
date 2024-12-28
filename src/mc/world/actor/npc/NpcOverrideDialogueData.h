#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/npc/INpcDialogueData.h"

// auto generated forward declare list
// clang-format off
class Actor;
struct ActorUniqueID;
namespace npc { struct ActionContainer; }
// clang-format on

struct NpcOverrideDialogueData : public ::INpcDialogueData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 176> mUnk426edd;
    // NOLINTEND

public:
    // prevent constructor by default
    NpcOverrideDialogueData& operator=(NpcOverrideDialogueData const&);
    NpcOverrideDialogueData(NpcOverrideDialogueData const&);
    NpcOverrideDialogueData();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::std::string const& getDialogueText() const /*override*/;

    // vIndex: 5
    virtual ::std::string const& getSceneName() const /*override*/;

    // vIndex: 3
    virtual ::std::string const& getNameText() const /*override*/;

    // vIndex: 7
    virtual ::npc::ActionContainer* getActionsContainer() /*override*/;

    // vIndex: 6
    virtual ::npc::ActionContainer const* getActionsContainer() const /*override*/;

    // vIndex: 11
    virtual bool isRemoteFire() /*override*/;

    // vIndex: 8
    virtual ::ActorUniqueID getActorUniqueID() /*override*/;

    // vIndex: 10
    virtual ::Actor* getActor() /*override*/;

    // vIndex: 9
    virtual ::Actor const* getActor() const /*override*/;

    // vIndex: 0
    virtual ~NpcOverrideDialogueData() /*override*/;
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

    MCAPI ::npc::ActionContainer* $getActionsContainer();

    MCAPI ::npc::ActionContainer const* $getActionsContainer() const;

    MCAPI bool $isRemoteFire();

    MCAPI ::ActorUniqueID $getActorUniqueID();

    MCAPI ::Actor* $getActor();

    MCAPI ::Actor const* $getActor() const;
    // NOLINTEND
};
