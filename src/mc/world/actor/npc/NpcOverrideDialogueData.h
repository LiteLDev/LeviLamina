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
    virtual ::std::string const& getDialogueText() const /*override*/;

    virtual ::std::string const& getSceneName() const /*override*/;

    virtual ::std::string const& getNameText() const /*override*/;

    virtual ::npc::ActionContainer* getActionsContainer() /*override*/;

    virtual ::npc::ActionContainer const* getActionsContainer() const /*override*/;

    virtual bool isRemoteFire() /*override*/;

    virtual ::ActorUniqueID getActorUniqueID() /*override*/;

    virtual ::Actor* getActor() /*override*/;

    virtual ::Actor const* getActor() const /*override*/;

    virtual ~NpcOverrideDialogueData() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ::std::string const& $getDialogueText() const;

    MCNAPI ::std::string const& $getSceneName() const;

    MCNAPI ::std::string const& $getNameText() const;

    MCNAPI ::npc::ActionContainer* $getActionsContainer();

    MCNAPI ::npc::ActionContainer const* $getActionsContainer() const;

    MCNAPI bool $isRemoteFire();

    MCNAPI ::ActorUniqueID $getActorUniqueID();

    MCNAPI ::Actor* $getActor();

    MCNAPI ::Actor const* $getActor() const;
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
