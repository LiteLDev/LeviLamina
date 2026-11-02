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

#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    NpcOverrideDialogueData();

#endif
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
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI explicit NpcOverrideDialogueData(::NPCDialogueData&& overrideData);
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::NPCDialogueData&& overrideData);
#endif
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
