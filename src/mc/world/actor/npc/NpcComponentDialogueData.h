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

struct NpcComponentDialogueData : public ::INpcDialogueData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkfdaf47;
    ::ll::UntypedStorage<1, 1>  mUnk4842f9;
    // NOLINTEND

public:
    // prevent constructor by default
    NpcComponentDialogueData& operator=(NpcComponentDialogueData const&);
    NpcComponentDialogueData(NpcComponentDialogueData const&);
    NpcComponentDialogueData();

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
    virtual ~NpcComponentDialogueData() /*override*/;
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

    MCAPI ::std::string const& $getRawDialogueText() const;

    MCAPI ::std::string const& $getNameText() const;

    MCAPI ::std::string const& $getNameRawText() const;

    MCAPI ::std::string const& $getSceneName() const;

    MCAPI ::npc::ActionContainer* $getActionsContainer();

    MCAPI ::npc::ActionContainer const* $getActionsContainer() const;

    MCAPI ::ActorUniqueID $getActorUniqueID();

    MCAPI ::Actor* $getActor();

    MCAPI ::Actor const* $getActor() const;

    MCAPI bool $isRemoteFire();
    // NOLINTEND
};
