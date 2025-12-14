#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/npc/INpcDialogueData.h"
#include "mc/world/actor/npc/NPCDialogueData.h"

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
    ::ll::TypedStorage<8, 176, ::NPCDialogueData> mData;
    // NOLINTEND

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
    MCFOLD ::std::string const& $getDialogueText() const;

    MCFOLD ::std::string const& $getSceneName() const;

    MCFOLD ::std::string const& $getNameText() const;

    MCFOLD ::npc::ActionContainer* $getActionsContainer();

    MCFOLD ::npc::ActionContainer const* $getActionsContainer() const;

    MCFOLD bool $isRemoteFire();

    MCFOLD ::ActorUniqueID $getActorUniqueID();

    MCFOLD ::Actor* $getActor();

    MCFOLD ::Actor const* $getActor() const;
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
